#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void float_disp(float *list2 ,int len){

    // float top;
    for(int i=0;i<len;i++){
        // printf("%i/n", len);
        // top=num[i];
        printf("%f \n",list2[i]);   
        // printf("%i/n",top);

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
        if (i%2!=0){
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

int main(int argc ,char *argv[]){
    float num=12.00;
    printf("Entered Name: %f\n", num);
    //display float array
    float balance[] = {10.1,2.2,4.4,6.6};
    float num2 = sizeof(balance)/sizeof(float);
    printf("%f\n",num2);
    float_disp(balance,num2);
    ///convert to int
    int cnum2=(int)num2;
    int intarry[cnum2];
    converttoint(balance,intarry,num2);

    //display int
    int numbers[]={10,3,4,5,6};
    int intlenth=sizeof(numbers)/sizeof(int);
    printf("%i\n",intlenth);
    int_disp(numbers,intlenth);
    //dipay mode
   int a[] = {0,6,7,2,7};
    int n = sizeof(numbers)/sizeof(int);
   printf("Mode = %d ", mode(a,n));
   //return even
    int numbers2[]={10,3,4,5,6};
    int intlenth2=sizeof(numbers2)/sizeof(int);
    int_even(numbers2,intlenth2);
    //return even using pointers
    // global float newarrf[num2];
    float_even(balance,num2);
    return 0;
}