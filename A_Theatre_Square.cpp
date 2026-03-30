#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <random>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //go
    int n, m, a ;
    cin >> n >> m >> a;
    long long int realwidth = n;
    long long int realheight = m;
    long long int syntheticwidth = 0;
    long long int syntheticheight = 0;
    while (syntheticwidth < realwidth) {
        syntheticwidth += a;
    }
    while (syntheticheight < realheight) {
        syntheticheight += a;
    }
    long long int result  = syntheticheight / a * syntheticwidth/a;
    cout << result;
    

}