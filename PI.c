#include<stdio.h>
#include<math.h>

double calc1(int num1)
{
    return (16/(num1 * pow(5.0,num1 * 1.0)));
}
double calc2(int num1)
{
    return (4/(num1 * pow(239.0,num1 * 1.0)));
}
void main(){
    int limit = 1000; 
    int j = 0; 
    double ans1 = 0.0;
    double ans2 = 0.0;
    double ans3 = 0; 
    int flag = 1; 
    for(j = 1; j <= limit ; j+= 2){
       if(flag == 1){
           ans1 += calc1(j);
           ans2 += calc2(j);
           flag = 0;
       } else{
           ans1 -= calc1(j);
           ans2 -= calc2(j);
           flag = 1;
       }
       /*printf("%lf  ",ans1);*/
       /*printf("%lf  ",ans2);*/
    }
    ans3 = ans1 - ans2;
    printf("The value of pi = %1.100lfn", ans3);
}
