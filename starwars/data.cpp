#include <iostream>
#include <string>
using namespace std;

#include "data.h"

string first_name;
string last_name;
string mothers_maiden_name;
string home_town_name;

void get_data(void) {
    cout << endl << "What is your first name: ";
    cin >> first_name;
    cout << "What is your last name: ";
    cin >> last_name;
    cout << "What is your mother's maiden name: ";
    cin >> mothers_maiden_name;
    cout << "What town were you born in:  ";
    cin >> home_town_name;
}

void display_data(void) {
    cout << endl << "Hello " << first_name << 
        " " << last_name << endl;
    cout << "You were born in "<< home_town_name << endl;
    cout << "and your mother's maiden name is: " << 
        mothers_maiden_name << endl;
}
