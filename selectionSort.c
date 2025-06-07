#include "stdlib.h"
#include "stdio.h"

#define selectionsort(a,b) _Generic((a), \
  char*: selectionChar, \
  short*: selectionShort, \
  int*: selectionInt, \
  long*: selectionLong, \
  long long*: selectionLongLong, \
  float*: selectionFloat, \
  double*: selectionDouble, \
  long double*: selectionLongDouble \
)(a,b)


char* selectionChar(char *list, int size){
  char* sortedList = (char *)malloc(size * sizeof(char));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  for(int i = 0; i < size; i++){
    int lowest = i;
    for(int j = i; j < size; j++){
      if(*(sortedList + j) < *(sortedList + lowest)){
        lowest = j;
      }
    }
    char temp = *(sortedList+i); 
    *(sortedList + i) = *(sortedList + lowest);
    *(sortedList + lowest) = temp;
  }
  return sortedList;
}
short* selectionShort(short *list, int size){
  short* sortedList = (short *)malloc(size * sizeof(short));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  for(int i = 0; i < size; i++){
    int lowest = i;
    for(int j = i; j < size; j++){
      if(*(sortedList + j) < *(sortedList + lowest)){
        lowest = j;
      }
    }
    short temp = *(sortedList+i); 
    *(sortedList + i) = *(sortedList + lowest);
    *(sortedList + lowest) = temp;
  }
  return sortedList;
}
int* selectionInt(int *list, int size){
  int* sortedList = (int *)malloc(size * sizeof(int));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  for(int i = 0; i < size; i++){
    int lowest = i;
    for(int j = i; j < size; j++){
      if(*(sortedList + j) < *(sortedList + lowest)){
        lowest = j;
      }
    }
    int temp = *(sortedList+i); 
    *(sortedList + i) = *(sortedList + lowest);
    *(sortedList + lowest) = temp;
  }
  return sortedList;
}
long* selectionLong(long *list, int size){
  long* sortedList = (long *)malloc(size * sizeof(long));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  for(int i = 0; i < size; i++){
    int lowest = i;
    for(int j = i; j < size; j++){
      if(*(sortedList + j) < *(sortedList + lowest)){
        lowest = j;
      }
    }
    long temp = *(sortedList+i); 
    *(sortedList + i) = *(sortedList + lowest);
    *(sortedList + lowest) = temp;
  }
  return sortedList;
}
long long* selectionLongLong(long long *list, int size){
  long long* sortedList = (long long *)malloc(size * sizeof(long long));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  for(int i = 0; i < size; i++){
    int lowest = i;
    for(int j = i; j < size; j++){
      if(*(sortedList + j) < *(sortedList + lowest)){
        lowest = j;
      }
    }
    long long temp = *(sortedList+i); 
    *(sortedList + i) = *(sortedList + lowest);
    *(sortedList + lowest) = temp;
  }
  return sortedList;
}
float* selectionFloat(float *list, int size){
  float* sortedList = (float *)malloc(size * sizeof(float));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  for(int i = 0; i < size; i++){
    int lowest = i;
    for(int j = i; j < size; j++){
      if(*(sortedList + j) < *(sortedList + lowest)){
        lowest = j;
      }
    }
    float temp = *(sortedList+i); 
    *(sortedList + i) = *(sortedList + lowest);
    *(sortedList + lowest) = temp;
  }
  return sortedList;
}
double* selectionDouble(double *list, int size){
  double* sortedList = (double *)malloc(size * sizeof(double));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  for(int i = 0; i < size; i++){
    int lowest = i;
    for(int j = i; j < size; j++){
      if(*(sortedList + j) < *(sortedList + lowest)){
        lowest = j;
      }
    }
    double temp = *(sortedList+i); 
    *(sortedList + i) = *(sortedList + lowest);
    *(sortedList + lowest) = temp;
  }
  return sortedList;
}
long double* selectionLongDouble(long double *list, int size){
  long double* sortedList = (long double *)malloc(size * sizeof(long double));
  for(int i = 0; i < size; i++){
    //broken down way of saying list[i]
    *(sortedList+i) = *(list+i);
  }
  for(int i = 0; i < size; i++){
    int lowest = i;
    for(int j = i; j < size; j++){
      if(*(sortedList + j) < *(sortedList + lowest)){
        lowest = j;
      }
    }
    long double temp = *(sortedList+i); 
    *(sortedList + i) = *(sortedList + lowest);
    *(sortedList + lowest) = temp;
  }
  return sortedList;
}

