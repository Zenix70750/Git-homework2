#include <stdio.h>
#include <stdlib.h>
int array[10]={1,7,5,3,9,2,10,8,4,6};
int i;
int bubbleSort(int *const v[]);                //指向非常數資料的常數指標
int main() {
	bubbleSort(array);                  //泡沫排列 
	for(i=0;i<10;i++){
	  printf("%d ",array[i]);	        //印出排列完結果 
	}  
	return 0;
}
