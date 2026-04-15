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
    struct actions{
    void check(bool status){
        if(status){
            cout << "\n it was not already exist. and so it had to create a new one\n";
            
        }else{
            cout << "\n it already existed, so what i did was, we have updated the value \n ";

        }

    };

    }
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

        //this is game changing,., if nhwe need to know whehe a specific element was inserted tyo ther otr we have updated the already exsiting recoirdl, wer can just use this,  whichg is our most powerfdul thing, insert_or_assign("vcakue", "value ") or anytjhing lie that, it giuves you a status report of whether that sopecoif chting was inserted tro that or not and it tells you whether it has properl;y inserted to thta or not and to preopare to be ready tyo handle this out put meanjng that ithe specfic location(pointer) and the status, wheehter we have upldated the opld record or wee have we have creatred a new record,

        //lets now try out the insert or assign thing because it seems really snice and valyuesabale. 
        auto [pointerloc, status] = scores.insert_or_assign("fhgjhdsd01", 27491);
        cout << *pointerloc;//THIS IS AWESOME, i just discovered this, you know that in here, what you have to do is, tyhat you can see that this pointer displaying methiod, like if wwe just wroite cout << *pointer it wotnt work  becaus eof somwe sdpecifci reasons, and that is importyant. pointerloc is always a paoir here, becayuse since here we're requsign fromt hat spe4fifc Spot on. Even if you only touch one record, insert_or_assign (and most map functions) will always return that pair structure.
        
        /* and the other thing is that in hwre, this speciific pointer we get as pointerloc is not a sdtandalone pointer actually, but rather, its pointing towsards two other pointers . BUT WHY? THE REASON IS SIMPLE, bweause this is a map data strucute. and in maps., you will have two columns and you knwo that too., so in that case, in here, the pointerloc referstoi the both of those values the first col valkues and the 2nd col valeu, and its a pair in that cae, so  how we goinna get the data from a pair what do we gonna do in order to gwet data from a pair, wwhat we have to do is that, you have to first of all, what you have to do here is just make that pointer a to a data type value, what we have to first to is, again, this is very important, below here is a eway how to make this pointwer a pair and then get the values from tbis 
            firsat of all,. here you can see that there is a pointer you can see as pointerloc., as discussed, this refers to the enitre paiur containing two valeus of that specific pair, and first step is not to write *(pointerloc.first) because simply it wont work becayuseof a very own reason., the reason is that, firts we bneed to get the pair, which is taken by ddereferencing that specific poiner so then we get the real pair, so the real first step in here is,(*pointerloc).first/second like that, this is the way of doing this.
            
        */
        actions pointerstatus_check;

        pointerstatus_check.check(status);






    }