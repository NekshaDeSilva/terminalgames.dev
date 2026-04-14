#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <climits>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <string>
#include <set>
#include <unordered_set>/*this is forgetful*/
#include <utility>
#include <random>
#include <numeric>
/*the new libes that are needed*/
#include <map>
#include <unordered_map>

using namespace std;
using ll = long long ;
using iii = int;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, int> details;
    cout << "when you need to insetr valus into a map,  you have few options and the best option is to use the normal brackett method. in this waty, even if a elemnt does n not exist in thatr specific place, you will be able to insert that value as a news values and then do so. ";
    details["something"] = 29049824;
    cout << "\n" <<  details["something"]; //this prints oput like smooth butter.
    cout << "and there is the ost important, thing, it is that if the lemetn already exists in the specific database, i mean in the map, then what happnes is awesoe, whyyt happens is, it updates the existing valuees, but if you do not want to updat and exoisting valueswm then what you havto do is, you need to uze thwe method insert( ) insert method inserts tyhe relkatevent thing into that place.";
    details.insert({"mynameis_nothign", 23412}/*note that these specific brackets are strictly requred as wqe do usually do with vectors. its required to operform in that specific way*/);
    //if we need to insert the addressesd and lkeys without adding brackets or something liek thatrk, we need to use the MPLACE BACK, the method which wwe havce been using for the insertion of values without any brakcets, it crates the model inside it./
    
    map<string, int> scores;
        //we cant use emplace_back(). but rather, what we should use is emplace();
    scores.emplace("tyriwu", 982843);
    //the next insertion method as you know is []
    scores["euhywtr" ] = 28431; //what this does is that it either creates the specific     

    //this is game changing,., if nhwe need to know whehe a specific element was inserted tyo ther otr we have updated the already exsiting recoirdl, wer can just use this,  whichg is our most powerfdul thing, insert_or_assing("vcakue", "value ") or anytjhing lie that, it giuves you a status report of whether that sopecoif chting was inserted tro that or not and it tells you whether it has properl;y inserted to thta or not and to preopare to be ready tyo handle this out put meanjng that ithe specfic location(pointer) and the status, wheehter we have upldated the opld record or wee have we have creatred a new record,


}