#include <stdlib.h>
#include <math.h>
#include <stdio.h>
float float_even(float *list2 ,float *list5,int len){
    float holder;
    for(int i=0;i<len;i++){
        holder=exp(list2[i]);
        printf("%0.5f\n",holder);

    }
}
int make_array(int *arr, int range, int exp1, int mode){
    int i,ans, answ;
    for (i=0; i<=25; i++){
        ans=pow(exp1,i);
        answ=ans%mode;
        arr[i]=answ;
        printf("%i\n",answ);
    }
}

int main(int argc, char *argv[]) {
///
int arr2[25];
int num=25;
make_array(arr2,25,9,7);
///
float balance[] = {2,1,4,6.6};
float num2 = sizeof(balance)/sizeof(float);
float list5[(int)num2];
float_even(balance,list5,(int)num2);


}