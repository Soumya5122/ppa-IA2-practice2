#include<stdio.h>

typedef struct_triangle
{
  float base,altitude,area;
} Triangle;

Triangle input_triangle()
{
  Triangle XYZ;
  printf("enter a two number");
  scanf("%f %f",XYZ.base,XYZ.altitude);
  return XYZ;
}

void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}

void output(Triangle t)
{
  
}