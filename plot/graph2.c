#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void graph_functions(double x,double x2){
    double xarr[20];
    double yarr[20];
    double backx=x;
    double backx2=x2;
    int count3=0;
    for(x;x<x2;x+0.1){
        printf("%d \n",x);
        xarr[count3]=x;
        yarr[count3]=cos(x)+1;
        count3=count3+1;
        printf("%i \n",count3);
    }
    double xarr2[20];
    double yarr2[20];
    int count2=0;
    // double e;
    // unsigned long count = 4294967295L;
    // e = pow( (1.0/(double)count + 1), (double)count );

    for(backx;backx<backx2;backx+0.1){
        xarr[count2]=backx;
        // printf("for double \n");
        printf("%d ",backx);
        yarr[count2]=tan(backx);//+e;
        count2=count2+1;
    }
}
int main(int argc ,char *argv[]){
    graph_functions(1.0, 10.0);
    return 0;
}