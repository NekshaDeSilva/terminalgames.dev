#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <random>
using namespace std;
using ll = long long;
using var = int;

int o= 5;
 int result =o;
void recurse(long long int x){

    if(x ==1){
        
        cout << result;
        return;

    }
   result*=x-1;
    recurse(x-1);

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //go
    recurse(o);
    
}