#include <stdio.h>
#include <stdlib.h>
int bubbleSort(int v[]){                      //ªwªj±Æ¦C
	int hold,count,pass;
	for(pass=1;pass<10;pass++){                     
	  for(count=0;count<9;count++){
	    if(v[count]>v[count+1]){
		  hold=v[count+1];
		  v[count+1]=v[count];
		  v[count]=hold;
		}
	  }
	}		
  return 0;
}
