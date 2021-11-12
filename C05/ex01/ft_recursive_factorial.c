/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginam <ginam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 10:29:30 by ginam             #+#    #+#             */
/*   Updated: 2021/10/23 10:42:20 by ginam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recur(int res, int i)
{
	res *= i--;
	if (i > 0)
		return (recur(res, i));
	return (res);
}

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	return (recur(1, nb));
}
