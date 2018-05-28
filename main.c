#include <stdio.h>
#include <stdlib.h>
int arrayPtr[10]={1,7,5,3,9,2,10,8,4,6};
int array[10];
int i;
int bubbleSort(const int *origin[],int copy[]);         //指向常數資料的非常數指標             
int main() {
  for(i=0;i<10;i++){                                    //複製常數資料到陣列array 
    array[i]=arrayPtr[i];
  }
  bubbleSort(arrayPtr,array);                           //泡沫排列	                  
  return 0;
}
