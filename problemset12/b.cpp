#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <cmath>

using namespace std;
int averagedisplayer(const vector<long long int>& passedvactor){
    int totval =0;

    int temp89248;
    if(passedvactor.size() > 3){
        for(int i = 0; i < passedvactor.size(); i++){
    totval += passedvactor[i];
    temp89248 = i;
        
    }
    int result =totval/passedvactor.size();

    cout << "\n" << result << "\n";

    }else{
        
    }
    
    return 0;


}
int main(){

    vector<long long int> listofnums;
    listofnums.reserve(400);
    int counter22 =0;
   int tempval = 0;

    while(cin >> tempval)
    {

        
      
        listofnums.push_back(tempval);
        averagedisplayer(listofnums);
        tempval=0;
    }



}