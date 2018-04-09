//
// Created by muhammad on 4/9/18.
//

#ifndef ADAPTIVE_HUFFMAN_AHUFFMANCOMPRESSOR_H
#define ADAPTIVE_HUFFMAN_AHUFFMANCOMPRESSOR_H

#include <string>
#include <vector>
#include "Node.h"

using namespace std;

class AHuffmanCompressor{
private:
    Node* root;
    vector<Node*> Leader;	//Carries the leaders of each block
public:
    AHuffmanCompressor();		//initializes root, Leader
    string compress(string message);		//Compresses the given message
};

#endif //ADAPTIVE_HUFFMAN_AHUFFMANCOMPRESSOR_H
