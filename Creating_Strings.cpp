#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>
#include <random>
using ll = long long;
using ii  = int;

using namespace std;
void print(){

}
int sized =0;
void recurse(vector<char>& letters, int size, int index ,  vector<char>& current){
    if(index == letters.size()){
        for(int i = 0; i < current.size(); i++){
            cout << current[i];
        }
        cout << "\n";
        return;
    }
    sized = letters.size();
    recurse(letters, size, index+1,current);
    current.push_back(letters[index]);
    
    recurse(letters, size, sized-1 , current);
    current.pop_back();
    

}
int main(){
string thread ;
cin >> thread;
vector<char> letters;
letters.reserve(thread.length());
int index =0;
int size = thread.length();
for(auto& x:thread){
    letters.push_back(x);
}
vector<char> current;
current.reserve(1LL << thread.length());
recurse(letters, size, index, current);
}