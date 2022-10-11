//
// Created by hloi on 10/11/2022.
//

#ifndef CH08PTEX1_LINKEDLIST_H
#define CH08PTEX1_LINKEDLIST_H
#include "IntNode.h"

class LinkedList {

    LinkedList() {
        head = nullptr;
        tail = head;
        numItems = 0;

    }

    void push_front(IntNode* node) {
        if (head == nullptr) {
            head = node;
            tail = head;
        }
        else {
            node->setNextNodePt(head);
            head = node;
        }
        numItems++;
    }

    void push_back(IntNode* node) {
        if (head == nullptr) {
            head = node;
            tail = head;
        }
        else {
            tail->setNextNodePt(node);
            tail = node;
        }
        numItems++;
    }

    void insert(int pos, IntNode* node) {

    }

    void deleteNode(int pos);

    int find(int val);


private:
    IntNode* head;
    IntNode* tail;
    int numItems;
};


#endif //CH08PTEX1_LINKEDLIST_H
