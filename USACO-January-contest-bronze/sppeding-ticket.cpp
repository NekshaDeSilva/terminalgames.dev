#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <array>
#include <random>

using namespace std;
int calc(vector<pair<int, int>>& roadt, vector<pair<int, int>>& journeyt){
    int mileswrong = 0;
    for(int i = 0; i < roadt.size(); i++){
        if(roadt[i].second < journeyt[i].second){
            mileswrong+=roadt[i].first;

        }else{
            mileswrong+=0;
        }
    }

    return mileswrong;

}
int  main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    //go
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int n,m;
    cin >> n >> m;
    vector<pair<int, int>> road;
    road.reserve(1000);
    vector<pair<int, int>> itsjourney;
    itsjourney.reserve(1000);
        vector<pair<int, int>> roadmade;
    road.reserve(1000);
    vector<pair<int, int>> itsjourneymade;
    itsjourney.reserve(1000);
    int tempr1, tempr2;
    int tempb1, tempb2;
    int divident = 1;
    int totroadmadeys =0;
    int tempval32 = -1;
    int tempval33 = -1;



    for(int i=0; i < n; i++){
        cin >> tempr1 >> tempr2;
        road.emplace_back(tempr1, tempr2);

    }
    for(int i = 0; i< m; i++){
        cin >> tempb1 >> tempb2;
        itsjourney.emplace_back(tempb1, tempb2);

    }
    for(int i = 0; i < n; i++){
        for(int x = 2; x < 11; x++){
            if(tempr1%x == 0 && tempb1%x == 0){
                divident = x;
                
            }
        }

        for(int y = divident; y < 101; y+=divident){

       
                while(totroadmadeys == road[tempval32+1]){
                    tempval32++;
                 }
            
           
            roadmade.emplace_back(y,   road[tempval32].second);
            for(int s = 0 ; s < roadmade.size(); s++){
                totroadmadeys += roadmade[s].first;

                
            }   
        }
    


    }
    for(int i =0; i < m; i++){
     
        while(totroadmadeys == road[tempval33+1]){
                    tempval33++;
                 }
        for(int y = divident; y < 101; y+=divident){
            itsjourneymade.emplace_back(y,   itsjourney[tempval33].second);

        }
        
    }  
    cout << calc(roadmade, itsjourneymade);
    
}