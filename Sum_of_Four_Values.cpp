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

        ll forsize ;
        ll qsize;
        cin >> forsize >> qsize;
        vector<vector<int>> forest;
        forest.resize(forsize +1);
         ll value;
        for(int j = 0; j <= forsize; j++) forest[0].push_back(0);
        string temp;
        ll accum = 0;
        ll answer = 0;
        for(ll i= 1;  i <= forsize;  i++){
            cin >> temp;
          

            for(int j = 0; j < temp.length(); j++){
            if(temp[j] == '*'){
                accum = 1 + forest[i].back() + forest[i-1][j+1] - forest[i-1][j];
            }else{
                accum = 0 + forest[i].back() + forest[i-1][j+1] - forest[i-1][j];
            }

            forest[i].push_back(accum);
            }
        }


    

        ll temp1;
        ll temp2;
        ll temp3;
        ll temp4;
        for(ll i =0 ; i < qsize;  i++){
            cin >> temp1;
            cin >> temp2;
            cin >> temp3;
            cin >> temp4;


            ll y2 =  temp3;
            ll x2 = temp4;
            ll x1 = temp1;
            ll y1 = temp2;
        value = forest[y2][x2] - forest[y1-1][x2] -forest[y2][x1-1] + forest[y1-1][x1-1];

cout << value << "\n";
        }

        





    }
