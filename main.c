#include <stdio.h>
#include <stdlib.h>
int array[10]={1,7,5,3,9,2,10,8,4,6};
int i;
int bubbleSort(int v[]);                //���V�D�`�Ƹ�ƪ��D�`�ƫ���
int main() {
	bubbleSort(array);                  //�w�j�ƦC 
	for(i=0;i<10;i++){
	  printf("%d ",array[i]);	        //�L�X�ƦC�����G 
	}  
	return 0;
}
