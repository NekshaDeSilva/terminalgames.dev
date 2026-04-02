#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <cmath>
#include <cmath>
#include <random>
#include <algorithm>
using namespace std;
using ll = long long;
using ii = int;
vector<long long > sums;

void print(long long& sumvect, long long sizex){

    
        sums.push_back(sumvect);

    if(sums.size() == sizex){
        sort(sums.begin(), sums.end());

        auto newsums = unique(sums.begin(), sums.end());
        sums.erase(newsums, sums.end());
        cout << sums.size() << "\n";
        for(int i =0; i < sums.size(); i ++){
            cout << sums[i]<< " ";
        }
        return;
    }
}
void recurse(long long int index, long long int size, vector<long long int>& set, vector<long long int>& currentcur, long long int sumvect){

    if(index == size){
     
        for(long long int x= 0; x < currentcur.size(); x++){
            sumvect+= currentcur[x];


        }
        if(sumvect == 0){

        }else{
            long long int sizex = (1LL << size)-1;
        print(sumvect, (sizex));
        }
        return; 
    }

    recurse(index+1, size, set, currentcur, sumvect);

    currentcur.push_back(set[index]);
    recurse(index+1, size, set, currentcur, sumvect);
    currentcur.pop_back();

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    random_device randoms;
    mt19937 gen(randoms());
    sums.reserve(1000);
    uniform_int_distribution<> disrandom(1,3);
    long long int numbers;
    cin >> numbers;
    long long temp22;

    vector<long long int> set;
    set.reserve(numbers);
    
    for(long long int i = 0; i < numbers; i++ ){
        cin >> temp22;
        set.push_back(temp22);
    }
    long long int index= 0;
    long long int size = set.size();
    vector<long long int> currentcur;
    currentcur.reserve(1000);

    recurse(index, numbers, set, currentcur, 0);
}