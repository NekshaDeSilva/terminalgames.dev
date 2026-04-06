#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <array>
#include <cmath>
#include <random>
using ll = long long;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int numofstones;
    cin >> numofstones;

    vector<int> stonew;
    stonew.reserve(1000);
    int tempval ;
    for(int  i =0; i < numofstones; i++){
       cin >> tempval; 
       stonew.push_back(tempval);
    }
    sort(stonew.begin() ,stonew.end());
    int min =0;
    vector<int> minvals;
    minvals.reserve(numofstones);
    for(int i =0; i < numofstones; i ++){
        for(int x = i+1; x< numofstones;  x++){
            min = abs(stonew[i] - stonew[x]);
            minvals.push_back(min);
        }
    }
    auto& leastval= *min_element(minvals.begin(), minvals.end());
    cout << leastval;


}