//
// Created by bogdan on 6/4/18.
//

#include "bitMap.h"

void setBitByNumber(int* array, int size, int bit, int position)
{
    // array - pointer to the begining of the array
    // position - number of the bit in the 'array'
    // bit - have to be equal to 0 or 1
    //
    // this function changes bit with number 'position' to the 'bit'

    if (position < 0 || position >= size) {
        printf("Error: position is out of array bounds\n");
        return;
    }

    array[position] = bit;
}

int getBitByNumber(int* array, int size, int position)
{
    // this function returns position's bit from the array

    if (position < 0 || position >= size) {
        printf("Error: position is out of array bounds\n");
        return -INFINITY;
    }

    return array[position];
}

void setBitByAddress(int* array, int size, void* position, int bit)
{
    // position - pointer to the bit to change
    // bit - have to be equal to 0 or 1
    //
    // this function changes bit by memory address to 'bit'

    int difference = (int) ((long) position - (long) array) / sizeof(int);

    if (difference < 0 || difference >= size) {
        printf("Error: position is out of array bounds\n");
        return -INFINITY;
    }

    *(int*) position = bit;
}

int getBitByAddress(int* array, int size, void* position)
{
    // this function returns first bit by memory address 'position'

    int difference = (int) ((long) position - (long) array) / sizeof(int);

    if (difference < 0 || difference >= size) {
        printf("Error: position is out of array bounds\n");
        return -INFINITY;
    }

    return *(int*) position;
}