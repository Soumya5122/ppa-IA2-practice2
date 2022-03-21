#include<stdio.h>

void input(float *base,float *height)
{
  printf("enter the two numbers\n");
  scanf("%f %f",base ,height);
}

void find_area(float base,float height ,float *area)
{
  *area=(base*height)/2;
  return;
}

void output(float base,float height,float area)
{
  printf("the area of triangle %f %f is %f",base,height,area);
  return;
}

int main()
{
  int base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
  
}