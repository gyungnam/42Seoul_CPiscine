
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *alloc_str(int size, char **strs, char *sep)
{
	int		len;
	int		i;
  char	*str;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * size - 1; // 구분자는 문자열 사이에 들어가서 문자열 개수 -1 
                                    // (ex.a1b2c)
	if (size <= 0)
		len = 1;
  str = (char *)malloc(sizeof(char) * len
	if (str == NULL)
		return (0);
	return (str);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
  char *str;
  int i;
  int j;
  int k;

  str = alloc_str(size, strs, sep);
  i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[k++] = sep[j];
			j++;
		}
    i++;
	}
	str[k] = '\0';
	return (str);
}
