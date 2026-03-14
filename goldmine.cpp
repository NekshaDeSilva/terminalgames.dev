#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;
int calcthegold(vector<vector<int>>& goldnumber){
    for (auto& row: goldnumber){
        for(auto& numbergold: row){
            cout << numbergold;

        }
        cout << endl;
    }
    return 0;

}
int main(){
    
    vector<vector<int>> goldarena(12, vector<int>(12, 0));
    calcthegold(goldarena);

}