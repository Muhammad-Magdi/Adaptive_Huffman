//
// Created by muhammad on 4/9/18.
//

#include "Node.h"

Node ::Node(){
    data = 0;
    freq = 0;
    parent = left = right = nullptr;
}

Node ::Node(int aData, int aFreq) {
    data = aData;
    freq = aFreq;
    parent = left = right = nullptr;
}

Node ::Node(Node *aParent, Node *aLeft, Node *aRight, int aData, int aFreq) {
    data = aData;
    freq = aFreq;
    parent = aParent;
    left = aLeft;
    right = aRight;
}

int Node ::getFrequency() const{
    return freq;
}

Node* Node ::getParent() const{
    return parent;
}

Node* Node ::getLeft() const{
    return left;
}

Node* Node ::getRight() const{
    return right;
}

int Node ::getData() const {
    return data;
}

void Node ::setParent(Node *aParent) {
    parent = aParent;
}

void Node ::setLeft(Node *aLeft) {
    left = aLeft;
}

void Node ::setRight(Node *aRight) {
    right = aRight;
}

void Node::setData(int data) {
    Node::data = data;
}

void Node ::incrementFrequency() {
    ++freq;
}
