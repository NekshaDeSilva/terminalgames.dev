#include <iostream>
#include <vector>
#include <random>
#define all(x) (x).begin(), (x).end()
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    random_device somerandom;
    mt19937 gen(somerandom());
    uniform_int_distribution<> distr(1,10);

    vector<int> somearray;
    for(int i =0 ; i < 10;  i ++){
        int randomvalks = distr(gen);
        somearray.push_back(randomvalks);
    }
    all(somearray);
    for(int i =0;  i < 10; i++){
        cout << somearray[i] << "\n";
    }
}