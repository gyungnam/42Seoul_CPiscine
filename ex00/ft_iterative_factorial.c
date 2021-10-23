/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginam <ginam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:24:10 by ginam             #+#    #+#             */
/*   Updated: 2021/10/23 10:27:59 by ginam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		res;

	if (nb < 0)
		return (0);
	i = 1;
	res = 1;
	while (i < nb + 1)
		res *= i++;
	return (res);
}
