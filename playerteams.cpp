#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int  main(){
    int m =0;
    int n =0;
    vector<vector<int>> playertable(100, vector<int>(100, 0));

   
    cout << "player perfomance analyzer" << endl;
    cout << endl;

    for(;;){
        
        cout << "Enter Team " << n  <<  " Match " << m << " results"<< endl;
        cin >> playertable[n][m]    ;
        cin.ignore();
        
        cout << "Press space to continue, Finish? Press Enter." << endl;
        string tempinput213;
        getline(cin, tempinput213);
        if (!(cin >> playertable[n][m])) {
           break;
        }
        if (tempinput213.empty() == true){
            break;
        }else{
            cin.ignore();
            
        }
        cout << "Start player team " << n+1 << "? (yes or no)" << endl;
        string answ22;
        cin >> answ22;
        cin.ignore();


        if (answ22 == "yes")
        {
            n+=1;
            m=0;
            cout << "Added Player Team " << n << endl;


        }else{
            //donothing.
            m+=1;
            
        }
        
         
    }    
  
    cout << "Player Team Results --------------" << endl;
    for (int i = 0; i < playertable.size(); i++)
    {
        cout << "Team " << i << " Results: " ;
         
        for (int x = 0; x < playertable[i].size(); x++)
        {
            cout << " " << playertable[i][x] << " ";
        }
        
    }
    
}