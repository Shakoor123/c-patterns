/*
 ============================================================================
 Name        : s6.c
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
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==n){
				printf(" ");
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(j=1;j<=(n*2)+1;j++){
		printf("*");
	}
	printf("\n");
	for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				if(j==n){
					printf(" ");
					printf("*");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
}
