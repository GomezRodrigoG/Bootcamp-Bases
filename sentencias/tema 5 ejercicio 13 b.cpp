#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
	
	    for(int i = 0 ;i <7;i++)
	{
		for(int k = 0 ;k <6 - i;k++)
		{
		    printf(" ");	
		}
		
		for(int k = 0 ;k <i*2+1;k++)
		{
		    printf("*");	
		}
	   
		    printf("\n");	
	}
	
	
	return 0 ;
}
