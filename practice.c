#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int a,b;
    a=3; b=2;
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b); 
    printf("a and b are integer=%d\n",a&&b);
    printf("a and b are equal=%d\n",a==b);
    printf("a or b are integer=%d\n",a||b);
    printf("and(bitwise operator) on 2,3=%d\n",a&b);
    printf("or(bitwise operator on 2,3=%d\n",a|b);
    printf("exlusive or operator on 2,3=%d\n",a^b);
    return 0;
}
