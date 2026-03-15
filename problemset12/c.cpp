/*Backtack Cleaner*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;
void showthelist(const vector<int>& listderived){// Every vector that recieves a referece vector must use const as the variable type.. keep that in your mind.

    for(int i= 0; i < listderived.size(); i++){
        cout <<" " << listderived[i] << " ";
        
    }

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    vector<int> list;
    list.reserve(1000);
    int counter= 0;

    for(;;){
        counter++;

        int tempval = 0;

        cin >> tempval;
        if(tempval == -1){
               cin.ignore();
            if(list.empty() == true){
                continue;

            }else{
                list.pop_back();
            }
         



        }else{
            list.push_back(tempval);
            cin.ignore();

        }
        if(counter%5 == 0){
            cin.ignore();
            cout << " \n Stop? (Press space) \n ";
            
            string tempval3 = "nonempty";
            getline(cin, tempval3);



            if(tempval3.empty() == true){
                showthelist(list);

                break;
         

            }
        }else{
           continue;


        }
        

    }
}