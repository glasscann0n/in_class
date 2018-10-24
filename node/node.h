#ifndef NODE_H
#define NODE_H

#include <string>
using namespace std;

class Node {
    public:
        string name;
        Node * next;
        Node() { name = ""; next = NULL; }
        Node( string val, Node * nextNode) { name = val, next = nextNode; }
};

#endif
