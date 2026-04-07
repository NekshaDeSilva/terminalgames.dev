#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <array>
#include <cmath>
#include <climits>
using namespace std;

int main(){
    

vector<int> uyo;
int temp;
for(int i =0 ;  i < 29; i ++){

cin>> temp;
uyo.push_back(temp);



}
sort(uyo.rbegin(), uyo.rend());
for(int i =0 ;  i < 29; i ++){

cout << uyo[i] << " ";
}
}