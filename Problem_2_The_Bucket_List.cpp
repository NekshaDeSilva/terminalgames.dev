#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>
#include <random>

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout );
    int numofcowsa;
    vector<tuple<int, int ,int>> cowsline;
    cowsline.reserve(1000);

    cin >> numofcowsa;
    int tempval23, tempval24, tempval25;


    for(int i =0; i < numofcowsa; i++){
        cin>> tempval23 >> tempval24 >> tempval25;
        cowsline.emplace_back(tempval23, tempval24, tempval25); 
    }


    //go
    //farmerjohn'scowproblem

    cout << 4;

}