#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <array>
#include <algorithm>
#include <random>

using namespace std;
void recurse(int numofdisks, int start, int end, int middle){
    if(numofdisks ==1){
        cout << start << " " << end << "\n";
        return;

    }
    recurse(numofdisks-1, start, middle, end);
    cout << start << " "  << end << "\n";
    recurse(numofdisks-1, middle, end, start);


}
int main(){

    int numofdisks = 0;
    cin >> numofdisks;
    int start = 1; int middle = 2;
    int end = 3;
    cout << (1 << numofdisks)-1 << "\n";
    recurse(numofdisks, start, end, middle);


}
