/*
 ============================================================================
 Name        : array-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,s,result;
	puts("Enter a number \n");
	fflush(stdout);
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements \n");
	fflush(stdout);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("Enter a number to search \n");
	fflush(stdout);
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(s==arr[i]){
			result=i+1;
		}
	}
	printf("searched element in %d",result);
}
