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
    //go
    vector<pair<int, int>> teams;
    teams.reserve(1000);
    int numofteams=0;
    cin >> numofteams;
    int temp24 ,temp25;

    int numofinc= 0;
    for(int i= 0; i < numofteams; i++){
        cin >> temp24 >> temp25;
        teams.emplace_back(temp24, temp25);

    }
    for(int i = 0 ; i < numofteams; i++){
        for(int x = i+1; x < numofteams;x++ ){
            if(teams[i].first == teams[x].second){
                    numofinc++;
                   
                }
            if(teams[i].second == teams[x].first){
                    numofinc++;
                }
        }
    }   

    cout << numofinc;

}