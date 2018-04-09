//
// Created by muhammad on 4/9/18.
//

#ifndef ADAPTIVE_HUFFMAN_NODE_H
#define ADAPTIVE_HUFFMAN_NODE_H

class Node{
private:
    Node *parent;
    Node *left, *right;
    int freq;
public:
    Node();									//default Constructor
    Node(int aFreq);				        //initial Frequency
    Node(Node*, Node*, Node*, int = 1);		    //Parent, Left, Right and Frequancy
    static void swap(Node* &, Node* &);            //Swaps two sub-Trees
    int getFrequency();
    Node* getParent();
    Node* getLeft();
    Node* getRight();
    void setParent(Node*);
    void setLeft(Node*);
    void setRight(Node*);
    void incrementFrequency();
};

#endif //ADAPTIVE_HUFFMAN_NODE_H
