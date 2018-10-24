#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

#include <string>
using namespace std;

class LinkedList {
    public:
        Node * head;
        LinkedList() { head = NULL; }
        void insert( string val);
        void print(void);
};

#endif
