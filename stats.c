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
    return ( *(unsigned char*)a - *(unsigned char*)b ); 
} 

void print_arr(unsigned char* arr, int N) {
   printf("the array is: ");
   for (int i = 0; i < N; i++)
	printf("%d, ",arr[i]);
   printf("\n"); 
}

unsigned char find_max(unsigned char* arr, int N, int isSorted) {
	if (isSorted == 1) {
	    return arr[N-1];
	}
	else {
	   unsigned char max = arr[0];
	   for (int i = 1; i < N; i++ ) {
		   max = (arr[i] > max)? arr[i]: max; 
	   }
	   return max; 
	}
}
unsigned char find_min(unsigned char* arr, int N, int isSorted) {
	if (isSorted == 1) {
	    return arr[0];
	}
	else {
	   unsigned char min = arr[0];
	   for (int i = 1; i < N; i++ ) {
		   min = (arr[i] < min )? arr[i]: min; 
	   }
           return min; 	
	}
}
unsigned char find_mean(unsigned char* arr, int N) {
	   unsigned char S = 0;
	   for (int i = 1; i < N; i++ ) {
		   S += arr[i]; 
	   }
	   return S; 
}
unsigned char find_median(unsigned char* arr, int N, int isSorted) {
	if (isSorted == 0)
            qsort(arr, N, sizeof(char), compare); 
	else
	    if (N%2 == 1)
		    return arr[N/2];
	    else
		    return (arr[(N-1)/2] + arr[N/2])/2;
  

}
void print_statistics(unsigned char* arr, int N, int isSorted) {
    unsigned char arr_max = find_max(arr, N, isSorted);
    unsigned char arr_min = find_min(arr, N, isSorted);
    unsigned char arr_mean = find_mean(arr, N);
    unsigned char arr_media = find_median(arr, N, isSorted);
    printf("min = %d, ", arr_max);
    printf("max = %d, ", arr_min);
    printf("mean = %d, ", arr_mean);
    printf("media = %d\n", arr_media);
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
