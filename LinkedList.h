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
    }

    void insert(IntNode* node) {
        if (head == nullptr) {
            head = node;
        }
    }

private:
    IntNode* head;
    IntNode* tail;

};


#endif //CH08PTEX1_LINKEDLIST_H
