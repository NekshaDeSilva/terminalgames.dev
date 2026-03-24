#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <random>
#include <cmath>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("shuffle.in", "r" , stdin);
    freopen("shuffle.out", "w", stdout);
    //do
    //startbovineshuffle
    int  numofcow;
    vector<long long int> cowpos3;
    vector<int> rulev;
    vector<long long int> cowpos2;
    vector<long long int> cowpos1;
    vector<long long int> cowpos;
    int temp223;
    cin >> numofcow;
    rulev.reserve(numofcow);
    for(int d = 0 ; d < numofcow; d++){
         cowpos.push_back(d);
        cowpos1.push_back(d);
        cowpos2.push_back(d);
    }
    for(int i = 0; i < numofcow; i++){
        cin >>  temp223;
        temp223--;
        rulev.push_back(temp223);
    }
    for(int i = 0; i < numofcow; i++){
        cin >>  temp223;
        cowpos3.push_back(temp223);
    }
    int statev  = 3;
    for(int i = 0; i < 3 ; i++){
        if(statev ==3 ){
            for(int x= 0; x < numofcow; x++){
                cowpos2[x] = cowpos3[rulev[x]];
            }
        }else if(statev ==2){
            for(int x= 0; x < numofcow; x++){
                //   cowpos1[rulev[x]]= cowpos2[x];
                cowpos1[x] = cowpos2[rulev[x]];
            }
        }else if(statev == 1){
            //1
            for(int x= 0; x < numofcow; x++){
                // cowpos[rulev[x]]= cowpos1[x];
                cowpos[x] = cowpos1[rulev[x]];
            }
        }else{
            //dobnothing
        }
        statev--;
    }
    for(int f = 0 ; f < numofcow; f++){
        cout << cowpos[f] << "\n";
    }
}
