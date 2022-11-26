/**************************************************************
* Class:  CSC-415-01 Summer 2022
* Name: Daniel Guo
* Student ID: 913290045
* GitHub Name: yiluun
* Project: Assignment 1 – Command Line Arguments
*
* File: Guo_Daniel_HW1_main.c
*
* Description: This assignment is to write a C program that accepts arguments via the command line and then displays each of those arguments to the terminal along with how many arguments there are.
*
**************************************************************/

#include <stdio.h>

int main(int argc, char* argv[]){

    // print argc which is an integer indicating the amount of arguments that were entered into the command line
    printf("There were %d arguments on the command line.\n", argc);

    	// iterate through argv which is an array of string pointers to each command line argument
	for (int i = 0; i < argc; i++) {
        printf("Argument %02d: %s\n", i, argv[i]);
    }

	return 0;
}
