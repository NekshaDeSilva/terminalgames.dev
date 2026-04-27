    /*Nekshavs*/
    #include <iostream>
    #include <iomanip>
    #include <string>
    #include <vector>
    #include <set>
    #include <unordered_set>
    #include <map>
    #include <unordered_map>
    #include <numeric>
    #include <climits>
    #include <cmath>
    #include <algorithm>
    #include <random>
    #include <cstdio>
    using namespace std;
    using ll = long long;
    using ii = int;
    #define ss sort((x).begin(),  (x).end()) 
    #define pb push_back(x)

    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        //GO
        //Note: write this sdame problem in terms of you know what, in terms of wherte the coordiatesd begin with 0,0 instead of 1,
        ll sizeoftheforest; 
        ll numofqs;
        ll tempstar;
        vector<vector<ll>> forest;

        cin >> sizeoftheforest >> numofqs;
        for(ll i =o;  i < numofqs; i++){
            cin >> tempstar ;
            for(auto x: tempstar){
                if(x == '*'){
                    forest.push_back(1)
                }else{
                    forest.push_back(0);
                }

            }
            
        }
        
        
    
    }
