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
    int numofstew = 0 ;
    cin >> numofstew;
    vector<int> stewpower;
    stewpower.reserve(1000);
    int temp32;
     int temp43 =0 ;

    for(int i =0;  i < numofstew; i++){
        cin >> temp32;

        stewpower.push_back(abs(temp32));
    }
     auto max = abs(*max_element(stewpower.begin(), stewpower.end()));
        auto min =abs(*min_element(stewpower.begin(), stewpower.end()));
    for(int i  =0 ; i< numofstew; i++){
       
        if(stewpower[i] > min && stewpower[i] < max){
            temp43++;
        }else{
            /*/donothign*/
        }
    
    }
    cout << temp43;

}