//
// Created by muhammad on 4/9/18.
//

#include "Node.h"

Node ::Node(){
    freq = 0;
    parent = left = right = nullptr;
}

Node ::Node(int aFreq) {
    freq = aFreq;
    parent = left = right = nullptr;
}

Node ::Node(Node *aParent, Node *aLeft, Node *aRight, int aFreq) {
    freq = aFreq;
    parent = aParent;
    left = aLeft;
    right = aRight;
}

void Node ::swap(Node *&nA, Node *&nB) {
    Node* nT = nA;
    nA = nB;
    nB = nT;
}

int Node ::getFrequency() {return freq;}

Node* Node ::getParent() {return parent;}

Node* Node ::getLeft() {return left;}

Node* Node ::getRight() {return right;}

void Node ::setParent(Node *aParent) {parent = aParent;}

void Node ::setLeft(Node *aLeft) {left = aLeft;}

void Node ::setRight(Node *aRight) {right = aRight;}

void Node ::incrementFrequency() {++freq;}
