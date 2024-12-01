// AoC from Day 1 (https://adventofcode.com/2024/day/1)

#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main(void) {
  int arr1[] = {};
  int arr2[]= {};
  // assuming that two arrays are of equal size (as per the aoc task)
  int arraySize=(sizeof(arr1) / sizeof(arr1[0]));
  
  qsort(arr1, arraySize, sizeof(int), comp);
  qsort(arr2, arraySize, sizeof(int), comp);
  
  int diff;
  for (int i=0; i<arraySize; i++)
    {
      diff+=abs(arr1[i]-arr2[i]);
    }
  printf("%d", diff);
}
