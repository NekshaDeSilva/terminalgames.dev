#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <array>
#include <cmath>
#include <random>
/*New one*/
#include <climits>
using ll = long long;
#define s(x) sort((x).begin(), (x).end())
using namespace std;
struct book{
        string name;
        int age;
        int gpa;
   
};
int main(){
    
    book mybook2;
    cin >> mybook2.name;
    cin.ignore();

    mybook2.age = 2;
    cout << mybook2.name  << " / " << mybook2.age << "\n";

    //or you can dirrectly add the values for them at once. 
    book anotherboolk;
    anotherboolk = {"helfo", 32, 233};
    cout << anotherboolk.name << " / " << anotherboolk.age;


}