#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>

using namespace std;
int gridwrite();

int main(){
    vector<vector<int>> samplegrid(4, vector<int>(4,0));
    cout << samplegrid[2][2] << endl;
    gridwrite();

    return 0;

}

//How to output the entire grid values from a corner to the other corner

int gridwrite2_foreach(vector<vector<int>>& grid_transferred);
int gridwrite(){
    vector<vector<int>> grid(4, vector<int>(4,0));
    for(int i = 0; i < grid.size(); i++){
        cout << "Please enter a value" << endl;

        for(int j=0 ;j < grid[i].size(); j++){
        cin >> grid[i][j];
             
        }
    }
      for(int i = 0; i < grid.size(); i++){
    
        cout << endl;
        
        for(int j=0 ;j < grid[i].size(); j++){
        cout << " " <<  grid[i][j] << " " ;
             
        }
    }
    gridwrite2_foreach(grid);

    return 0;
}

int gridwrite2_foreach(vector<vector<int>>& grid_transferred){

    //& always refers to the refernce. meaning that opassing the address, not the value itself. 
    for(auto& x: grid_transferred){
        for(auto& val : x){
            cout << val << endl;

        }
        cout << endl;
        
    }
    return 0;
    
}