#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cstring>
#include <fstream>
#include <random>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <utility>
#include <numeric>
#include <ctime>


using namespace std;

void () {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> O, C;
    


         for (int i = 0; i < n; ++i) {
        if (s[i] == '(') O.push_back(i);
          else C.push_back(i);
    }

    int c = O.size();
            int d = C.size();

     int inthatm = n + 1;
    int bestx = 0;
    int betsy = 0;

    int inthatem = min(k, c);
    vector<char> del(n, 0);

    for (int x = 0; x <=  inthatem ; ++x) {
        int y = min(k - x, d);
     
        for (int i = 0; i < x; ++i) del[O[i]] = 1;
        for (int i = 0; i < y; ++i) del[C[d - 1 - i]] = 1;

        int availabel = 0;
        int groups = 0;
        for (int i = 0; i < n; ++i) {
            if (del[i]) continue;
            
            if (s[i] == '(') {
                availabel++;
            } else {
                if (availabel > 0) {
                    availabel--;
                    groups++;
                }
            }
        }
        
        if (groups < inthatm) {
            inthatm = groups;
            bestx = x;
            betsy = y;
        }
        
        for (int i=0; i  < x; ++ i)   del[O[i]] = 0;
        for  (int i = 0; i < y; ++i)  del[C[d - 1 - i]]  = 0;
    }

    string  ans(n,  '0' );
    for (int i = 0; i < bestx; ++i) ans[O[i]] = '1';

    for (int i = 0; i < betsy; ++i) ans[C[d - 1 - i]] = '1';
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //go
    int t;
    if (cin >> t) {
        while (t-- ) {
            ();
        }
    }
    return 0;
}