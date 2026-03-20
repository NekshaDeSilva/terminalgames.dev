#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <array>
#include <random>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<int,int>> list ;
    list.reserve(100);
    int firstval, secval;

    for(;;){

        cin >> firstval >> secval;
        list.emplace_back(firstval, secval);
        if(list.size() > 10){
            break;

        }

    }
    sort(list.begin(), list.end(), [](auto a, auto b){
        return a > b;
    });

    for (int i = 0; i < list.size(); i ++){
        cout <<  list[i].first   << " " << list[i].second << "\n"; 

    }



}