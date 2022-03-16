#include<stdio.h>
int input_side()
{
  int a,b,c;
  printf("enter the sides of the triangle :\n");
  scanf("%d,%d,%d",&a,&b,&c);
}

int check_scalence(int a,int b,int c)
{
  
  if (a!=b && b!=c && c!=a)
  {
    printf("is  not a triangle\n");
  }
  
  else
   {
     printf("it is  a triangle");
       }
     return 0;
   
}

void output(int a,int b,int c,int n)
{
  printf("the sides are not equal %d \n",a,b,c, n);
}

int main()
{
  int a,b ,c ,n;
  input_side(a,b,c);
  output(a,b,c,n);
  return 0;
}