    #include <iostream>
    #include <iomanip>
    #include <string>
    #include <algorithm>
    #include <cmath>
    #include <vector>
    #include <array>
    #include <numeric>
    #include <utility>
    #include <random>
    using namespace std;

  
  void alphabetprint(){
     vector<char> alphabet;
     alphabet.resize(26);   
    //next, use the iota.

    iota(alphabet.begin(), alphabet.end()-2, 'a');
    //what i do here is that ,  i have stopped from y letter. this can be done using that way/.



    //another thing, if i need to make the iota work indefinitely, as you know, if we have 1000 eletns with empty spaces and if we need to fill them up with alphabetic charcters, you will oly fill up the firsty 26 and iut will throw garbage stuff later on, so what you have to do is this, 
    //doing a modulo function to 

  }
    void goiota(){
        cout << "\n\n iotaiotaiotaiota '\n\n" ;
        vector<int> values = {0,0,0,0,0,0,0,0,0,0};
        values.reserve(1000);
        iota(values.begin(), values.end(), 10);
        for(int i =0 ; i < values.size(); i++){
            cout << values[i] << "\n" ;
        }

        //important notes:
        //top iota to work, there should be and must be the specfic vector must have a predefined sizze. if no size can be done you havbe to go for v.resize(12,0); or jsut v.resize(10);
    }
    void fillx(){
        vector<int> stillempty;
        stillempty.reserve(1000);
        fill(stillempty.begin(), stillempty.end(), 10/*somevalue youd like to use*/);
        //this means that this fills up the entre vector with a specific value we provide., this nis valueable oin many sreas that req2uire to resize an empty array to thwe size of another areray.
        return;

    }
    void equalrange(vector<int>& soemvect ){
        sort(soemvect.begin(), soemvect.end());

        auto streak = equal_range(soemvect.begin(), soemvect.end() , 2);
        cout << " \n streak : " << streak.first-soemvect.begin()  << "-" << streak.second-soemvect.begin() << " are containing duplicates!! \n";
        
        return;



    }   
    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
    //go
        long long int numofvals;
        cin >> numofvals;
        vector<int> somevect = {1,2,3,54,56,2,2,4,24,2,4,23,24,23,2};
        sort(somevect.begin(), somevect.end());
        cout << binary_search(somevect.begin(), somevect.end(), 54) << "\n";//this returns true or false; but it requires to be a sorted vector to be processed.
        //only binary search returns true or false, when we consider about the lowe bound and upper bound, they rweturn iterators.
        //lower bound and uppeer bound returns a pointer.
        auto thelowest = lower_bound(somevect.begin(), somevect.end(), 3);
        auto theupprboung = upper_bound(somevect.begin(), somevect.end(), 21);
        cout <<  thelowest- somevect.begin() << "\n\n upper: " ;//ANSWR IS 6, which means that it works, because the 0 based index for this is that. which means that, the answerr is corrwct!!!!


    cout <<theupprboung - somevect.begin(); // the answer is 9, and whcih means its int he 10th position and its completely corrwect!!!


    equalrange(somevect); //we do havge this equal range fuction, which can count the number of duplicates in one go. but also, by substracting lowwer bound fromt he upper bound also gives the sam great answer weithout any problems as well.
    //the long method is valuabel in contraint  related thigs wqhere we need to look not just for the number of duplicates but also for any other given logics such asgetting the 4th n duplcae values between them and doing soemthing with it, etc/.



    fillx();


            //another use of the the fill() fuction in the cpp 
        // fill(theupprboung, thelowest, 100); //this one is wrong! not5 because of tantyhig else, because of this., in algorithms library in cpp, what we have to do is that, we need to start doiing the library sorting from the start to the end always, it doesnt mean that we always need to sort in that way, but for fucntion parametersal, for an example, in the function fill(x,y,e); in here, for the x, they do expect it to be a pointer which comes before the pointer they expect in the posityion y.,  and this is very important because of that reason. 
        //and another thing, inside theese sorting fucntions like fill, and etxc. they do exxpect pointers, like  v.begin() << yes this is a pointer!~~~~~~~
        
         fill(thelowest, theupprboung, 100);
         cout << "\nafter that fillng>> \n";
        for(int i =0;  i <  somevect.size(); i++){
            cout << somevect[i] <<  endl;

        }


        //the next big fucntion is iota();  and it requires you to have the library iota();and iota is a cpp libarary and you must be able to use it perfectly well. and also, iota means nothing without the inclusion of the <numeric> library., the numeric librry is extremelty needed for this.
        goiota();



        //printing the entire alphabet usign iota.

        alphabetprint();
    }