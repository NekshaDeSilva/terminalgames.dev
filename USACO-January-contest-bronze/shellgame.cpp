#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);  
    //cowsignal
    vector<string> datapattern;
    datapattern.reserve(1000);
    int m,n,k;
    cin >> m >> n  >> k;
    string temp2;

    for(int i = 0; i < m; i++){
        cin >> temp2;
        datapattern.push_back(temp2);
      
    }
    vector<string> expandeddata;
    expandeddata.reserve(1000);
    string linestringtemp ="";


    for(string  y: datapattern){
        for(int x= 0; x < k; x++){
        for(char  z : y/*addd auto if possile its safe*/ ){ 
            
                string samplerepeater ="";
                  
                        for(int x= 0; x < k; x++){
                         samplerepeater += z;

                        }   
                    linestringtemp += samplerepeater;
                    

                   
                  

                }cout << linestringtemp <<"\n";
    linestringtemp = "";
        }  
        

    }
 
    
}