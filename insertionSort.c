#include "stdlib.h"
#include "stdbool.h"
#include "stdio.h"


int* insertionInt(int *list, int size){
  int *sortedList = (int *)malloc(size * sizeof(int));

  for(int i = 0; i < size; i++){
    int last = 0;
    int current = 0;
    bool condition = false;
    for(int j = 0; j < i+1;j++){
      if(condition){
          last = current;
          current = *(sortedList + j);
          *(sortedList + j) = last;
      }
      else if(*(list + i) < *(sortedList + j)){
        current = *(sortedList + j);
        *(sortedList + j) = *(list + i);
        condition = true;
      }
    }
    if(!condition){
      *(sortedList + i) = *(list + i);
    }
  }
  return sortedList;
}

int main(){
  int nums[] = {0,4,7,454,64,767,75,6,4,6,53,0,0,1,3,2,4};
  int size = sizeof(nums)/sizeof(nums[0]);
  int *sortedNums = insertionInt(nums, size);
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