/*Nekshavs*/
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
// #include <fstream>  a new lib just used for context
using  ll =long long;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    // freopen("revegetate.in", "r" ,stdin);
    // freopen("revegetate.out", "w" , stdout);
    ll numoffields;
    ll numofcows;
    cin >> numoffields >> numofcows;

    // Because a cow cannot eat the same grass in two different fields,
    // we need to track which fields are linked together by a cow.
    // We create an array of lists. Each field (index) gets its own list of connected fields.
    vector<int> connected_fields[155];

    // Because we need to read all the cows' preferences, we loop numofcows times.
    for (int i = 0; i < numofcows; i++) {
        int field1, field2;
        cin >> field1 >> field2;
        
        // Because field1 and field2 are linked by this cow, they cannot have the same grass.
        // So, we add field2 to field1's list of connections.
        connected_fields[field1].push_back(field2);
        
        // Because the restriction goes both ways, we also add field1 to field2's list.
        connected_fields[field2].push_back(field1);
    }

    // Because we need to remember which grass type we eventually plant in each field,
    // we make an array to store the answers. 0 means "no grass planted here yet".
    int grass_planted[155] = {0};

    // Because the problem asks us to plant grass in fields 1 through N,
    // we go through the fields one by one in chronological order.
    for (int current_field = 1; current_field <= numoffields; current_field++) {
        
        // Because we are at a brand new field, we start by assuming all 4 grass types are available.
        // Index 1, 2, 3, and 4 are true. (Index 0 is ignored).
        bool grass_available[5] = {false, true, true, true, true};

        // Because we cannot use the same grass as the fields connected to current_field,
        // we look at the list of connections we built earlier for this specific field.
        for (int neighbor : connected_fields[current_field]) {
            
            // Because some of these connected fields might have already been processed in previous loops,
            // we check if they already have a grass type planted (not 0).
            if (grass_planted[neighbor] != 0) {
                
                // Because this neighboring field already uses this specific grass type,
                // we mark that grass type as false (unavailable) for our current_field.
                grass_available[ grass_planted[neighbor] ] = false;
            }
        }

        // Because we crossed off the unavailable grass types in the previous step,
        // we now loop from 1 to 4 to find the smallest number that is still true (available).
        for (int grass_choice = 1; grass_choice <= 4; grass_choice++) {
            
            if (grass_available[grass_choice] == true) {
                // Because we found the smallest available grass, we assign it to current_field.
                grass_planted[current_field] = grass_choice;
                
                // Because we only need one grass type, we stop looking and break the loop.
                break;
            }
        }

        // Because we just finalized the grass type for current_field, we print it to the screen.
        cout << grass_planted[current_field];
    }
    
    cout << "\n";
    return 0;
}