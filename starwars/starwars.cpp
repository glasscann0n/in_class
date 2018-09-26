// Star Wars Name Processor
#include <string>
using namespace std;

#include "starWars.h"
#include "utility.h"
#include "data.h"

string gen_name(void) {
    string part1 = last_name.substr(0,3);
    string part2 = first_name.substr(0,2);
    string part3 = mothers_maiden_name.substr(0,2);
    string part4 = home_town_name.substr(0,3);

    // handle bad input
    string sw_first_name = Capitalize(LowerCase(part1 + part2));
    string sw_last_name = Capitalize(LowerCase(part3 + part4));

    return sw_first_name + " " + sw_last_name;
}
