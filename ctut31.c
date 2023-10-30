#include<stdio.h>
 void swap(int*x,int*y)
 {
     int temp=*x;
     *x=*y;
     *y=temp;
     return;
 }


int main()
{
    int a=34,b=45;
    printf("the value of a %d and b is %d\n" ,a ,b);
    swap(&a,&b);
    printf("now the value of a is %d and b is %d",a ,b);
}
