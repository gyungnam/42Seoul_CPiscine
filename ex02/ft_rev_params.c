/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginam <ginam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:20:20 by ginam             #+#    #+#             */
/*   Updated: 2021/10/23 15:45:16 by ginam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int		i;

	while (--ac > 0)
	{
		i = 0;
		while (av[ac][i])
			write(1, &av[ac][i++], 1);
		write(1, "\n", 1);
	}
}
