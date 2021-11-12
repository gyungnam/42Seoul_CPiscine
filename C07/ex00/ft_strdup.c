
#include <stdlib.h>

int ft_strlen(char *str)
{
  int i;

  i=0;
  while(str[i])
    i++;
  return (i);
}
char *ft_strdup(char *src)
{
  char *dst;
  int len;
  int i;

  i = 0;
  len = ft_strlen(src);
  dst = (char *)malloc(sizeof(char) * (len + 1));
  if(dst == NULL)
    return (NULL);
  while (i < len)
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return (dst);
}