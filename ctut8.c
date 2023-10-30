#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age ;
    printf("enter your age\t");
    scanf("%d",&age);
    printf("you have entered the age as %d\n",age);
    if(age>=18)
    {
        printf("you are elligible for voting");
    }
    else if(age>=10)
    {
        printf("you can vote for kids");
    
    }
    else if(age>=5)
    {
        printf("you can vote babies");
    }
    else
    {
        printf("you are not eligible for voting");
    }
        return 0;
}
