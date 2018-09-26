#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    string first_name;
    string last_name;
    string mothers_maiden_name;
    string home_town_name;

    cout << "Star Wars Name Generator" << endl;
    cout << endl << "What is your first name: ";
    cin >> first_name;
    cout << "What is your last name: ";
    cin >> last_name;
    cout << "What is your mother's maiden name: ";
    cin >> mothers_maiden_name;
    cout << "What town were you born in:  ";
    cin >> home_town_name;
    cout << endl << "Hello " << first_name << 
        " " << last_name << endl;
    cout << "You were born in "<< home_town_name << endl;
    cout << "and your mother's maiden name is: " << 
        mothers_maiden_name << endl;
        
    string part1 = last_name.substr(0,3);
    string part2 = first_name.substr(0,2);
    string part3 = mothers_maiden_name.substr(0,2);
    string part4 = home_town_name.substr(0,3);
         // lower case parts 2 and 4
    part2[0] = tolower(part2[0]);
    part4[0] = tolower(part4[0]);

    cout << "Part1: " << part1 << endl;
    cout << "Part2: " << part2 << endl;
    cout << "Part3: " << part3 << endl;
    cout << "Part4: " << part4 << endl;

    string star_wars_name = part1 + part2 + " " + part3 + part4;
    cout << "Your Star Wars name is: " << star_wars_name << endl;
    return EXIT_SUCCESS;
}


