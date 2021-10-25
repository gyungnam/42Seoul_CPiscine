/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginam <ginam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:45:45 by ginam             #+#    #+#             */
/*   Updated: 2021/10/23 21:32:05 by ginam            ###   ########.fr       */
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
		if (*p == '+' || *p == '-')
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

void	base_recur(int number, char *base, int radix)
{
	if (number == -2147483648)
	{
		base_recur(number / radix, base, radix);
		write(1, &(base[-(number % radix)]), 1);
		return ;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		base_recur(-number, base, radix);
		return ;
	}
	if (number > radix - 1)
		base_recur(number / radix, base, radix);
	write(1, &(base[number % radix]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	radix;

	if (base_valid(base) == -1)
		return ;
	radix = ft_strlen(base);
	base_recur(nbr, base, radix);
}
