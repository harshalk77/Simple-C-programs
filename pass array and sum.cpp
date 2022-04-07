#include <stdio.h>
float calculateSum(float num[]);

int main() 
{
  float result, num[] = {1,2,3,4,5};

  // num array is passed to calculateSum()
  result = calculateSum(num); 
  printf("Result = %f", result);
  return 0;
}

float calculateSum(float num[]) 
{
  float sum = 0;

  for (int i = 0; i < 6; ++i) 
  {
    sum += num[i];
  }

  return sum;
}
