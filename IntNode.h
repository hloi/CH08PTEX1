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
    int getDataVal() const;
    IntNode* getNextNodePt() const;
    void setNextNodePt(IntNode* node);
    void PrintNodeData();

private:
    int dataVal;
    IntNode* nextNodePt;



};


#endif //CH08PTEX1_INTNODE_H
