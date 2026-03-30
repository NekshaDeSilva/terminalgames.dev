#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <array>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //go
   long long int firstban, money, numofban, excessmoney;
    cin >> firstban >> money >> numofban;
    long long int temo234= 0;

    for(int  i = 1;  i <= numofban; i++){
        temo234 += firstban*i;
        

    }
    if(temo234 > money ){
        excessmoney = abs(temo234-money);
        cout << excessmoney;


    }else if(temo234 <= money){
        cout << 0;

    }

}