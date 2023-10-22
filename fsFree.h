/**************************************************************
* Class:  CSC-415-01 Fall 2023
* Names: Sidney Thomas, Hoang-Anh Tran, Ruxue Jin, Yee-Tsing Yang
* Student IDs: 918656419, 922617784, 923092817, 922359864
* GitHub Name: siid14, htran31, RuxueJ, Y-Y1Q
* Group Name: Alibaba
* Project: Basic File System
*
* File: fsFree.h
*
* Description: Interface for free space management 
*
* 
*
**************************************************************/
#include "mfs.h"
#include "VCB.h"
#include "DE.h"
#include "fsLow.h"

// create a char array for bitmap
unsigned char *bitMap;

// use value provided in fsInit to initializa bitmap
void initBitmap(uint64_t numberOfBlocks, uint64_t blockSize);

//// Helper functions 
// set the bit corresponding to blockNum to 1 (mark the block as used)
void setBitUsed(unsigned char *bitMap, unsigned int blockNum);

// set the bit corresponding to blockNum to 0 (mark the block as free)
void setBitFree(unsigned char *bitMap, unsigned int blockNum);

// Find the first free block after blockNum
int getFreeBlockNum(unsigned char *bitMap, unsigned int blockNum);

// TODO after M1
// reload bit map from disk
// file allocation method