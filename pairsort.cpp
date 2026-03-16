#include <iostream>
#include <iomanip>
#include <string>
#include <random>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;
int storeorginaltoo(){

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    random_device randoms;
    mt19937 gen(randoms());
    uniform_int_distribution<> distr(0,10);

    //fastio
    //The engine automatically sorts the numbers in a accensing and a almost lexxicographical order. And what happens is that it sorts them out from small to high level.

    vector<pair<int, int>> bio;
    bio.reserve(10);
    for (int i = 0; i < 10;  i++){
    bio.emplace_back(distr(gen), distr(gen));
    }
    cout << "Start regular normal sort'\n" ;
    sort(bio.begin(), bio.end());

    //Print after sorting.
    for(int i = 0; i < bio.size(); i++){
        cout << bio[i].first << " " << bio[i].second << "\n";
        
    }
    
    /*Next, sorting and then, storing the original values along with the newly sorted values.*/
        storeorginaltoo(bio);
        



}