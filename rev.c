#include<stdio.h>
int rev(int n)
{
if(n==0)
return 0;
else
return 1+rev(n/10);
}
int main()
{
  printf("*******************");
printf("%d\n",rev(2334));
}
