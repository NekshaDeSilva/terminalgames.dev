/*Nekshavs*/
#include <iostream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <utility>
#include <numeric>
#include <cmath>
#include <climits>
#include <random>
#include <string>
#include <array>
#include <vector>
// #include <fstream>  a new lib just used for context
using  ll =long long;
using namespace std;
void flip(vector<vector<int>>& cows, int numofcows, int temprow, int tempcol, int actrow, int actcol){
    for(int i =0; i <= temprow; i ++){
        for(int x = 0; x <= tempcol; x++){
            if(cows[i][x] == 0){
                cows[i][x] = 1;
            }else{
                cows[i][x] = 0;

            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    freopen("cowtip.in", "r" ,stdin);
    freopen("cowtip.out", "w" , stdout);
    vector<vector<int>>  cows;
    ll numofrows = 0;
    cin >> numofrows;
    cows.reserve(numofrows);
    cows.resize(numofrows);
    char temp;
    vector<int> temp2;
    temp2.reserve(numofrows);
    temp2.resize(numofrows);
    for(int x = 0; x < numofrows ; x++){
        
    for(int  i =0;  i < numofrows; i++){
        cin >> temp;

        temp2[i] = temp - '0';

    }
    cows[x] = temp2;

}   
    int cowflips = 0;
    int temprow = 0;
    int tempcol = 0;
    int actrow = 0;
    int actcol =0;
    for(;;){
        temprow = -1;
        tempcol = -1;
         auto val = find_if(cows.begin(), cows.end(), [](const vector<int>& row){ return find(row.begin(), row.end(), 1) != row.end(); });
        if(val == cows.end()){
            break;
        }else{

        
    for(int i =0;  i < numofrows; i ++){
    for(int x =0; x < numofrows;  x++){

      
           if(cows[i][x] == 1){
                temprow = i;
                tempcol = x;
        }
 
        }
        

        ///
        

        
        
    }
    flip(cows, numofrows, temprow, tempcol, actrow, actcol);
    cowflips++;
    }
}

cout << cowflips;

}