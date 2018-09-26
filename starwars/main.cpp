#include <iostream>
#include <string>
using namespace std;

#include "data.h"
#include "utility.h"
#include "starWars.h"

int main(int argc, char *argv[]) {
    cout << "Example Program from Lecture 6" << endl;

    get_data();         // process user data
    string sw_name = gen_name();
    cout << "Your Star Wars name is: " << sw_name << endl;

    return 0;
}



