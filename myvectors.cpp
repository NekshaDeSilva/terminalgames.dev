#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <array>

using namespace std;
void fillignthearraywithloop();
int main(){
    vector<int> list(3454, 0);
    list[2] = 23;
    cout << "helloworld" << endl;
    list.resize(829);
    if (list.empty() == true){
        cout << "List is empty" << endl;

    }else 
    if(list.empty() == false) {
        cout << "List has something \n" << endl;

    }
    array<int, 25> arr;
    // arr.resize(45); doesnt work for static array. they'rwe fixed.
    fillignthearraywithloop();

    return 0;

}
array<string, 423> allarezero{};
int themostsuitableapproach_for_defaultvalue();

void fillignthearraywithloop(){
    array<int,23> arr1{};
    fill(arr1.begin(), arr1.end() ,0);
    cout << allarezero[2] << endl; // Thius outputs an empty string, and also, you cannot do this too: fill(allarezerol.begin(), allarezero.end(), 0);<< this will throw an error because the string arrays do noit have any concept called any ZERO. 
    //Do this to set a same value for every inde4xs in a string array.
    fill(allarezero.begin(), allarezero.end(), "default"); //Default value set for all.
    for (int i = 0; i < allarezero.size(); i++){
        cout << allarezero[i] << endl;
    }
    themostsuitableapproach_for_defaultvalue();

}
int regulararrayapproach_for_deafultvalue();

int themostsuitableapproach_for_defaultvalue(){
    array<int, 233> somearray2; // Curretnly, this outputsd garbage values asd the array indices.
    fill(somearray2.begin(), somearray2.end(), /*use one of these: -1, 1e9, -1e9*/ -1e9);
    cout << somearray2[3] << endl; /*-1000000000*/
   
    //Lessons learnt, always use stl array lib and vector array lib in the header.
    regulararrayapproach_for_deafultvalue();

 return 0;}
int regulararrayapproach_for_deafultvalue(){
    int arrayregular[53] = {}; // All values become 0
    int arrayregular1[212]; //All default values are garbage values.
    // The use of fill() method is completely different for regular arrays than stl arrays.
    fill(arrayregular1, arrayregular1+212/*here this +5 and this entire term acts as a pointer.*/, 0/*defaultvalue*/);
    //The reason why we should and miust always train to use regular arrays too ius that, because, once the number of elements in an array is unknown, we cannot use the stl array at all.. we must use the normal regiualr array as it can be assiugned weith variables.

    cout << arrayregular1[2] << endl;
    return 0;

}
