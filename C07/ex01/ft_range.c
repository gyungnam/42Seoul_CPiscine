
#include <stdlib.h>

int *ft_range(int min, int max)
{
  int *arr;
  int i;

  if(min >= max)
    return (0);
  arr = (int *)malloc(sizeof(int) * (max - min));
  if(arr == NULL)
    return (0);
  i = 0;
  while (i < max - min)
  {
    arr[i] = min + i;
    i++;
  }
  return (arr);
}
int main(void)
{
  int i = 0;
  for 
}