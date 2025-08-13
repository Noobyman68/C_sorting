#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "stdbool.h"


static void swap(int *list1, int index1, int *list2, int index2){
  list1[index1] = list1[index1] ^ list2[index2];
  list2[index2] = list1[index1] ^ list2[index2];
  list1[index1] = list1[index1] ^ list2[index2];
}


int* partitionInt(int *list, int size){
  if(size <= 1){
    return list;
  }
  int left = 0; 
  int mid = 0;  
  int median = list[size/2];

  int Lcount = 0;
  int Mcount = 0;
  int Rcount = 0;

  for(int i = 0; i < size; i++){
    if(list[i] < median){
      Lcount++;
    }else if(list[i] == median){
      Mcount++;
    }else{
      Rcount++;
    }
  }

  int right = Rcount-1;

  int *Left = malloc(Lcount * sizeof(int));
  int *Mid = malloc(Mcount * sizeof(int));
  int *Right = malloc(Rcount * sizeof(int));

  memcpy(Left, list, Lcount);
  memcpy(Mid, list+Lcount, Mcount);
  memcpy(Right, list+Rcount, Rcount);

  while(true){
    while(Left[left] < median && left < Lcount){
      left++;
    }
    while(Right[right] > median && right >= 0){
      right--;
    }
    //even if an out of range value is read, it should never get used
    //if all values in left have been checked then there will be no value for right to switch with either
    if(left >= Lcount){
      break;
    }
    
    if(Left[left] == median){
      swap(Left, left, Mid, mid);
      mid++;
      continue;
    }else if(Right[right] == median){
      swap(Right, right, Mid, mid);
      mid++;
      continue;
    }
    swap(Left, left, Right, right);
  }
  left -= Lcount;
  right -= Rcount;
  mid -= Mcount;

  int *sorted = malloc(size*sizeof(int));

  memcpy(sorted, partitionInt(Left, Rcount), Lcount);
  free(Left);
  
  memcpy(sorted+Lcount, Mid, Mcount);
  free(Mid);

  memcpy(sorted, partitionInt(Right, Rcount), Rcount);
  free(Right);

  return sorted;
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
