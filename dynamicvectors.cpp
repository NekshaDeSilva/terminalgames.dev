#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <vector>
#include <cmath>
#include <chrono>

using namespace std;
ios_base::sync_with_stdio(false);
cin.tie(NULL);


/*ios_base::sync_with_stdio(false)Disconnects cin/cout from scanf/printf~5x faster input*/
/*cin.tie(NULL)Stops cout flushing before every cin~2x faster*/
/*Use "\n" not endlStops flushing after every line~3x faster output*/
int usingactually();

int main(){
    vector<vector<int>> grid;
    grid.reserve(1000); 
    /*This grid.reserve() doesnt create grid elements or indexes at all. It rsearves space for the future adding of elements to the array or vectr to come. it doesnt make any sense in the othwer way. Meanitgn that, as long as we push back or emplace back, nothing is in the array or vector excep the reserved memory in the storage.*/
    int counter222;
   
    
    for(auto& x: grid){
        counter222++;
        grid[counter222].reserve(100);
         fill(grid[counter222].begin(), grid[counter222].end(), 1);
    }
    for (auto& x: grid){
        for (auto& y:x){
            cout << " " << y << " " ;

        }
    }
    usingactually();

}
void remove_from_the_array(vector<int> recieved_array){
    /*This is used to remove elements from an array from its end on.*/
    recieved_array.pop_back(); //We do not declare ther value or the position of the element to be re3moved from a vector./

}
int usingactually(){
    vector<int> train; //it has 0 memory
    train.reserve(10); // reserve 10 spos in memory but not added as elements/

    train.emplace_back(3335);
    cout << /*Check how much memory used*/ train.capacity() << endl; //Outputs 10.
    cout << /*Check how much elements currently used.*/ train.size() << endl; //Outputs 1

    remove_from_the_array(train);


}