#include<stdio.h>

void sumdiff(int*x ,int*y)
{
    int sum=*x+*y;
    int difference=*x-*y;
    *x=sum;
    *y=difference;
    return;
}



int main()
{
    int a=4 ,b =3;
    printf("the a is %d\n",a);
    printf("the b is %d\n",b);
    sumdiff(&a,&b);
    printf("the a is %d\n",a);
    printf("the b is %d\n",b);
}