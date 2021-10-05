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
    int arrsize = sizeof(f_array)/sizeof(float);
    int intarry[arrsize];
    //step2
    covfloat(f_array,20);
    // Step #3 - convert the floating point values to integers
    
    converttoint(f_array,intarry,arrsize);
    //print even
    int intlenth2=sizeof(intarry)/sizeof(int);
    int_even(intarry,intlenth2);

      //dipay mode 8
     int a[] = {0,6,7,2,7};
    int n = sizeof(intarry)/sizeof(int);
   printf("Mode = %d ", mode(a,n));


    return 0;
}
