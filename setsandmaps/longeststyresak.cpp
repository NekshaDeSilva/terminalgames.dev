#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#define all(x) (x).begin(), (x).end()
#define this is a cool thing
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    vector<int> list;
    list.reserve(1000);
    string tempval ;
    cin >> tempval;
    int tempv = 0;
    while(cin >> tempv){      
        if(!isdigit(tempv)){
            break;
        }
        list.push_back(tempv);
    }
    int currentint= 0;
    int streak = 0;
    
    sort(list.begin(), list.end());
     currentint = list[0];
    for(int i = 0;  i < list.size(); i++ ){
       
        if(currentint==list[i+1]){
            cout << list[i];
            streak++;
            i++;
            currentint = list[i];
            

        }
    }
    cout << streak;
 } 