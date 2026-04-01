#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <random>
using namespace std;
using ll = long long;
using var = int;
using str = string;


    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll t;
        cin >> t;
        for( int  u = 0; u < t; u++){

        
        int state423 = 0;

        int numoftests;
        cin>> numoftests;
        string wholething;
        cin >> wholething;

        vector<char> taskset;
        bool state3= false;
        for(auto& x: wholething){
            taskset.push_back(x);

        }
        auto uniqueset  = unique(taskset.begin(), taskset.end());
        vector<char> onlyints;
        onlyints.reserve(1000);

        for(auto i = taskset.begin(); i != uniqueset; i++/*best to use != with iterators because it supports with almost all of those stuff*/  ){
            onlyints.push_back(*i);//noet ths down

        }
        for(int i  = 0;  i < onlyints.size() ; i++){
                for( int x= i+1; x < onlyints.size(); x++){
                    if(onlyints[i] == onlyints[x]){
                        
                        if(state3 == false){
                        
                            
                            state423 =1;
                            break;


                        }else if(state3 ==true){
                            state3=true;
                        }
                        

                    }
                    else if(onlyints[i] != onlyints[x] ){
                        state3=false;
                        
                        
                    }
                }
        }
        if(state423 == 0){

            
       
            cout << "YES" << "\n";
            
    
        }else{
                cout << "NO" << "\n";
        }
        }

//taskset.begin refers to a very specififcc thiung, it isnt the first element of the vector. but rather, its the first position which contains any value in that vector for the first time. meansing that, its the first value reference pointer.


//     int howmuchbeforre = 0 ;
//     int endofphase = 0; 
//     for(int i = 0; i < numoftests; i++){
//         howmuchbeforre = 0;
//         i=0;
//         for(int x =i+1; x < numoftests; x++){
//              if(taskset[i] == taskset[x]){
            
//             if(x-i== 1){
                
//                     howmuchbeforre=i+1;
//                     endofphase = i;
//                     cout << "howmuchbefore> " << howmuchbeforre <<" \n";
//                  }else if(){
                    
//                  }
               
//             }else{
//                 if(howmuchbeforre != 0){
//                 if(taskset[howmuchbeforre] == taskset[x]){
                

//                 }else{
// cout << "NO";
//                 return 0;
//                 }
//             }
              
//             }
//         }
//     }
//     cout << "YES";

}