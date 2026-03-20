#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <random>
#include <algorithm>
using namespace std;
void calc(vector<pair<string, pair<int,int>>>& datad){
    vector<pair<string, int>> totmarks;
    totmarks.reserve(100);
    for (int i = 0; i < datad.size(); i ++){
        totmarks.emplace_back(datad[i].first, datad[i].second.second + datad[i].second.first);

    }
    vector<pair<string_view, int>> highestpair;
    highestpair.reserve(100);


      for (int i = 0; i < datad.size(); i ++){
        highestpair.emplace_back(datad[i].first, datad[i].second.second + datad[i].second.first);

    }
        sort(highestpair.begin(), highestpair.end(), [](auto a, auto b){
        return a > b;

    });
    vector<pair<string, int>> mathmarks;
    vector<pair<string,int>> scimarks;

    for(int i = 0 ; i < datad.size(); i++){
        mathmarks.emplace_back(datad[i].first, datad[i].second.first );
        scimarks.emplace_back(datad[i].first, datad[i].second.second);

    }
    pair<string, int> highestmath = *max_element(mathmarks.begin() ,mathmarks.end());
     pair<string, int> highestsci = *max_element(scimarks.begin(),scimarks.end());

     for (int i = 0; i < datad.size(); i++)
     {
        cout << highestpair[i].first << "'s total: " << highestpair[i].second << "\n";

     }
     cout << highestmath.first << " Is the highest Math Marks with score " << highestmath.second << "\n";
     cout << highestsci.first << " Is the highest Science Marks with score  " << highestsci.second << "\n";

     
   
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    //go
    string studname;
    int mathscore,sciscore;
    vector<pair<string , pair<int, int>>> data;
    data.reserve(1000);
    int temp1, temp2;
    string temp3;

    for(;;){
        cin >> temp3 >> temp1 >> temp2;
        if(data.size() > 4){
            break;

        }

        data.push_back({temp3, {
        temp1,temp2        }});

        

    }

    calc(data);

}   