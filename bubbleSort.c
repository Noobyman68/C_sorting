#include "stdlib.h"
#include "stdio.h"

char* bubbleChar(char *list, int size){
  char* sortedList = (char *)malloc(size * sizeof(char));
  for(int i = 0; i<size; i++){
    char *current = sortedList;
    char *next = ++current;
    current--;
    while(current<sortedList+size){
      if(*current>*next){
      //switch current and next
      *current = *current^*next;
      *next = *current^*next;
      *current = *current^*next;
    }
    current++;
    next++;
    }
  }
  return sortedList;
}

int* bubbleInt(int *list, int size){
  int *sortedList = (int *)malloc(size * sizeof(int));
  for(int i = 0; i<size; i++){
    int *current = list;
    int *next = ++current;
    current--;
    while(current<list+size){
      if(*current>*next){
      //switch current and next
      *current = *current^*next;
      *next = *current^*next;
      *current = *current^*next;
    }
    current++;
    next++;
    }
  }
  return sortedList;
}

int main(){
  int nums[] = {0,3,6,7,87,889,321,3,2,0,43,76,99,5};
  int size = sizeof(nums)/sizeof(nums[0]);
  int *sortedNums = bubbleInt(nums, size);
  for(int i = 0; i < size; i++){
    printf("%d ", nums[i]);
  }
  printf("\n");
  for(int i = 0; i < size; i++){
    printf("%d ", sortedNums[i]);
  }

  return 0;
}