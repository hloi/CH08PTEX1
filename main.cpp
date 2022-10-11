#include <iostream>
#include "IntNode.h"
using namespace std;
int main() {
    IntNode* p;
    IntNode* head;
    IntNode* tail;


    IntNode* p1 = new IntNode(5);
    head = p1;
    tail = p1;
    IntNode* p2 = new IntNode(10, p1);
    head = p2;
    IntNode* p3 = new IntNode(15);
    p1->insertAfter(p3);
    p1->deleteNode(p3);
    tail = p3;
    p1->PrintNodeData();
    p2->PrintNodeData();

    p = head;
    while (p) {
        p->PrintNodeData();
        p = p->getNextNodePt();
    }

    // delete the linked list
    p = p2;
    while (p) {
        IntNode* p3;
        p3 = p;
        p = p->getNextNodePt();
        delete p3;
    }

    cout << p << endl;

    IntNode* headNode = new IntNode(0, p2);
    headNode->deleteNode(p2);
//    cout << p1 << endl;
//    p->insertAfter(p1);
//    p1->insertAfter(p2);
    return 0;
}
