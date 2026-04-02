    //Apple Division
    #include <iostream>
    #include <iomanip>
    #include <string>
    #include <algorithm>
    #include <vector>
    #include <array>
    #include <cmath>
    using namespace std;
    using ll = long long;
    using ii= int;
    vector<long long int> diffs;

    void print(long long int bag1, long long int bag2, long long int sizex){
        
        diffs.reserve(1LL << sizex);
        diffs.push_back(abs(bag1-bag2));

        

        if(diffs.size() == (1LL << sizex)){
            auto mindiff = *min_element(diffs.begin(), diffs.end());
            cout << mindiff;
        }
    }
    void recurse(long long int cursor, long long int bag1 ,  long long int bag2, vector<long long int>& weights, int numofapples){
        if(cursor == weights.size()){
            print(bag1, bag2, weights.size());
            return;
        }
        recurse(cursor+1, bag1+weights[cursor], bag2, weights, numofapples);
        recurse(cursor+1, bag1, bag2+weights[cursor], weights, numofapples);

    }
    int main(){
    long long int numofapples = 0;
    cin >> numofapples;
    vector<long long int> weights ;
    weights.reserve(numofapples);
        long long int temp21;

    for(int  i = 0;  i < numofapples; i++){
        cin >> temp21;
        weights.push_back(temp21);

    }
    long long int cursor = 0 ;
    
    long long int bag1 =0;
    long long int bag2 =0;
    recurse(cursor, bag1, bag2, weights, numofapples);

    }