#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#define sortall(x) sort((x).begin(), (x).end())
#define this is a cool thing
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    vector<int> list;
    list.reserve(1000);
    int numofints = 0;
    cin >> numofints;

    string tempval ;
    cin >> tempval;
    for(auto& x: tempval){
        int something = x-'0';
        list.push_back(something);
    }
    
    sortall(list);
    int current=0;
    for(int i = 0;  i < tempval.length(); i++){
        if(list[i] == list[i+1] && i+1 < tempval.length()){
            current++;
            
        }else{
            current = 0;

        }
    }
    cout << current;    
    
 } 