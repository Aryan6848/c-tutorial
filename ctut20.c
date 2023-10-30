#include<stdio.h>
int main(int argc, char const *argv[])
{ int num, i; 
   printf("enter the number for multipliction table of");
   scanf("%d",&num);
   printf("\n"); 
    for(i=1; i<=10; i++)
    {
        printf("%dx%d=%d\n", num,i,num*i);
    }
    return 0;
}
