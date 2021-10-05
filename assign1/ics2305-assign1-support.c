#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "ics2305-assign1-support.h"

int main(int argc, char *argv[]) {
    float f_array[20];
    int i, m_array[25];

    for (i=0; i<20; i++) {
		scanf("%f", &f_array[i]);
	}
    // Step #3 - convert the floating point values to integers
    int arrsize = sizeof(f_array)/sizeof(float);
    int intarry[arrsize];
    converttoint(f_array,intarry,arrsize);


    return 0;
}
