/*
 ============================================================================
 Name        : array-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i,n;

	printf("!!!Enter a number!! \n");
	fflush( stdout );
	scanf("%d",&n);
	int arr[n];
	printf("!!!Enter %d number!! \n",n);
    fflush( stdout );
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Entered numbers is = ");
	for(i=0;i<n;i++){
		printf("%d,",arr[i]);
	}
	return EXIT_SUCCESS;
}
