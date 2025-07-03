// take median
// initialize left and right pointers
// move left until left pointer is >= pivot
// move right until right pointer is <= pivot
// when both, swap
// if left and right pointers cross, partition left and right of pivot
// repeat proccess for partitions

#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"

void partitionInt(int *list, int size){
  for(int i = 0; i < size; i++){
    printf("%d ", list[i]);
  }
  printf("\n");
//base case needed for recurssion 
  if(size <= 1){
    return;
  }
  int median = *(list + (size/2));
  printf("%d \n", median);
  int partitionIndex = 0;
  for(int i = 0;i <size; i++){
    if(*(list + i)<median){
      partitionIndex++;
    }
  } 
  int i = 0;
  int j = size-1;
  while(true){
  //set pointers and swap if not crossed
    printf("%d ", i);
    printf("%d ", j);
    printf("\n");
    while(*(list + i) < median){
      i++;
    }
    while(*(list + j) > median){
      j--;
    }
//    if(*(list+i)==median && *(list+j)==median){
//      printf("%d ", i);
//      printf("I got here");
//      j--;
//      i++;
//      printf("%d ", i);
//    }
//we have our partitions if this is true;
    if(i>=j){
      break;
    }
//swap 2 values without using extra space
    *(list + i) = *(list + i) ^ *(list + j);
    *(list + j) = *(list + i) ^ *(list + j);
    *(list + i) = *(list + i) ^ *(list + j);
  }
  for(int i = 0; i < size; i++){
    printf("%d ", list[i]);
  }
  printf("\n");
  partitionInt(list,partitionIndex);
  partitionInt(list+partitionIndex, (size-partitionIndex));
}

//wrapped function so sorted list is in new array instead of overwriting orginal
int* quickInt(int *list, int size){
  int *sortedList = (int *)malloc(size * sizeof(int));
  for(int i = 0; i<size; i++){
    *(sortedList+i) = *(list+i);
  }
  partitionInt(sortedList, size);
  return sortedList;
}

int main(){
  int nums[] = {0,6,4,5,2,43,1,99,87,56,43,3};
  int size = sizeof(nums)/sizeof(nums[0]);
  int *sortedNums = quickInt(nums, size);
  for(int i = 0; i < size; i++){
    printf("%d ", nums[i]);
  }
  printf("\n");
  for(int i = 0; i < size; i++){
    printf("%d ", sortedNums[i]);
  }
  free(sortedNums);
  sortedNums = NULL;
  return 0;
}
