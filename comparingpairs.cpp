#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>
#include <vector>
#include <string>
#include <random>

using namespace std;
void smallestpair(){
    vector<pair<int, int>> list;
    list.reserve(1000);
    int tempval, tempval2;
    int counter13 =0 ;
    for(;;){
        if(counter13 > 4){
            break;
            
        }
        cin >> tempval >> tempval2;
        list.emplace_back(tempval,tempval2);
        counter13++;

        
    }
    pair smallestpair=   *min_element(list.begin(), list.end());
    cout << "smallest: " << smallestpair.first << " " << smallestpair.second << "\n" ;

     /*You can use auto too, if there are multiple types of variables inside the pair, but in this case, i will use pair because i know ths is a pair.:0*/
}
void maxpair(){
    vector<pair<int, int>> list;
    list.reserve(1000);
    int tempval, tempval2;
    int counter13 =0 ;
    for(;;){
        if(counter13 > 4){
            break;
            
        }
        cin >> tempval >> tempval2;
        list.emplace_back(tempval,tempval2);
        counter13++;


        
    }
    auto biggest = *max_element(list.begin(), list.end());
    cout << "Biggest: " << biggest.first  << " " << biggest.second;


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    smallestpair();
    maxpair();


}