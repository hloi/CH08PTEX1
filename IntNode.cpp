//
// Created by hloi on 10/11/2022.
//
#include <iostream>
#include "IntNode.h"
using namespace std;


IntNode::IntNode(int dataInit, IntNode *nextLoc) {
    cout << "Default and Non-default constructor." << endl;
    this->dataVal = dataInit;
    this->nextNodePt = nextLoc;
}

void IntNode::insertAfter(IntNode *nodeLoc) {
    nodeLoc->nextNodePt = this->nextNodePt;
    this->nextNodePt = nodeLoc;

}

IntNode *IntNode::getNextNodePt() const {
    return this->nextNodePt;
}

int IntNode::getDataVal() const {
    return dataVal;
}

void IntNode::PrintNodeData() {
    cout << this->dataVal << endl;
//    cout << this->nextNodePt << endl;
}

void IntNode::deleteNode(IntNode *node) {
    this->nextNodePt = node->nextNodePt;
    delete node;


}

void IntNode::setNextNodePt(IntNode *node) {
    this->nextNodePt = node;
}
