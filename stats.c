/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"
#include <stdlib.h>
/* Size of the Data Set */
#define SIZE (40)
// A comparator function used by qsort 
int compare(const void * a, const void * b) 
{ 
} 

void print_arr(unsigned char* arr, int N) {
}

unsigned char find_max(unsigned char* arr, int N, int isSorted) {
}
unsigned char find_min(unsigned char* arr, int N, int isSorted) {
}
unsigned char find_mean(unsigned char* arr, int N) {
}
unsigned char find_median(unsigned char* arr, int N, int isSorted) {
  

}
void print_statistics(unsigned char* arr, int N, int isSorted) {
}
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  qsort(test, SIZE, sizeof(char), compare); 
  print_arr(test, SIZE);
  print_statistics(test, SIZE, 1);
}

/* Add other Implementation File Code Here */
