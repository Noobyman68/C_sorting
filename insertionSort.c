#include "stdlib.h"
#include "stdbool.h"
#include "stdio.h"

#define insertionsort(a,b) _Generic((a), \
    char*: insertionChar, \
    short*: insertionShort, \
    int*: insertionInt, \
    long*: insertionLong, \
    long long*: insertionLongLong, \
    float*: insertionFloat, \
    double*: insertionDouble, \
    long double*: insertionLongDouble \
    )(a,b)

char* insertionChar(char *list, int size){
  char *sortedList = (char *)malloc(size * sizeof(char));
  for(int i = 0; i < size; i++){
    char last;
    char current;
    bool condition = false;
    for(int j = 0; j < i + 1;j++){
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
short* insertionShort(short *list, int size){
  short *sortedList = (short *)malloc(size * sizeof(short));
  for(int i = 0; i < size; i++){
    short last;
    short current;
    bool condition = false;
    for(int j = 0; j < i + 1;j++){
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
int* insertionInt(int *list, int size){
  int *sortedList = (int *)malloc(size * sizeof(int));
  for(int i = 0; i < size; i++){
    int last;
    int current;
    bool condition = false;
    for(int j = 0; j < i + 1;j++){
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
long* insertionLong(long *list, int size){
  
  long *sortedList = (long *)malloc(size * sizeof(long));
  for(int i = 0; i < size; i++){
    long last;
    long current;
    bool condition = false;
    for(int j = 0; j < i + 1;j++){
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
long long* insertionLongLong(long long *list, int num){
  long long *sortedList = (long long *)malloc(size * sizeof(long long));
  for(int i = 0; i < size; i++){
    long long last;
    long long current;
    bool condition = false;
    for(int j = 0; j < i + 1;j++){
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
float* insertionFloat(float *list, int size){
  float *sortedList = (float *)malloc(size * sizeof(float));
  for(int i = 0; i < size; i++){
    float last;
    float current;
    bool condition = false;
    for(int j = 0; j < i + 1;j++){
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
double* insertionDouble(double *list, int size){
  double *sortedList = (double *)malloc(size * sizeof(double));
  for(int i = 0; i < size; i++){
    double last;
    double current;
    bool condition = false;
    for(int j = 0; j < i + 1;j++){
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
long double* insertionLongDouble(long double *list,int size){
  long double *sortedList = (long double *)malloc(size * sizeof(long double));
  for(int i = 0; i < size; i++){
    long double last;
    long double current;
    bool condition = false;
    for(int j = 0; j < i + 1;j++){
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

