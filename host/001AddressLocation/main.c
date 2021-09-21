/*
 * main.c
 *
 *  Created on: 21 Sep 2021
 *      Author: ricep
 */


#include <stdio.h>

int main(){
	char a1 = 'A';
	char a2 = 'B';
	char a3 = 25;

	unsigned int addressOfa1 = (unsigned int) &a1;

	printf("Address of variable a1: %p\n", &a1);
	printf("Address of variable a2: %p\n", &a2);
	printf("Address of variable a3: %p\n", &a3);
	printf("variable addressOfa1: %u\n", addressOfa1);

	return 0;
}
