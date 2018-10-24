#include "Node.h"
#include "LinkedList.h"

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    LinkedList myList;
    string name;
    
    while (true) {
        cout << "Enter name ('quit' to end):";
        cin >> name;
        if (name == "quit") break;
        myList.insert(name);
        myList.print();
    }
    myList.print();
}
