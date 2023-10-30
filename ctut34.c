#include<stdio.h>
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
   printf("\n");
}
int main()
{
    char str[34];
  gets(str);
  printf("using custom function call printstr\n");
  printstr(str);
  printf("using printf %s\n",str);
  printf("using puts:\n");
  puts(str);
  return 0;
}