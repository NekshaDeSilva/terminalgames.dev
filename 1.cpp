#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& current) {
    cout << "{ ";
    for (int x : current) {
        cout << x << " ";
    }
    cout << "}\n";
}

void gen(int index, vector<int>& current, vector<int>& a, int n) {
    if (index == n) {
        printVector(current);
        return;
    }

    // choice 1: skip a[index]
    gen(index + 1, current, a, n);

    // choice 2: take a[index]
    current.push_back(a[index]);
    gen(index + 1, current, a, n);
    current.pop_back();
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> current;
    int n = a.size();

    gen(0, current, a, n);
}