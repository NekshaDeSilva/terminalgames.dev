#include <bits/stdc++.h>
using namespace std;
int main(){
    long long somevale;
    multiset<ll> list;
    list.reserve((1000));
    list = {1,2,3,4,5,3,4,2,4,34,23,3,23,4,23,43,34,23,3,43,2,4,43,2,4,3,23,43,3,3,34,3,3,33};
    list.erase(list.find(3)); // note this method of removeal. the find alwasy returns us a value, i mean the value type is the multiset or the specific multiset type value. and this also works for the vector as well. But does not work with data stru utres with has stored tree strucutees for storing, i mean that tree strucutre for storing data isnt there really. 
    list.insert(11);
}