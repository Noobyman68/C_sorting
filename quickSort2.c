#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#include "assert.h"

static void swap(void *list, int left, int right){
//if values are at the same address, swapping will result in a value of 0 
//in such a case, not swapping will still give the correct results
  if(left == right){
    return;
  }
//using this swap method for the sake of learning
//in modern systems, temp swapping is faster mem is not a problem
  list[left] = list[left] ^ list[right];
  list[right] = list[left] ^ list[right];
  list[left] = list[left] ^ list[right];
}
int partitionInt(int *list, int size){
  if(size <= 1){
    return 0;
  }
  int left = 0;
  int right = size-1;
  int median = list[size/2];
  int Lcount = 0;
  int Mcount = 0;
  for(int i = 0; i < size; i++){
    if(list[i] < median){
      Lcount++;
    }if else{
      Mcount++;
    }
  }
  while(true){
    printf("%d ", list[left]);
    printf("%d ", median);
   while(list[left] < median){
      left++;
      printf("test1");
    }
    while(list[right] > median){
      right--;
      printf("test2");
    }
    if(left>=right){
      break;
    }
// these check for duplicates and move them to middle
// swaps left or right value with value at middle pointer
// since increment only occurs during iteration, 
// if swapped value from middle is incorrect in position, it will still get handled
    if(list[left] == median){
      swap(list, left, Lcount + Mcount);
    }else if(list[right] == median){
      swap(list, Lcount + Mcount, right);
    }
    swap(list, left, right);
  }
  partitionInt(list, Lcount);
  partitionInt(list+Mcount+Lcount,size-Mcount-Lcount);
  return 0;
}
int* quickInt(int *list, int size){
  int *sortedList = (int*)malloc(size * sizeof(int));
  for(int i = 0; i < size; i++){
    sortedList[i] = list[i];
  }
  partitionInt(sortedList, size);
  return sortedList;
}


int main(){
  int nums[] = {1,5,2,3,4,0,6,-2,8,9};
  int size = sizeof(nums)/sizeof(nums[0]);
  int *sortedNums = (int*)malloc(size * sizeof(int));
  sortedNums = quickInt(nums, size);
  printf("\n");
  for(int i = 0; i < size; i++){
    printf("%d ", nums[i]);
  }
  printf("\n");
  for(int i = 0; i < size; i++){
    printf("%d ", sortedNums[i]);
  }
  printf("\n");
  return 0;
}
