#include<stdio.h>
int main()
{
  int number;
  printf("enter the number : ");
  scanf("%d",&number);
  if(number%2==0)
  printf("input is even",number);
  else
  printf("input is odd",number);
  return 0;
  
}
