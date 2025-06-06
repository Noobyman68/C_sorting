#include "stdlib.h"

#define bubblesort(a,b) _Generic((a), \
  char*: bubbleChar, \
  short*: bubbleShort, \
  int*: bubbleInt, \
  long*: bubbleLong, \
  long long*: bubbleLongLong, \
  float*: bubbleFloat, \
  double*: bubbleDouble, \
  long double*: bubbleLongDouble \
)(a,b)

char* bubbleChar(char *list, int size){
  char *sortedList = (char *)malloc(size * sizeof(char));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  char current;
  char next;
  for(int i = 0; i<size; i++){
    for(int k = 0; k < size - 1; k++){
      current = *(sortedList+k);
      next = *(sortedList+k+1);
      if(current>next){
        //switch current and next
        *(sortedList+k) = next;
        *(sortedList+k+1) = current;
      }
    }
  }
  return sortedList;
}
short* bubbleShort(char *list, int size){
  short *sortedList = (short *)malloc(size * sizeof(short));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  short current;
  short next;
  for(int i = 0; i<size; i++){
    for(int k = 0; k < size - 1; k++){
      current = *(sortedList+k);
      next = *(sortedList+k+1);
      if(current>next){
        //switch current and next
        *(sortedList+k) = next;
        *(sortedList+k+1) = current;
      }
    }
  }
  return sortedList;
}
int* bubbleInt(int *list, int size){
  int *sortedList = (int *)malloc(size * sizeof(int));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  int current;
  int next;
  for(int i = 0; i<size; i++){
    for(int k = 0; k < size - 1; k++){
      current = *(sortedList+k);
      next = *(sortedList+k+1);
      if(current>next){
        //switch current and next
        *(sortedList+k) = next;
        *(sortedList+k+1) = current;
      }
    }
  }
  return sortedList;
}
long* bubbleLong(long *list, int size){
  long *sortedList = (long *)malloc(size * sizeof(long));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  long current;
  long next;
  for(int i = 0; i<size; i++){
    for(int k = 0; k < size - 1; k++){
      current = *(sortedList+k);
      next = *(sortedList+k+1);
      if(current>next){
        //switch current and next
        *(sortedList+k) = next;
        *(sortedList+k+1) = current;
      }
    }
  }
  return sortedList;
}
long long* bubbleLongLong(long long *list, int size){
  long long *sortedList = (long long *)malloc(size * sizeof(long long));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  long long current;
  long long next;
  for(int i = 0; i<size; i++){
    for(int k = 0; k < size - 1; k++){
      current = *(sortedList+k);
      next = *(sortedList+k+1);
      if(current>next){
        //switch current and next
        *(sortedList+k) = next;
        *(sortedList+k+1) = current;
      }
    }
  }
  return sortedList;
}
float* bubbleFloat(float *list, int size){
  float *sortedList = (float *)malloc(size * sizeof(float));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  float current;
  float next;
  for(int i = 0; i<size; i++){
    for(int k = 0; k < size - 1; k++){
      current = *(sortedList+k);
      next = *(sortedList+k+1);
      if(current>next){
        //switch current and next
        *(sortedList+k) = next;
        *(sortedList+k+1) = current;
      }
    }
  }
  return sortedList;
}
double* bubbleDouble(double *list, int size){
  double *sortedList = (double *)malloc(size * sizeof(double));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  double current;
  double next;
  for(int i = 0; i<size; i++){
    for(int k = 0; k < size - 1; k++){
      current = *(sortedList+k);
      next = *(sortedList+k+1);
      if(current>next){
        //switch current and next
        *(sortedList+k) = next;
        *(sortedList+k+1) = current;
      }
    }
  }
  return sortedList;
}
long double* bubbleLongDouble(long double *list, int size){
  long double *sortedList = (long double *)malloc(size * sizeof(long double));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  long double current;
  long double next;
  for(int i = 0; i<size; i++){
    for(int k = 0; k < size - 1; k++){
      current = *(sortedList+k);
      next = *(sortedList+k+1);
      if(current>next){
        //switch current and next
        *(sortedList+k) = next;
        *(sortedList+k+1) = current;
      }
    }
  }
  return sortedList;
}
