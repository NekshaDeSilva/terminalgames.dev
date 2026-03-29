#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int randomness =1;
    //go
    string name;
    vector<char> stff;

    cin>> name;
    for(auto& x: name){
        stff.push_back(x);

    }   
    // Count unique characters
    sort(stff.begin(), stff.end());
    stff.erase(unique(stff.begin(), stff.end()), stff.end());
    randomness = stff.size();
    
     if(randomness%2 == 0){
        cout << "CHAT WITH HER!";

     }else{
        cout << "IGNORE HIM!";

     }
    
}   
