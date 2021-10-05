////////////////////////////////////////////////////////////////////////////////
//
//  File           : ics2305-assign1.c
//  Description    : This is the main source code for for the first assignment
//                   of ics2305 at JKUAT.  
//
//   Author        : ????
//   Last Modified : ????
//

// Include Files
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Project Includes
#include "ics2305-assign1-support.h"

//
// Functions

////////////////////////////////////////////////////////////////////////////////
//
// Function     : main
// Description  : The main function for the ics2305 assignment #1
//
// Inputs       : argc - the number of command line parameters
//                argv - the parameters
// Outputs      : 0 if successful test, -1 if failure

int main(int argc, char *argv[]) {

	// Local variables
	// NOTE: this is where you will want to add some new variables
	float f_array[20];
    int i, m_array[25];
    // ????

	// Step #1 - read in the float numbers to process
	for (i=0; i<20; i++) {
		scanf("%f", &f_array[i]);
	}

	// Step #2 - convert the input values
    ????

    // Step #3 - convert the floating point values to integers
    ????

    // Step #4 - print out the integer and floating point arrays
    ????

    // Step #4 - figure out number of evens in each array
    ????

    // Step #5 - fill up the new array, coune most frequent values 
    // NOTE ** THIS IS PROVIDED CODE, JUST CREATE FUNCTIONS AS IN ASSIGNMENT
    make_array(m_array, 25, 3, 17);
    most_values(m_array, 25, 16);
    make_array(m_array, 25, 3, 19);
    most_values(m_array, 25, 18);

    // Step #6 graph out functions
    printf("\n\n");
    graph_functions(-1.0, 1.0);
    printf("\n\n");
    graph_functions(1.3, 2.3);
    printf("\n\n");
    graph_functions(0.6, 4.3);

	// Return successfully
	return(0);
}
