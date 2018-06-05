//
// Created by bogdan on 6/4/18.
//

#ifndef __BITMAP_H_
#define __BITMAP_H_

#include <math.h>
#include <stdio.h>
#include "stdlib.h"

void setBitByNumber(int* array, int size, int bit, int position);

int getBitByNumber(int* array, int size, int position);

void setBitByAddress(int* array, int size, void* position, int bit);

int getBitByAddress(int* array, int size, void* position);

#endif //__BITMAP_H_
