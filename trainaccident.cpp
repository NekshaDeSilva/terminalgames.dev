#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <random>

using namespace std;
using namespace std::chrono;
int trainboarding(vector<pair<pair<int, string>, pair<int, string>>>& boardlist){
    int coutnter2312 = 0;
    random_device ticketc;
      mt19937 gen(ticketc());
      uniform_int_distribution<> distr(29482,948924);
     bool state2 = true;//false means left, true means right
       
    int trainmaxcap = 100;

   
     for(;;){
        
        

        if(trainmaxcap < 1){
            break;

        }


        cout << trainmaxcap<<  " more passenger seats available." << "\n" ;

        cout << "Enter your name" << "\n";
       
        string entityname ="Unknown Name";
        int ageentity = 0;/*wer nee to get the average age of all the pope for people who die without age data.;*/
        getline(cin,  entityname);
   
        cout << "What is your age? \n";
        cin >> ageentity;
        cin.ignore();

        if(entityname.empty() == true){
   
            break; 

        }
       
       if(state2==true){
        boardlist.push_back({});
        boardlist[coutnter2312].first = {ageentity, entityname};

        trainmaxcap--;
        state2=false;
       }else{
        boardlist[coutnter2312].second ={ageentity, entityname};
        state2 = true;
        coutnter2312++;
        trainmaxcap--;
       }


        
    }
return 1;

}
int simulate(vector<pair<pair<int, string>, pair<int, string>>>& train1, vector<pair<pair<int, string>, pair<int, string>>>& train2){
    vector<string> dead_names;
    vector<string> severe_names;
    vector<int> severe_time;
    vector<string> uninjured_names;
    int kids_dead = 0;
    int minors_dead = 0;
    int adults_dead = 0;
    int seniors_dead = 0;
    double train_weight = 10.0;
    vector<double> median_weights = {15.0, 45.0, 70.0, 75.0, 80.0, 82.0, 78.0, 70.0};

    int min_size = train1.size() < train2.size() ? train1.size() : train2.size();

    for(int i = 0; i < min_size; ++i) {
        double w1_1 = 0, w1_2 = 0, w2_1 = 0, w2_2 = 0;
        int a1_1 = train1[i].first.first;
        int a1_2 = train1[i].second.first;
        int a2_1 = train2[i].first.first;
        int a2_2 = train2[i].second.first;

        if(a1_1 > 0) w1_1 = median_weights[min(a1_1 / 10, 7)];
        if(a1_2 > 0) w1_2 = median_weights[min(a1_2 / 10, 7)];
        if(a2_1 > 0) w2_1 = median_weights[min(a2_1 / 10, 7)];
        if(a2_2 > 0) w2_2 = median_weights[min(a2_2 / 10, 7)];

        double comp1_weight = train_weight + w1_1 + w1_2;
        double comp2_weight = train_weight + w2_1 + w2_2;

        double force_on_1 = comp2_weight * 5.0;
        double force_on_2 = comp1_weight * 5.0;

        vector<pair<int, string>> p1 = {train1[i].first, train1[i].second};
        vector<pair<int, string>> p2 = {train2[i].first, train2[i].second};

        for(int j = 0; j < 2; ++j) {
            int age = p1[j].first;
            string name = p1[j].second;
            if(age > 0) {
                double threshold = age < 15 ? 100.0 : 300.0;
                if(age < 5) threshold = 50.0;
                double damage = force_on_1;
                if(damage >= threshold) {
                    dead_names.push_back(name);
                    if(age < 18) minors_dead++;
                    if(age < 12) kids_dead++;
                    if(age >= 18 && age < 60) adults_dead++;
                    if(age >= 60) seniors_dead++;
                } else if(damage >= threshold * 0.8) {
                    severe_names.push_back(name);
                    severe_time.push_back(120 - (damage - threshold * 0.8));
                } else {
                    uninjured_names.push_back(name);
                }
            }
        }

        for(int j = 0; j < 2; ++j) {
            int age = p2[j].first;
            string name = p2[j].second;
            if(age > 0) {
                double threshold = age < 15 ? 100.0 : 300.0;
                if(age < 5) threshold = 50.0;
                double damage = force_on_2;
                if(damage >= threshold) {
                    dead_names.push_back(name);
                    if(age < 18) minors_dead++;
                    if(age < 12) kids_dead++;
                    if(age >= 18 && age < 60) adults_dead++;
                    if(age >= 60) seniors_dead++;
                } else if(damage >= threshold * 0.8) {
                    severe_names.push_back(name);
                    severe_time.push_back(120 - (damage - threshold * 0.8));
                } else {
                    uninjured_names.push_back(name);
                }
            }
        }
    }

    cout << "\nDead:\n";
    for(size_t i = 0; i < dead_names.size(); ++i) {
        cout << dead_names[i] << "\n";
    }

    cout << "\nSeverely Injured:\n";
    for(size_t i = 0; i < severe_names.size(); ++i) {
        cout << severe_names[i] << " - Time left: " << severe_time[i] << " mins\n";
    }

    cout << "\nUninjured:\n";
    for(size_t i = 0; i < uninjured_names.size(); ++i) {
        cout << uninjured_names[i] << "\n";
    }

    cout << "\nCasualties Summary:\n";
    cout << "Minors dead: " << minors_dead << "\n";
    cout << "Kids dead: " << kids_dead << "\n";
    cout << "Adults dead: " << adults_dead << "\n";
    cout << "Seniors dead: " << seniors_dead << "\n";

    return 0;
}
/*valueable way to look for input until the input supply ends:: 

int inputsupply;
while (cin >> inputsupply){
    //input is recieiving
}else{
    cout  << "why did you stop sending input??" << "'\n"
    
    }
*/
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //fastio
    vector<pair <pair<int, string>, pair<int, string>>> train;
    vector<pair<pair<int, string>, pair<int,string>>> conflictingtrain;

    train.reserve(1000);
    int ticketstate = trainboarding(train);
    if(ticketstate == 1){
        cout << "Onboard Success.\n";

    }else{
        cout << "Onboariding Unsuccessful. Please onboard again. \n\n";
        ticketstate=trainboarding(train);

    }
    cout << "Train 2 is on the same track and is about to conflict with the previous train 1. \n";



    conflictingtrain.reserve(1000);
     ticketstate = trainboarding(conflictingtrain);
    if(ticketstate == 1){
        cout << "Train 2 Onboard Success.\n";

    }else{
        cout << "Train 2 Onboariding Unsuccessful. Please onboard again. \n\n";
        ticketstate=trainboarding(conflictingtrain);

    }
    cout << "Train 1 and Train 2 departed from New Mexico. Fortunately. a train rail conflict makes both trains conflict each other side-to-side.\n";
    cout << "\n ------------- \nConflict Report\n";
    cout << simulate(train, conflictingtrain);




}