#ifndef DATA_H
#define DATA_H

// Data input routines

#include <string>
using namespace std;

extern string first_name;
extern string last_name;
extern string mothers_maiden_name;
extern string home_town_name;

void get_data(void);
void display_data(void);

#endif
