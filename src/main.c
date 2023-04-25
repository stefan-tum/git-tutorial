#include <stdio.h>
#include "espl_lib.h"

int main(){

	int input1, input2;
	char *output;
	do{
	printf("\nPlease input an integer:\n");
	scanf("%d", &input1);

	printf("\nYour number is: ");
	output = num_to_words(input1);
	printf(output);

	printf("\nIf you wish to exit the program, please enter 0, to run again, enter an integer other than 0:\n");
	scanf("%d", &input2);

	//printf("Hello ESPL\n");
	//printf("This is a new message");
	}while(input2);
	return 0;

}
