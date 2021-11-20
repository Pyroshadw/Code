#include <math.h>
#include <stdio.h>

double circle_pi(int rectangles)
{
  double iterations;
  double pi_circle;
  double w;
  double r;
  double x;
  double h;

  for (iterations = 1; iterations <= 1000000; iterations *= 10)
  {
    r = 2;
    w = (r / iterations);
    x = (w / 2);
    h = sqrt ((r*r) - (x*x));
    pi_circle = (h * w);    
  }
    /* Return an approximation of pi */
  return 
}

double leibniz_pi(int iterations)
{
  double i; /* Loop counter */
  double sum = 1;
  double sign = 1;

  for (i = 1; i < iterations; ++i)
  {
    sum += (1 / (2 * i - 1)) * sign;
    sign = sign * -1;
  }
    /* Return an approximation of pi */
  return 
}