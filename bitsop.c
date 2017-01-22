#include "bitsop.h"
#include <stdio.h>

void print_bits(int num){
	int i = 31;
	for(; i >= 0; i--){
		if(IS_BIT_SET(num, i))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}


int
main(int argc, char **argv){
	int num = 7;
	printf(" num = %d, bit form : ", num);
	print_bits(num);
	printf("\n");
	TOGGLE_BIT(num, 10);
	printf(" After toggling 10th bit from right : ");
	print_bits(num);
	printf("\n");
	TOGGLE_BIT(num, 12);
	printf(" After toggling 12th bit from right : ");
	print_bits(num);
	printf("\n");
	printf(" num = %d", num);
	return 0;
}
