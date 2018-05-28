#include <stdio.h>
#include <stdlib.h>
int bubbleSort(const int *const origin[],int copy[]){                      
int hold,count,pass,j;
  for(pass=1;pass<10;pass++){                     
	for(count=0;count<9;count++){
	  if(copy[count]>copy[count+1]){
		hold=copy[count+1];
		copy[count+1]=copy[count];
		copy[count]=hold;	  
	  }
	}
  }
for(j=0;j<10;j++){
  printf("%d ",copy[j]);
}		
return 0;
}

