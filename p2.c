#include<stdio.h>
int input_side()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}

int check_scalence(int a,int b,int c)
{
  if(a!=b && b!=c && c!=a)
  {
    printf("is not a triangle");
  
}
  else
  {
    printf("is a triangle");
  }
  return 0;
  }
void output(int a,int b,int c,int isscalence)
{
  printf("the sides are not equal %d\n",a,b,c,isscalence);
}

  int main()
  {
    int a,b,c,isscalence;
    input(a,b,c);
    check_scalence(a,b,c);
    output(a,b,c,isscalence);
    return 0;
    }
