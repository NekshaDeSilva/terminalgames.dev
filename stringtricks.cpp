#include <iostream>
#include <iomanip>
#include <array>
#include <vector>
#include <string>
#include <climits>
#include <cmath>
#include <numeric>
#include <random>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <unordered_set>
#include <set>
#include <map>

using namespace std;
using ll = long long;
using ii = int;

int main(){
    ///in here, we aree hgoing to talk about the string techniques and hidden fucntions of it whcih are extremely use ful for th competiutitve programmkngm
    string mystring = "cATS";
    auto posititon = mystring.find("ATS", 0);
    cout << posititon; //it returns 1;

    ///////////////////////////////
    string mystring1 = "hfgwshgwotghw";
    auto pos2 =  mystring1.find("hgwotgh", 7);
    //this follwong upper one will priunt nothing and it is determined as "npos" << npos is the specific technique used for it. and the npos is the right thing used for it.
    if(pos2 == string::npos){
        cout << "\n not found";
        //jhere it prints the not-found clearly.
    }
    //we can also just if we just need to check some value is there wihtout equalting it into the empty value, what we can do is, we can do here is that we have to make it working in that specific way., which mean that, 
    if(pos2 != string::npos){
        cout << "\n something is here";
        
    }

    //keep note in your mid that you canno use the string::npos and just normally npos and also, there ais a nother thing, dont use find() wihtou a parent elemtn like just find() AS IT ALWAYS REQUIRES SOMETHING to be acting as the parent elemtn in order to find something inside it.
    //whcih means that you must always, SOMEPARENT.find() << m this format must be used with strings at all costs as well.
//      cout << 1LL << "\n";
//     int somevale = 2883293;
//     string somevalue_converted = to_string(somevale);
//     ll longvalue = 8279478129871948719841749284719847918247918248;
//     string longsomething = to_string(longvalue);

// ////////////////////////////////
//     string longname = "28357190351875129875392857298587298572983572985729579857983579285729385729582735928579285759827592";
//     //in ordser to make that above longname to a number, we need to have a specific thing called the stoll(*) which makes a strunbg into a long long;
//     ll lognname_revenge = stoll(longname);
      
//     cout << lognname_revenge;
    // hwo to get the highwest vcalue oin a any cpp program which is runningon a 64 bit arch.
    long long maximum_possible = numeric_limits<long long>::max();
    cout << maximum_possible;

    //how to get the minimum negetive number possible
    long long minimum_possible = numeric_limits<long long>::min();
    cout << "min: "  << minimum_possible << "\n";


    
    // /**/////THIS IS AWWESOME. Im gonna fill up a multiset, unorderdmultiset, srt and a map with vector data as the initial input and declatre it one.,c and alos, this can also be used for othetr vectors too. menaing thatk, toyoyu can crwate a compete duoploicate vector by sukgn this vmthosd as wlel. */

    vector<ll> orginal;
    //CRITICAL. to iota TO fucntion correctly, it must have a size in order to fill it up., if the vector is already ameptyy, then it wont work vbeacsue it cannotr push back intop it
    orginal.resize(maximum_possible);

    iota(orginal.begin(),  orginal.end(), 1);
    for (ll  i  =0;  i < orginal.size(); i++){
        cout << "\n" << orginal[i] <<  "\n";
    }

    //rehersal binary search

    unordered_multiset<ll> list;
    //just a reminder for the loop that wqe use to loop thorugh the all elemnts without in things like sets, multisets, maps., and unordered multisets, and vector even;

    for(ll i =list.begin(); i != list.end();  i++){
        
    }


}