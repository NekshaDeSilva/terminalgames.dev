#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <array>
#include <cmath>
#include <utility>
#include <random>
/*New one*/
#include <climits>
using ll = long long;
#define s(x) sort((x).begin(), (x).end())
using namespace std;

    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int numofvals = 0;
    cin>> numofvals;
    vector<int> list;
    int temp;

    for(int i =0;  i < numofvals; i++){
        cin >> temp;

        list.push_back(temp);
    
    
    }
    vector<pair<int, int>> dup;
    s(list);
    int f = 1;

    for(int i =0;  i < numofvals ; i++){
        for(int x= (i+1); x < numofvals; x++){
                if(list[i] == list[x]){
                dup.emplace_back(i, f++);
                    
                }
        }
    }
    sort(dup.begin(), dup.end(), [](const auto& start, const auto& end){
        return start > end;

    })
    dup.erase(remove_if(dup.begin(), dup.end(),[](const pair<int, int>& p) { return p.first == 0; }),dup.end());

    if (dup.empty()) return 0; // or handle as needed
    cout << dup[0].first;

}
//refer to the functors and function pointers
