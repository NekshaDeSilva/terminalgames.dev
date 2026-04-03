#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <cmath>
#include <random>
#include <algorithm>
using namespace std;
using ll = long long;
int counter1231 = 0;
int counter8924= 0;
vector<vector<char>> values;
int numoffactors(int size, int factorialss);
void preparetheset(int size){
    int xx = 0;
    int nuumss= counter1231;
    values.resize(nuumss);
}
void print(vector<char>& current, int size, vector<char>& flag){
     preparetheset(size);
    for(int i =0;  i < current.size(); i++){
        
        values[counter8924].push_back(current[i]);

    }
    counter8924++;
    int numss = counter1231;
    if(values.size() == numss){
        cout  << values.size();
        cout << "\n";
        for(int z = 0;  z < values.size(); z++){
            for(int c = 0; c < size;  c++){
                cout << values[z][c];
            }
            cout << "\n";
        }
    }
    return;

}
void recurse(vector<char>& set,  vector<char>& current, vector<char>& flag, int size){
    if(current.size() == size){
        print(current, size, flag);
        counter1231++;
        return;

    }
    for(int  i  = 0; i < size; i++ ){
            if(i > 0 && set[i] == set[i-1] && flag[i-1] == 0) continue;
            if(flag[i] == 1) continue;
            flag[i] =1;
            current.push_back(set[i]);
            recurse(set, current, flag, size);
            flag[i]= 0;
            current.pop_back();

    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //GO
    string input;
    cin >> input;
   
    vector <char> set;
    set.reserve(input.length());

    char tempval2324;
    for(auto& x: input){
        
        set.push_back(x);

    }
    sort(set.begin(), set.end());
    int size = input.length();
    
    vector<char> flag(size, 0);
    flag.reserve(size);
    vector<char> current;
    current.reserve(size);

   
    recurse(set, current , flag , size);

}