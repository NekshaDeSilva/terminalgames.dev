#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include  <algorithm>
#include <cmath>

using namespace std;
using ll = long long;
using ii = int;
void  allsets(int indexval,vector<ii>& list, vector<ii>& subset){
   
    for(int 1 = indexval;  i < list.size(); i++){

        if(i == list.size()){
            for(auto& u: subset){
                cout << "{ " << u << " } '\n";

            }
           return;//i dont think  return is here but will see.
        }
        subset.push_back(list[i]);

        allsets(++indexval , list, subset);

    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //go

    vector<ii> list;
    int twemp23;
    for(int i = 0;  i < 10 ; i++){
        cin >> twemp23;

        list.push_back(twemp23);

    }
    vector<ii> subset;
    subset.reserve(1000);
    ii index = list.size();
    allsets(index, list, subset);

} 