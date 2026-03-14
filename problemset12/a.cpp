#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <cmath>
#include <chrono>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    vector<int> list;
    int userin= 0;
 list.reserve(1000);
    
    for(;;){
    
        int acc;
        cin >> acc;
       
        if(acc == 0){
            
            int somevalue = list.size() -1;
            for (int i = somevalue; i >= 0; i--)
            {
                cout << list[i] << " ";

            }
            
            break;
        }else{
            list.push_back(acc);
                   userin++;
        }
 

    }    


}
