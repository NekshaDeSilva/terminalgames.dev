#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>

using namespace std;
int main(){
    int tempval;
    int count = 0;
    vector<int> list;
    list.reserve(1000);
    int numofelms = 0;
    cin >> numofelms;
    for(int  i =0 ; i < numofelms;  i++)    {
        cin>> tempval;

        list.push_back(tempval);
    }
    vector<int> streakhighs ;
    streakhighs.reserve(numofelms);

    ////go ahead.
    
    for(int i = 0;  i < numofelms;  i ++){

        for(int x = i+1; x< numofelms;  x++){
            if(x == numofelms-1){
                count++;
            }

            if(list[i] == list[x]){
                count++;

                
            }else{
                continue;
            }
            
        }
        streakhighs.push_back(count);
        count =0;
    }
    auto& maxelm = *max_element(streakhighs.begin(), streakhighs.end());
    cout << maxelm;
}