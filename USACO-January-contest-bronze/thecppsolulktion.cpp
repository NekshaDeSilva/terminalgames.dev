#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    vector<int> inputs;
    vector<int> allthesums;
    allthesums.reserve(100);
    inputs.reserve(100);
    int temop42;
    for(int i = 0; i < 5; i++){
        cin >>  temop42;
        inputs.push_back(temop42);

    }
    int twmp4 = 0;

    for(int i =0; i < inputs.size(); i++){
        for(int x = i+1; x < inputs.size(); x++){
            twmp4= inputs[i] + inputs[x];
            allthesums.push_back(twmp4);

        }
    }
    auto maxpair = *max_element(allthesums.begin(), allthesums.end());
    cout << maxpair;

}