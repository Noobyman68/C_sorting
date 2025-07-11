#include "stdlib.h"
#include "string.h"

#define mergesort(a,b) _Generic((a), \
  char*: MergeChar, \
  short*: MergeShort, \
  int*: MergeInt, \
  long*: MergeLong, \
  long long*: MergeLongLong, \
  float*: MergeFloat, \
  double*: MergeDouble, \
  long double*: MergeLongDouble \
)(a,b)


//cmp will type cast and return (ptr1 - ptr2)
static void* minVal(void *ptr1, void *ptr2, int (*cmp)(void*,void*)){
  return (cmp(ptr1, ptr2) < 0 ? ptr1 : ptr2;
}
static char minChar(void *ptr1, void *ptr2){
  return *(char*)ptr1 - *(char*)ptr2;
}
static short minShort(void *ptr1, void *ptr2){
  return *(short*)ptr1 - *(short*)ptr2;
}
static int minInt(void *ptr1, void *ptr2){
  return *(int*)ptr1 - *(int*)ptr2;
}
static long minLong(void *ptr1, void *ptr2){
  return *(long*)ptr1 - *(long*)ptr2;
}
static long long mingLongLong(void *ptr1, void *ptr2){
  return *(long long*)ptr1 - *(long long*)ptr2;
}
static float minFloat(void *ptr1, void *ptr2){
  return *(float*)ptr1 - *(float*)ptr2;
}
static double minDouble(void *ptr1, void *ptr2){
  return *(double*)ptr1 - *(double*)ptr2;
}
static long double minLongDouble(void *ptr1, void *ptr2){
  return *(long double*)ptr1 - *(long double*)ptr2;
}

static char* mergeChar(char *l1, int size1, char*l2, int size2){
  int sizeT = size1 + size2;
  char *ptr = (char*)malloc(sizeT * sizeof(char));
  char *temp = (char*)malloc(sizeT-1 * sizeof(char));
  if(!size1 && !size2){
//    *ptr = *(char*)(minVal(l1,l2, minChar);
    if(*l1<*l2){
      *ptr = *l1;
      temp = merge(l1+1,size1-1,l2,size2);
    }else{
      *ptr = *l2;
      temp = merge(l1,size1,l2+1,size2-1);
    }
  }else if(!size1){
    *ptr = *l2;
    temp = merge(l1,size1,l2+1,size2-1);
  }else if(!size2){
    *ptr = *l1;
    temp = merge(l1+1,size1-1,l2,size2);
  }
  memcpy(ptr+1,temp,sizeT-1);
  free(temp);
  return ptr;
//if no conditions met, no reccursive call stopping loop
}

//takes in 2 sorted arrays and returns 1 combined sorted array
static char* mergeChar(char *l1, int size1, char *l2, int size2){
char *l3 = (char *)malloc((size1+size2) * sizeof(char));
  char *endL1 = l1+size1;
  char *endL2 = l2+size2;
  //add lower value at current posistion to l3 until either l1 or l3 is iterated through
  while(l1 < endL1 && l2 < endL2){
    if(*l1<*l2){
      *l3 = *l1;
      l1++;
    }else{
      *l3 = *l2;
      l2++;
    }
    l3++;
  }
  //add last of l1
  while(l1 < endL1){
    *l3 = *l1;
    l3++;
    l1++;
  }
  //add last of l2
  while(l2 < endL2){
    *l3 = *l2;
    l3++;
    l2++;
  }
  return l3 - (size1+size2);
}
static short* mergeShort(short *l1, int size1, short *l2, int size2){
  short *l3 = (short *)malloc((size1+size2) * sizeof(short));
  short *endL1 = l1 + size1;
  short *endL2 = l2 + size2;
  //add lower value at current posistion to l3 until either l1 or l3 is iterated through
  while(l1 < endL1 && l2 < endL2){
    if(*l1<*l2){
      *l3 = *l1;
      l1++;
    }else{
      *l3 = *l2;
      l2++;
    }
    l3++;
  }
  //add last of l1
  while(l1 < endL1){
    *l3 = *l1;
    l3++;
    l1++;
  }
  //add last of l2
  while(l2 < endL2){
    *l3 = *l2;
    l3++;
    l2++;
  }
  return l3 - (size1+size2);
}

static int* mergeInt(int *l1,int size1, int *l2,int size2){
  int *l3 = (int *)malloc((size1+size2) * sizeof(int));
  int *endL1 = l1+size1;
  int *endL2 = l2+size2;
  //add lower value at current posistion to l3 until either l1 or l3 is iterated through
  while(l1 < endL1 && l2 < endL2){
    if(*l1<*l2){
      *l3 = *l1;
      l1++;
    }else{
      *l3 = *l2;
      l2++;
    }
    l3++;
    }
  //add last of l1
  while(l1 < endL1){
    *l3 = *l1;
    l3++;
    l1++;
  }
  //add last of l2
  while(l2 < endL2){
    *l3 = *l2;
    l3++;
    l2++;
  }
  return l3 - (size1+size2);
}
static long* mergeLong(long *l1, int size1, long *l2, int size2){
  long *l3 = (long *)malloc((size1+size2) * sizeof(long));
  long *endL1 = l1+size1;
  long *endL2 = l2+size2;
  //add lower value at current posistion to l3 until either l1 or l3 is iterated through
  while(l1 < endL1 && l2 < endL2){
    if(*l1<*l2){
      *l3 = *l1;
      l1++;
    }else{
      *l3 = *l2;
      l2++;
    }
    l3++;
  }
  //add last of l1
  while(l1 < endL1){
    *l3 = *l1;
    l3++;
    l1++;
  }
  //add last of l2
  while(l2 < endL2){
    *l3 = *l2;
    l3++;
    l2++;
  }
  return l3 - (size1+size2);
}
static long long* mergeLongLong(long long *l1, int size1, long long *l2, int size2){
  long long *l3 = (long long *)malloc((size1+size2) * sizeof(long long));
  long long *endL1 = l1+size1;
  long long *endL2 = l2+size2;
  //add lower value at current posistion to l3 until either l1 or l3 is iterated through
  while(l1 < endL1 && l2 < endL2){
    if(*l1<*l2){
      *l3 = *l1;
      l1++;
    }else{
      *l3 = *l2;
      l2++;
    }
    l3++;
  }
  //add last of l1
  while(l1 < endL1){
    *l3 = *l1;
    l3++;
    l1++;
  }
  //add last of l2
  while(l2 < endL2){
    *l3 = *l2;
    l3++;
    l2++;
  }
  return l3 - (size1+size2);
}
static float* mergeFloat(float *l1, int size1, float *l2, int size2){
  float *l3 = (float *)malloc((size1+size2) * sizeof(float));
  float *endL1 = l1+size1;
  float *endL2 = l2+size2;
  //add lower value at current posistion to l3 until either l1 or l3 is iterated through
  while(l1 < endL1 && l2 < endL2){
    if(*l1<*l2){
      *l3 = *l1;
      l1++;
    }else{
      *l3 = *l2;
      l2++;
    }
    l3++;
  }
  //add last of l1
  while(l1 < endL1){
    *l3 = *l1;
    l3++;
    l1++;
  }
  //add last of l2
  while(l2 < endL2){
    *l3 = *l2;
    l3++;
    l2++;
  }
  return l3 - (size1+size2);
}
static double* mergeDouble(double *l1, int size1, double *l2, int size2){
  double *l3 = (double *)malloc((size2+size2) * sizeof(double));
  double *endL1 = l1+size1;
  double *endL2 = l2+size2;
  //add lower value at current posistion to l3 until either l1 or l3 is iterated through
  while(l1 < endL1 && l2 < endL2){
    if(*l1<*l2){
      *l3 = *l1;
      l1++;
    }else{
      *l3 = *l2;
      l2++;
    }
    l3++;
  }
  //add last of l1
  while(l1 < endL1){
    *l3 = *l1;
    l3++;
    l1++;
  }
  //add last of l2
  while(l2 < endL2){
    *l3 = *l2;
    l3++;
    l2++;
  }
  return l3 - (size1+size2);
}
static long double* mergeLongDouble(long double *l1, int size1, long double *l2, int size2){
  long double *l3 = (long double *)malloc((size1+size2) * sizeof(long double));
  long double *endL1 = l1+size1;
  long double *endL2 = l2+size2;
  //add lower value at current posistion to l3 until either l1 or l3 is iterated through
  while(l1 < endL1 && l2 < endL2){
    if(*l1<*l2){
      *l3 = *l1;
      l1++;
    }else{
      *l3 = *l2;
      l2++;
    }
    l3++;
  }
  //add last of l1
  while(l1 < endL1){
    *l3 = *l1;
    l3++;
    l1++;
  }
  //add last of l2
  while(l2 < endL2){
    *l3 = *l2;
    l3++;
    l2++;
  }
  return l3 - (size1+size2);
}
// recursive function that takes in unsorted array and returns pointer to sorted one
char* MergeChar(char *list, int size){
  // 1 byte
  int typeSize = sizeof(char);
  if(size == 1){
    return list;
  }

  int sizeL = size/2;
  int sizeR = size - sizeL;
  char *listL = (char *)malloc(sizeL * typeSize);
  char *listR = (char *)malloc(sizeR * typeSize);

  memcpy(listL, &list[0], sizeL * typeSize);
  memcpy(listR, &list[sizeL], sizeR * typeSize);

  listL = MergeChar(listL, sizeL);
  listR = MergeChar(listR, sizeR);

  char *mergedList = mergeChar(listL, sizeL, listR, sizeR);
  free(listL);
  free(listR);
  //not needed since they go out of scope but good practice
  listL = NULL;
  listR = NULL;
  return mergedList;
}
short* MergeShort(short *list, int size){
  // 2 bytes
  int typeSize = sizeof(short);
  if(size == 1){
    return list;
  }

  int sizeL = size/2;
  int sizeR = size - sizeL;

  short *listL = (short *)malloc(sizeL * typeSize);
  short *listR = (short *)malloc(sizeR * typeSize);

  memcpy(listL, &list[0], sizeL * typeSize);
  memcpy(listR, &list[sizeL], sizeR * typeSize);

  listL = MergeShort(listL, sizeL);
  listR = MergeShort(listR, sizeR);

  short *mergedList = mergeShort(listL, sizeL, listR, sizeR);
  free(listL);
  free(listR);
  //not needed since they go out of scope but good practice
  listL = NULL;
  listR = NULL;
  return mergedList;
}
int* MergeInt(int *list, int size){
  // 4 bytes
  int typeSize = sizeof(int);
  if(size == 1){
    return list;
  }

  int sizeL = size/2;
  int sizeR = size - sizeL;

  int *listL = (int *)malloc(sizeL * typeSize);
  int *listR = (int *)malloc(sizeR * typeSize);

  memcpy(listL, &list[0], sizeL * typeSize);
  memcpy(listR, &list[sizeL], sizeR * typeSize);

  listL = MergeInt(listL, sizeL);
  listR = MergeInt(listR, sizeR);

  int *mergedList = mergeInt(listL, sizeL, listR, sizeR);
  free(listL);
  free(listR);
  //not needed since they go out of scope but good practice
  listL = NULL;
  listR = NULL;
  return mergedList;
}
long* MergeLong(long *list, int size){
  // 4-8 bytes
  int typeSize = sizeof(long);
  if(size == 1){
    return list;
  }

  int sizeL = size/2;
  int sizeR = size - sizeL;

  long *listL = (long *)malloc(sizeL * typeSize);
  long *listR = (long *)malloc(sizeR * typeSize);

  memcpy(listL, &list[0], sizeL * typeSize);
  memcpy(listR, &list[sizeL], sizeR * typeSize);

  listL = MergeLong(listL, sizeL);
  listR = MergeLong(listR, sizeR);

  long *mergedList = mergeLong(listL, sizeL, listR, sizeR);
  free(listL);
  free(listR);
  //not needed since they go out of scope but good practice
  listL = NULL;
  listR = NULL;
  return mergedList;
}
long long* MergeLongLong(long long *list, int size){
  // 8 bytes
  int typeSize = sizeof(long long);
  if(size == 1){
    return list;
  }

  int sizeL = size/2;
  int sizeR = size - sizeL;

  long long *listL = (long long *)malloc(sizeL * typeSize);
  long long *listR = (long long *)malloc(sizeR * typeSize);

  memcpy(listL, &list[0], sizeL * typeSize);
  memcpy(listR, &list[sizeL], sizeR * typeSize);

  listL = MergeLongLong(listL, sizeL);
  listR = MergeLongLong(listR, sizeR);

  long long *mergedList = mergeLongLong(listL, sizeL, listR, sizeR);
  free(listL);
  free(listR);
  //not needed since they go out of scope but good practice
  listL = NULL;
  listR = NULL;
  return mergedList;
}
float* MergeFloat(float *list, int size){
  // 4 bytes
  int typeSize = sizeof(float);
  if(size == 1){
    return list;
  }

  int sizeL = size/2;
  int sizeR = size - sizeL;

  float *listL = (float *)malloc(sizeL * typeSize);
  float *listR = (float *)malloc(sizeR * typeSize);

  memcpy(listL, &list[0], sizeL * typeSize);
  memcpy(listR, &list[sizeL], sizeR * typeSize);

  listL = MergeFloat(listL, sizeL);
  listR = MergeFloat(listR, sizeR);

  float *mergedList = mergeFloat(listL, sizeL, listR, sizeR);
  free(listL);
  free(listR);
  //not needed since they go out of scope but good practice
  listL = NULL;
  listR = NULL;
  return mergedList;
}
double* MergeDouble(double *list, int size){
  // 8 bytes
  int typeSize = sizeof(double);
  if(size == 1){
    return list;
  }

  int sizeL = size/2;
  int sizeR = size - sizeL;

  double *listL = (double *)malloc(sizeL * typeSize);
  double *listR = (double *)malloc(sizeR * typeSize);

  memcpy(listL, &list[0], sizeL * typeSize);
  memcpy(listR, &list[sizeL], sizeR * typeSize);

  listL = MergeDouble(listL, sizeL);
  listR = MergeDouble(listR, sizeR);

  double *mergedList = mergeDouble(listL, sizeL, listR, sizeR);
  free(listL);
  free(listR);
  //not needed since they go out of scope but good practice
  listL = NULL;
  listR = NULL;
  return mergedList;
}
long double* MergeLongDouble(long double *list, int size){
  // 16 bytes
  int typeSize = sizeof(long double);
  if(size == 1){
    return list;
  }

  int sizeL = size/2;
  int sizeR = size - sizeL;

  long double *listL = (long double *)malloc(sizeL * typeSize);
  long double *listR = (long double *)malloc(sizeR * typeSize);

  memcpy(listL, &list[0], sizeL * typeSize);
  memcpy(listR, &list[sizeL], sizeR * typeSize);

  listL = MergeLongDouble(listL, sizeL);
  listR = MergeLongDouble(listR, sizeR);

  long double *mergedList = mergeLongDouble(listL, sizeL, listR, sizeR);
  free(listL);
  free(listR);
  //not needed since they go out of scope but good practice
  listL = NULL;
  listR = NULL;
  return mergedList;
}
