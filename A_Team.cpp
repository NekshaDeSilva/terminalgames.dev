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
    int numofsols =0;
    cin>> numofsols;
    vector<tuple<int, int, int>> votes;
    votes.reserve(1000);
    int p,v,t ;

    for(int i = 0;  i < numofsols; i++){
        cin >> p >> v >> t;

        votes.emplace_back(p , v, t);

    }
    vector<int> finals;
    int finalsx = 0;

    finals.reserve(numofsols);
    for(int  i = 0 ; i < numofsols; i++ ){
        finalsx = 0;
        for(int x = 0; x < 3;  x++){
            if (x == 0) finalsx += get<0>(votes[i]);
            else if (x == 1) finalsx += get<1>(votes[i]);
            else if (x == 2) finalsx += get<2>(votes[i]);

        }
        finals.push_back(finalsx);

    }
    int numofgood = 0;

    for(int i = 0 ; i < numofsols; i++){
    if(finals[i] >= 2){
        numofgood++;

    }else{
        //donothing
    }
    }
    cout << numofgood;

}