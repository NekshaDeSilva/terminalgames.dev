#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <array>
#include <cmath>
#include <random>
/*New one*/
#include <climits>
using ll = long long;
#define s(x) sort((x).begin(), (x).end())
using namespace std;

    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> list;
    int temp;
    int numofelms;
    cin >> numofelms;
    
    for(int i  =0 ; i < numofelms; i ++){
        cin >> temp;
        list.push_back(temp);

    }
    s(list);
    list.erase(unique(list.begin(), list.end()), list.end());
    cout << list.size();
}