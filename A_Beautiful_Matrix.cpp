#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <random>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //go

    vector<vector<int>> matrix2(5);
    matrix2.reserve(1000);
    int temp2342;
    pair<int, int> locationd;

    for(int i = 0;  i < 5 ; i++){
        for(int x= 0; x < 5; x++){
            
            cin>> temp2342;
            // matrix2[i][x] = temp2342; // Error: matrix2[i] does not exist yet
            if(temp2342 == 1){
                locationd.first = i;
                locationd.second = x;

            }
            
        }
    }
    //realcoiding
    int moves= 0;

    int dis_x, dis_y = 0;
    dis_x = 2-locationd.second;
    dis_y = 2- locationd.first;
    for(int i =0 ; i < abs(dis_x); i++){
         while (locationd.first == 2 && locationd.second ==2){
            break;
        }
        if(dis_x/abs(dis_x) == -1 && locationd.first != 2){
            // matrix2[dis_x--][locationd.second] = 1; // Error: matrix2 not initialized
            locationd.first--;
            moves++;

        }else if(dis_x/abs(dis_x) == +1 && locationd.first != 2){
            // matrix2[dis_x++][locationd.second] = 1; // Error: matrix2 not initialized
            locationd.first++;
            moves++;
        }
        if(dis_y/abs(dis_y) == -1 && locationd.second != 2){
            // matrix2[locationd.first][dis_y--] = 1; // Error: matrix2 not initialized
            locationd.second--;
            moves++;
        }else if(dis_y/abs(dis_y) == +1 && locationd.second != 2){
            // matrix2[locationd.first][dis_y++] = 1; // Error: matrix2 not initialized
            locationd.second++;
            moves++;
        }
        while (locationd.first == 2 && locationd.second ==2){
            break;
        }
        
        
    }
    cout << moves;
    
}