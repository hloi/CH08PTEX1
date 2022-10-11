//
// Created by hloi on 10/11/2022.
//

#ifndef CH08PTEX1_INTNODE_H
#define CH08PTEX1_INTNODE_H


class IntNode {
public:

    IntNode();
    IntNode(int dataInit = 0, IntNode* nextLoc = nullptr);
    void insertAfter(IntNode* nodeLoc);
    void deleteNode(IntNode* node);

    IntNode* getNextNodePt() const;
    void PrintNodeData();

private:
    int dataVal;
    IntNode* nextNodePt;
public:
    int getDataVal() const;

};


#endif //CH08PTEX1_INTNODE_H
