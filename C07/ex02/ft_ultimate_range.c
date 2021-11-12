
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
  int i;
  int *tmp;
  
  if (min >= max)
  {
    *range = 0;
    return (0);
  }
  tmp = (int *)malloc(sizeof(int) * (max - min));
  if(tmp == NULL)
    return (-1);
  *range = tmp;
  i = 0;
  while (i < max - min)
  {
    tmp[i] = min + i;
    i++;
  }
  return (max - min);
}