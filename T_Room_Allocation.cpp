/*Nekshavs*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<Customer> customers(n);
    for (int i = 0; i < n; ++i) {
        cin >> customers[i].start >> customers[i].end;
        customers[i].index = i;
    }

    sort(customers.begin(), customers.end(), compareCustomers);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> room_assigned(n);

    int rooms = 0;
    for (int i = 0; i < n; ++i) {
        if (pq.empty() || pq.top().first >= customers[i].start) {
            rooms++;
            pq.push({customers[i].end, rooms});
            room_assigned[customers[i].index] = rooms;
        } else {
            int room = pq.top().second;
            pq.pop();
            pq.push({customers[i].end, room});
            room_assigned[customers[i].index] = room;
        }
    }

    cout << rooms << "\n";
    for (int i = 0; i < n; ++i) {
        cout << room_assigned[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}
