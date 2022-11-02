#include <stdio.h> 

void main() 
{ 
    int i, toplam=0; 
	
    for(i=1; i<=999; i++) 
	{ 
       if(i%3==0 || i%5==0) 
	   {
           toplam += i;
       } 
    } 
    printf("Toplam = %d", toplam); 
} 