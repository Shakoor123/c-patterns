/*
 ============================================================================
 Name        : s4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=n-(i+1);j>0;j--){
			printf(" ");
		}
		for(j=1;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
}
