#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pair<int, sting> pairexample;
    pairexample.first();


    vector<pair<int, string>> examplevalue;
    examplevalue.reserve(100);
    examplevalue.push_back({12,"soemthing"});
    examplevalue.emplace_back(41,"hydrogen");
    examplevalue.push_back(make_pair(12,"3432"));
    //prinitng pair values inside a vector.
    int listlength = examplevalue.size();
    
    bool state = true;
    int counter = 0;

    while (state)
    {
        counter++;

       cout << examplevalue[counter].first();
        cout << examplevalue[counter].second();
        
        if(counter > 100){
        state=false;
        }
    }
    /*Pairs in Vectors*/
    vector<pair<int, string>> train;
    train.reserve(200);
       

}