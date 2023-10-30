#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int a,b;
    a=34;
    b=6;
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    printf("1/0=%d\n",a==b);/*it will check a is equal to b or not if a will be equal to b it 
                             returns 1 and if not it returns 0  and that 0 or 1 goes to %d and then gets printed*/
    return 0;
}
