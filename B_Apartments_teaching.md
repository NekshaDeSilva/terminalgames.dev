# B_Apartments.cpp — What went wrong and why the fixed recursion works

This note compares your earlier code to the current working version in [B_Apartments.cpp](B_Apartments.cpp).

## 1) Compile-time issues (syntax/type)

### A) Type alias definition

Old attempt:

```cpp
#define ll = long long
```

Problem:
- Macro syntax is invalid for this use.

Working form:

```cpp
using ll = long long;
```

Why it works:
- `using` creates a real type alias that the compiler understands safely.

---

### B) Missing semicolon after alias

Old attempt:

```cpp
using ll = long long
using namespace std;
```

Problem:
- Missing `;` after `long long` breaks parsing of the next line.

Working form:

```cpp
using ll = long long;
using namespace std;
```

---

### C) Indexing a number like an array

Old code pattern:

```cpp
if(applicantsn[i] == 1)
```

Problem:
- `applicantsn` is a single `ll` count, not a vector.

Working code pattern:

```cpp
if(current[i] == 1)
```

Why it works:
- `current` is the vector that stores match state per applicant.

---

### D) Reference type mismatch

Old signature:

```cpp
bool checkitfinished(vector<ll>& current, ll applicantsn)
```

But call site used:

```cpp
vector<int> current(...);
checkitfinished(current, applicantsn);
```

Problem:
- `vector<int>` cannot bind to `vector<ll>&`.

Working signature:

```cpp
bool checkitfinished(vector<int>& current, ll applicantsn)
```

---

### E) Non-void function without guaranteed return

Old `recurse()` had paths where no value was returned.

Problem:
- Undefined behavior / compiler warning.

Fix:
- Ensure every path returns `ll`.

## 2) Logic issues in old recursive matching

### A) Wrong chained comparison in C++

Old code:

```cpp
if(nego1 <= desired[i] <= nego2)
```

Problem:
- In C++, this is evaluated left-to-right as boolean math, not range syntax.

Correct style:

```cpp
if(nego1 <= desired[i] && desired[i] <= nego2)
```

### B) No stable state progression in recursion

Old recursive loop called `recurse(...)` repeatedly but did not correctly control indices for both lists, causing repeated/incorrect exploration.

## 3) Why the new recursive version works

Current strategy (still recursive):

1. Sort `desired` and `reality`.
2. Recurse with two indices:
   - `ai` = applicant pointer
   - `ri` = apartment pointer
3. At each step:
   - If apartment too small (`reality[ri] < desired[ai] - k`): move apartment pointer.
   - If apartment too large (`reality[ri] > desired[ai] + k`): move applicant pointer.
   - Otherwise it matches: count `1` and move both pointers.

This is exactly the standard greedy matching logic, but written recursively.

Base case:

```cpp
if(ai >= applicantsn || ri >= apartmentsn) return 0;
```

Why this is correct:
- Once one list is exhausted, no further matches are possible.

## 4) Complexity

- Sorting: $O(n \log n + m \log m)$
- Recursive scan: $O(n+m)$
- Total: $O(n \log n + m \log m)$

## 5) Key takeaways

- Use `using` for type aliases, not `#define` with `=`.
- Keep data types consistent across function signatures and call sites.
- Do not index scalar variables.
- In C++, range checks need `&&`.
- In recursion, always define:
  - clear state (`ai`, `ri`)
  - valid base case
  - guaranteed progress toward base case
  - guaranteed return on all paths
