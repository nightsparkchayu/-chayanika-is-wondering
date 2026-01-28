#include <stdio.h>
#include <math.h>
int main()
{
  // float f;
  // printf("enter the fahrenheit temperature : ");
  // scanf("%f", &f);
  // float c = (f - 32) * 5 / 9;
  // printf("the temperature in celcius is %f", c);

  // float l, b, r;
  // printf("enter the length and breadth of rectangle and radius of circle : \n ");
  // scanf("%f,%f,%f", &l, &b, &r);
  // printf("perimetre of rectangle is = %.2f\n", 2 * (l + b));
  // printf("area of rectangle = %.2f\n", l * b);
  // printf("the circumference of the circle is %.2f\n", 2 * 22 / 7 * r);
  // printf("the area of the circle is %.2f\n", 22 / 7 * r * r);

  float l = 1189, b = 841;
  int n;
  printf("enter the size you want: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    if (l > b)
    {
      l = l / 2;
    }
    else if (b > l)
    {
      b = b / 2;
    }
  }
  printf("the dimensions of the paper are:\n %.2fmm x %.2fmm", l, b);

  // if(n%2==0)l = l/pow(2,(n/2)+1);
  // else l = l/pow(2,(n/2));
  // b = b/pow(2,(n/2));

  return 0;
}