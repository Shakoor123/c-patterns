/*
 ============================================================================
 Name        : s5.c
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
		for(j=1;j<=i;j++){
			if(n==i){
				printf("*");
			}else if(j==1 || j==i){
				printf("*");
			}else{
				printf(" ");
			}

		}
		printf("\n");
	}
}
