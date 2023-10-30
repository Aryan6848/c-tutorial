#include<stdio.h>
int main(int argc, char const *argv[])
{ int n ;
    printf("enter the no. of lines you want");
    scanf("%d",&n);
   /* for(int i=1; i<=n; i++)
    {   
       for(int j=1; j<=i; j++)
      {  
          printf("*\t");
          
      }
      printf("\n");
    }*/
    for(int i=n; i>=1; i--)
    {
       for(int j=1; j<=i; j++)
       {
           printf("*\t");
       }
       printf("\n");
       
    }

    return 0;
}
