#include <string>
using namespace std;

#include "utility.h"

// utility string functions for normalizing bad name input

string LowerCase(string data) {
    for(int i=0; i< data.length(); i++) {
        data[i] = tolower(data[i]);
    }
    return data;
}

string Capitalize(string data) {
    data[0] = toupper(data[0]);
    return data;
}

