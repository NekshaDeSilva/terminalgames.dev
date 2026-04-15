    #include <iostream>
    #include <iomanip>
    #include <vector>
    #include <array>
    #include <climits>
    #include <cmath>
    #include <algorithm>
    #include <numeric>
    #include <string>
    #include <set>
    #include <unordered_set>/*this is forgetful*/
    #include <utility>
    #include <random>
    #include <numeric>
    /*the new libes that are needed*/
    #include <map>
    #include <unordered_map>

    using namespace std;
    using ll = long long ;
    using iii = int;
    ll checkthenumeriuc(string& temp, map<string, int>& list){
        auto pairr = list.find(temp);
        if(pairr == list.end()){
            

            return 0;
        }else{
            (*pairr).second++;
            return (*pairr).second;
        }


    }
    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        vector<int> status10;
    
        ll numofreqs;
        cin >> numofreqs;
           status10.reserve(numofreqs);

         status10.resize(numofreqs, -1);
         
        string temp;
        map<string, int> list;
        multiset<string> alreadytaken;

        for (ll i = 0; i < numofreqs; i ++){
            cin >> temp;
            alreadytaken.insert(temp);

            auto [maprecordptr, isnew] = list.insert_or_assign(temp, checkthenumeriuc(temp, list));
            if(isnew){
                cout << "OK" << "\n";


        }else{
        
           cout << (*maprecordptr).first << (*maprecordptr).second << "\n";

        }
    }
}