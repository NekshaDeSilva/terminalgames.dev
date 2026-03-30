#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //go
    int yearmagic = 0;
    cin>> yearmagic;
    int nextyear= 0 ;
    vector<int> insiderstr ;
    insiderstr.reserve(1000);
    string nextyr = "0";
    int amount = 0;
    for(;;){
        insiderstr.clear();
        amount++;
        nextyear = stoi(nextyr);

        nextyear = yearmagic+amount;
       nextyr = to_string(nextyear);
        for(auto& x : nextyr){
            insiderstr.push_back(x);
        }
        sort(insiderstr.begin() ,insiderstr.end());
        const auto& newinsider = unique(insiderstr.begin(), insiderstr.end());
        if(nextyr.length() == distance(insiderstr.begin(), newinsider)){
            cout << nextyr;
            break;
        }
    }
}   