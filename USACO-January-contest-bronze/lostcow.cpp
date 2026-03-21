    #include <iostream>
    #include <iomanip>
    #include <string>
    #include <algorithm>
    #include <array>
    #include <vector>
    #include <random>
    using namespace std;

    int main(){
        ios_base::sync_with_stdio(false);
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
        cin.tie(NULL);
        //go
        int x,y;
        cin >> x >> y;
        

        y-=x;
        x-=x;

        int cursor = 0;
        int counter2 =1;
        int counter3,counter4 =0;
        int distance =0;
        int nowpos = 0;
        bool state2 = true;

        for(;;){
        
            distance+= counter2 ;//1,4,10,18

            if(state2 ==true){
                cursor=0;

                cursor+=counter2;//+1,-2,+4,-8
                state2=false;

            }else{
                cursor = 0;
                cursor-=counter2;

                state2=true;

            }
            if(cursor > 0 && y >0){
                if(cursor >= y){
             distance= distance - abs(cursor-y);
                    
                cout << abs(distance);
                break; 
                
            }
            }else if(cursor < 0 && y<0){
                if( cursor <= y){
                    distance = distance - abs(cursor-y);

                    cout << abs(distance);
                    break;
                    
                }
            }else{

            }
            counter2*=2;//2,4,8
            distance += abs(cursor);//2,6,10
        

        }   

    }