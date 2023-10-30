#include<stdio.h>
int main(int argc, char const *argv[])
{ int maths; int science;
    /* code */
    printf("enter 1 if you are pass and 0 if you are fail\n");
    printf("In maths\t");
    scanf("%d",&maths);
    printf("\n");
    printf("In science\t");
    scanf("%d",&science);
    printf("\n");
    if(maths==1 && science==1)
    {
        printf("you will get Rs 45");
    }
    else if(maths==1&&science==0)
    printf("you will get rs 20");
    else if(maths==0&&science==1)
    printf("you will get Rs15");

    return 0;
}
