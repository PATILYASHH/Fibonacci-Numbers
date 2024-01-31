// Fibonacci Number 

#include<stdio.h>
int main()
{
int a=0 , b=1,input,result;

  printf("Enter a value : \t");
  scanf("%d",&input);

  result= a+b;

  
  for(int i=0; i<=input; i++)
    {
    a=b;
    b=result;  

      result=a+b;

      printf("%d\n",result);
    }

  
  return 0;
}