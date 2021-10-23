/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginam <ginam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:57:19 by ginam             #+#    #+#             */
/*   Updated: 2021/10/23 11:01:55 by ginam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	recur(int nb, int power, int res)
{
	if (power-- > 0)
		return (recur(nb, power, res *= nb));
	return (res);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	return (recur(nb, power, 1));
}
