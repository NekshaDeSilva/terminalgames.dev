#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <fstream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cstdio>
#include <numeric>
#include <string>
#include <utility>
#include <random>
#include <chrono>
using namespace std;
using ll = long long;
using ss= string;
using dd = double;
#define sort(x) sort(x.begin(), x.end())
#define pb(x) push_back(x)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //go

    int n;
    cin >> n;
    vector<int> songs(n);
    for (int i = 0; i < n; i++) cin >> songs[i];

    set<int> current_window; // Our "Unique Only" box 📦
    int left = 0, max_len = 0;

    for (int right = 0; right < n; right++) {
        // 1. While the new song is already in our box...
        while (current_window.count(songs[right])) {
            // 2. Throw out the oldest song from the box
            current_window.erase(songs[left]);
            // 3. Slide the left edge forward
            left++;
        }
        
        // 4. Now the new song can safely enter the box
        current_window.insert(songs[right]);
        
        // 5. Check how big the box is now
        max_len = max(max_len, right - left + 1);
    }

    cout << max_len << endl;
    return 0;


}