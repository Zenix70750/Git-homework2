#include <stdio.h>
#include <stdlib.h>
int arrayPtr[10]={1,7,5,3,9,2,10,8,4,6};
int array[10];
int i;
int bubbleSort(const int *origin[],int copy[]);         //���V�`�Ƹ�ƪ��D�`�ƫ���             
int main() {
  for(i=0;i<10;i++){                                    //�ƻs�`�Ƹ�ƨ�}�Carray 
    array[i]=arrayPtr[i];
  }
  bubbleSort(arrayPtr,array);                           //�w�j�ƦC	                  
  return 0;
}
