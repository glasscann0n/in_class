#include <iostream>
using namespace std;

#define MAX_SIZE 5

class SimpObj {
    public:
        int value;
};

int main() {
    SimpObj objs[5];
    int simple_ints[6] = { 5, 4, 3, 2, 1, 0 };

    // initialize the array objects
    for( int i=0; i< MAX_SIZE; i++ ) 
        objs[i].value = simple_ints[i];

    for(int i=0; i<6;i++) {
        cout << simple_ints[i] << "=";
        cout << objs[i].value << " ";
    }
    cout << endl;

    for(int i=0; i< MAX_SIZE; i++)
        cout << objs[i].value - i << " ";
    cout << endl;
}
