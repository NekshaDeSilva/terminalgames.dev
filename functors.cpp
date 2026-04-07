#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <array>
#include <cmath>
#include <random>
/*New one*/
#include <climits>
using ll = long long;
#define s(x) sort((x).begin(), (x).end())
using namespace std;
//here, there is fucntion pointers and functors

void using_normal(vector<int>& list){
    sort(list.begin(), list.end(), [](auto& first, auto& second){
        return first > second;
        //this means that frst should be greater than the second one.   
    })
}

    //using function pointers;
bool decendingorder(int first, int second ){
        return first > second;


    }  
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> list;
    int numofvals = 10;

    list.reserve(100);
    ll tempval=0;
     list.reserve(numofvals);
     for(int i =0;  i < numofvals; i++){
        cin >> tempval;
        list.push_back(tempval);
    }

      
    //using this in the sorting call
    sort(list.begin(), list.end(), decendingorder);

    using_normal(list);
    

}