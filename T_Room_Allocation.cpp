/*nekshavs*/
#include <queue>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <random>
#include <climits>
#include <cmath>
#include <cstdio>
using namespace std;
using ll = long long;
#define pb push_back(x)
#define eb emplace_back(x)

struct Customer {
    int start;
    int end;
    int index;
};

bool compareCustomers(const Customer& a, const Customer& b) {
    if (a.start == b.start)
        return a.end < b.end;
    return a.start < b.start;
}

int main(){
    ios_base::sync_with_stdio (false);
    cin.tie(NULL);
    
    int n;
    if (!(cin >> n)) return 0;

    vector<Customer> people(n);
    for (int i = 0; i < n; ++i) {
        cin >> people[i].start >> people[i].end;
        people[i].index = i;
    }

    sort(people.begin(), people.end(), compareCustomers);

    priority_queue<pair<int, int>, vector<pair<int, int>>,
    
    greater<pair<int, int>>> pq;
    vector<int> roomse(n);

    int rooms = 0;
    for (int i = 0; i < n; ++i) {
        if (pq.empty() || pq.top().first >= people[i].start) {
            rooms++;
            pq.push({people[i].end, rooms});
            roomse[people[i].index] = rooms;
        } else {
         
            int room = pq.top().second;
            pq.pop();
            pq.push({people[i].end, room});
            roomse[people[i].index] = room;
        }
    }

    cout << rooms <<    "\n";
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << roomse[i];
    }
    cout << "\n";

    return 0;
}