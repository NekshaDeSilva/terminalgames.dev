#include <iostream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <utility>
#include <numeric>
#include <cmath>
#include <climits>
#include <random>
#include <string>
#include <array>
#include <vector>
using  ll =long long;
/*The heck leson ive learnt from this, in unordered maps and ordered maps, there is a one difference and yuou have to keep it in the mind, the diffferenvce is not about that the noral map dont allow to store duplicates but the ordered map wont, thats WQRONG. both of the maps do nopt add duplicates. the thing that you might be confusing with is multisets. and the thing i want to let you know is that,  the only differnece is the sorting and not sorting, and please do not 
confuse it with the multisets and unordered_multisets, in the multiesets, commonly, they always do keep the duplicates, regardless of the type of the multisets, they always lkeep the duplicate and the defdference betweren two multisert type t=is thgat they have the oosrting or non sorted options and thats all. nothing else., and also, another thing, which is that, in maps., regardles of the nmap type, they dont keep duplicates at all.*/
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    set<set<char>> board;
    char temp ;
    vector<vector<char>> tempdiagonals;
    tempdiagonals.resize(3);
    for(int i =0;  i <  3 ;i++){
        tempdiagonals[i].resize(3);

    }
    for(int i = 0;  i < 3; i ++){
        set<char> temprow1;

        for(int x = 0; x < 3; x++){
            cin >> temp;
            tempdiagonals[i][x]  = temp;

            temprow1.insert(temp);

        }
        board.insert(temprow1);;
        

    } 

    for(int x = 0; x < 3; x++){
        set<char> tempcol;
        for(int i = 0; i < 3; i++){
            tempcol.insert(tempdiagonals[i][x]);
        }
        board.insert(tempcol);
    }

    int sstate = 1;
    for(int i = 0;  i < 2; i++){
        set<char> tempset2;
       
        if(sstate == 1){
           tempset2.insert(tempdiagonals[0][0]);
           tempset2.insert(tempdiagonals[1][1]);
           tempset2.insert(tempdiagonals[2][2]);
           sstate = 3;
        }else{
           tempset2.insert(tempdiagonals[0][2]);
           tempset2.insert(tempdiagonals[1][1]);
           tempset2.insert(tempdiagonals[2][0]);
        }
        
        board.insert(tempset2);
    }

    int cntteams  = 0;
    int cntind = 0;
    
    for(auto i : board){
        int tempcount = i.size();
        if(tempcount == 1){
            cntind++;
        }else if(tempcount == 2){
            cntteams++;
        }
    }

    cout << cntind << "\n" << cntteams;
    

}