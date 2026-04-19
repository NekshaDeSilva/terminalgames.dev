#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <random>
#include <numeric>
#include <cmath>
#include <climits>

using namespace std;
using ll= long long;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //go;
    string mystring = "appleappleaple";
    auto substringpaty = mystring.substr(0, 4);
    //here, wqe have got thwe specifc value, for the string, meaning that, this retuerns us a sstring, not an nteger, this returns a string.
    //which means that the substringpaty is a string!!';
    //then in order to find if it exists in a seperate speecific string, what we do is, we use the specifc variaion of the find() which is usedwith the string;:npos; and we needto add it as an sub object of the string as always/

    string mystreingnext = "mycatmayd car htgsg bfhikfvkkjapappl";
    //you can see its at the end.
    auto thepos = mystreingnext.find(substringpaty,  0 /*start from 1st elemtnt*/);

    

    if(thepos == string::npos) {
        cout << "returned nothing";

    }else{
        for(auto x= thepos; x!=(thepos+(substringpaty.length()));x++){
            cout << mystreingnext[x];//notwe thois way we need to print out that specific elemtn in a string., kinda a hidden thi ng you know.

        }
    }

    
    return 0;

}