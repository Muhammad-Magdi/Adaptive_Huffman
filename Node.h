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
    int data;
public:
    Node();									//default Constructor
    Node(int , int = 1);				        //initial data and Frequency
    Node(Node*, Node*, Node*, int = 0, int = 1);		    //Parent, Left, Right, data and Frequancy
    int getFrequency() const;
    int getData() const;
    Node* getParent() const ;
    Node* getLeft()const ;
    Node* getRight() const ;
    void setParent(Node*);
    void setLeft(Node*);
    void setRight(Node*);
    void setData(int data);
    void incrementFrequency();
};

#endif //ADAPTIVE_HUFFMAN_NODE_H
