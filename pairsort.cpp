//Apple into apple bag and then showing the previosu bag the apple was.

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <random>
#include <algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<string,int>> list;
    list.reserve(100);
    string apple_color;
    int appplebag_no;
    for (;;){
        appplebag_no++;
        getline(cin, apple_color);

        list.emplace_back( apple_color, appplebag_no);
        if(apple_color.empty() == true){
            break;

        }


    }

    sort(list.begin(), list.end());

    for(int i =1; i < list.size(); i++){
        cout << list[i].first << "orginal position: " << list[i].second << "\n\n";

    }
}