/*
 ============================================================================
 Name        : s9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n=4,i,j;
	for(i=0;i<n;i++){
		for(j=n-i;j>0;j--){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		for(j=n-i;j>1;j--){
			printf(" ");
		}
		for(j=n-i;j>0;j--){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}


	for(i=1;i<n;i++){
			for(j=n-i;j>0;j--){
				printf("*");
			}
			for(j=0;j<=i;j++){
				printf(" ");
			}
			for(j=1;j<=i;j++){
				printf(" ");
			}
			for(j=n-i;j>0;j--){
							printf("*");
						}
			printf("\n");
		}
		for(i=0;i<n;i++){
			for(j=0;j<=i;j++){
				printf(" ");
			}
			for(j=n-i;j>1;j--){
				printf("*");
			}
			for(j=n-i;j>0;j--){
				printf("*");
			}
			for(j=0;j<=i;j++){
				printf(" ");
			}
			printf("\n");
		}

}
//    *
//   ***
//  *****
// *******
//*       *
//**     **
//***   ***
//**** ****
//***   ***
//**     **
//*       *
// *******
//  *****
//   ***
//    *
