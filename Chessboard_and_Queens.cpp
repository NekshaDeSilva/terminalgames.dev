#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <cmath>
#include <random>
#include <algorithm>
using namespace std;
using ll = long long;

void print(){


}
//use pseudocode to wite okay
int recurse(vector<vector<char>>& chessb, int& ways, int numofcols, int numofrows, int currentrow){
       if(currentrow == 8){
        ways++;
        
        return ways;
       }

       for(int i = 0 ; i < 1; i++){
        vector<vector<char>> newboard(8, vector<char>(8));
        for(int x = 0; x < 8; x++){
            if(chessb[currentrow][x] == '*'){
                continue;

            }
            
            for(int v= 0; v < 8; v++){
                for(int b= 0;  b < 8;  b++){
                    newboard[v][b] = chessb[v][b];

                }
               
            }
            for(int c  = currentrow + 1; c < 8; c++){
                for(int d = 0; d < 1; d++){
                    newboard[c][x] = '*'; if(x - (c - currentrow) >= 0) newboard[c][x - (c - currentrow)] = '*';
                }
            }
            int rowx = (newboard[currentrow][x] = '*', currentrow + 1);
            int colx = x + 1;
            while(rowx < 8 && colx<8){
                newboard[rowx][colx] = '*';
                rowx++;
                colx++;


                
            }
            recurse(newboard, ways,numofcols, numofrows, currentrow+1);

        }
       }
    return ways;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> chessb;
         string somevalue;
    chessb.reserve(1000);
    for(int  i = 0 ; i < 8; i++){
   
        cin >> somevalue;
        chessb.push_back(somevalue);
    }
    vector<vector<char>> chessbo(0, vector<char>(0));

    chessbo.reserve(1000);
    int counter32 =-1;
    
 

    for(int i = 0 ; i < chessb.size(); i++){
                   vector<char> tempveector123;
           tempveector123.reserve(10);
        for(auto& x: chessb[++counter32]){
            tempveector123.push_back(x);
        }
        chessbo.push_back(tempveector123);

     
    }
    int ways = 0;
    int numofrows  = 8;
    int numofcols = 8;
    int currentrow =0;
    recurse(chessbo, ways, numofcols, numofrows, currentrow);
    cout << ways;
    
}