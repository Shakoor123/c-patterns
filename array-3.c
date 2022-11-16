/*
 ============================================================================
 Name        : array-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,j,temp;
	puts("Enter a number \n"); /* prints !!!Hello World!!! */
	fflush(stdout);
	scanf("%d",&n);
	printf("Enter %d numbers . \n",n);
	int arr[n],sor[n];
	fflush(stdout);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("sorted numbers");
	for(i=0;i<n;i++){
	      for(j=i+1;j<n;j++){
	         if(arr[i]>arr[j]){
	            temp=arr[i];
	            arr[i]=arr[j];
	            arr[j]=temp;
	         }
	      }
	   }
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

}
