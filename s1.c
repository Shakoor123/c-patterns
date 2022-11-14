/*
 ============================================================================
 Name        : s1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	// Create an integer variable that will store the number we get from the user
	int num;
	// Get and save the number the user types
	scanf("%d", &num);
	// Output the number the user typed
	printf("Your number is: %d \n", num);

	for(int i=1; i<=num;i++){
		for(int j=1; j<=num;j++){
			printf("*");
			}
		printf("\n");
	}
}
