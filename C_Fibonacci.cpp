#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <algorithm>
#include <random>
#include <cmath>

using namespace std;

long long   fib(long long int userwant){    
    if(userwant == 0){ return 0;};
    if(userwant ==1){ return 1;};
    return fib(userwant-1) + fib(userwant-2);
    

}

int main(){
    long long int userwant = 0;
    cin >> userwant;
    cout  << fib(userwant);


}