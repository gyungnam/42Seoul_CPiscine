/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_param.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginam <ginam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:27:48 by ginam             #+#    #+#             */
/*   Updated: 2021/10/23 15:45:02 by ginam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] == '\0')
		return (0);
	else
		return (-s2[i]);
}

int	main(int ac, char *av[])
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	while (++i < ac)
	{
		j = i;
		while (++j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
		}
	}
	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
	}
}
