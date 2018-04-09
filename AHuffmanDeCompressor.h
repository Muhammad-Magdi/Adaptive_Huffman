//
// Created by muhammad on 4/9/18.
//

#ifndef ADAPTIVE_HUFFMAN_AHUFFMANDECOMPRESSOR_H
#define ADAPTIVE_HUFFMAN_AHUFFMANDECOMPRESSOR_H

#include <string>
#include <vector>
#include "Node.h"

using namespace std;

class AHuffmanDeCompressor{
private:
    Node* root;
    vector<Node*> Leader;	                //Carries the leaders of each block
public:
    AHuffmanDeCompressor();	            	//initializes root, Leader
    string deCompress(string code);			//decompresses the given code
};

#endif //ADAPTIVE_HUFFMAN_AHUFFMANDECOMPRESSOR_H
