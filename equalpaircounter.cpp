#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <array>
#include <random>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
vector<pair<int,int>> list;
int count2  = 0;
list.reserve(100);

    int firstelement, secelement;
    for(int i = 0; i < 10 ; i++){
        if(i > 4){
            if(list[i-5].first >= 2 && list[i-5].second >= 5){
                cout << list[i-5].first  << " " << list[i-5].second << "\n";


            }else{
                //donothing
            }
        }else{
cin >> firstelement >> secelement;
list.emplace_back(firstelement, secelement);

 
        }
           }
           cout << count2;

    
}