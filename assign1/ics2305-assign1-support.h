#ifndef ICS2305_A1SUPPORT_INCLUDED
#define ICS2305_A1SUPPORT_INCLUDED
#include <stdlib.h>
#include <stdlib.h>


//
// Functional Prototypes
// This function prints out the array of floating point values
// int float_display_array(float num){
// 	printf("Entered float: %f\n", num);
// }
	

// int integer_display_array(int num){
// 	// This function prints out the array of integer values
// 	printf("Entered float: %i\n", num);

// }
	

// int float_evens(????);
// 	// Return the number of even numbers in the array (float version)

// int integer_evens(????);
// 	// Return the number of even numbers in the array (int version)

// int make_array(????);
// 	// Make an exponentiated set of values

// int most_values(????);
// 	// Print out the values with the most occurences in array

// int graph_functions(????);
// 	// Print out the functions cos(x)+d1 and tan(x)*e1

void float_disp(float *list2 ,int len){

    // float top;
    for(int i=0;i<len;i++){
        // printf("%i/n", len);
        // top=num[i];
        printf("%f \n",list2[i]);   
        // printf("%i/n",top);

    }
}
void covfloat(float *arrlist,int arrsize){
	for (size_t i = 0; i < arrsize; i++)
	{
		if(arrlist[i]<=15){
			arrlist[i]*=pow(M_PI,2);		
		}
        else{
            arrlist[i]=abs(arrlist[i]);
        }
        printf("%f",arrlist[i]);
		/* code */
	}
	

}
void int_disp(int *listnum2 ,int len){
    for(int i=0;i<len;i++){
        printf("%i \n",listnum2[i]);   
        // printf("%i/n",top);
    }
    }
int converttoint(float *listnum2 ,int *listnum3,int len){
    float num;
    for(int i=0;i<len;i++){
        num=listnum2[i];
        listnum3[i]=(int)num;
        printf("conveted num %i \n",listnum3[i]);   
        //
    }
    }
int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}
int int_even(int *listnum2 ,int len){
    int newarr[len];
    int cout=0;
    for(int i=0;i<len;i++){
        if (listnum2[i]%2==0){
            printf("%i \n",listnum2[i]); 
            newarr[cout]=listnum2[i];
            cout=cout+1;
        }    
        // printf("%i/n",top);
    }
    // return newarr;
}
float float_even(float *list2 ,int len){
    int cout=0;
    float newarrf[len];
    // float top;
    for(int i=0;i<len;i++){
        // printf("%f \n",list2[i]);
        if (i%2==0){
            printf("%f \n",list2[i]); 
            newarrf[cout]=list2[i];
            cout=cout+1;
        }   
    }
    // return newarr;
}
	
#endif // ICS2305_A1SUPPORT_INCLUDED
