/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginam <ginam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:00:02 by ginam             #+#    #+#             */
/*   Updated: 2021/10/23 21:39:38 by ginam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_valid(char *str)
{
	char	*p;
	int		i;
	int		j;

	p = str;
	if (p[0] == 0 || ft_strlen(str) == 1)
		return (-1);
	while (*p)
	{
		if ((*p >= 9 && *p <= 13) || (*p == 32)
			|| *p == '+' || *p == '-')
			return (-1);
		p++;
	}
	i = 0;
	while (i < ft_strlen(str))
	{
		j = i + 1;
		while (j < ft_strlen(str))
			if (str[i] == str[j++])
				return (-1);
		i++;
	}
	return (0);
}

int	find_num(char *base, char c)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	radix;
	int	res;
	int	pm;

	if (base_valid(base) == -1)
		return (0);
	radix = ft_strlen(base);
	res = 0;
	pm = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			pm *= -1;
		str++;
	}
	while ((find_num(base, *str)) != -1)
	{
		res *= radix;
		res += find_num(base, *str);
		str++;
	}
	return (res * pm);
}
