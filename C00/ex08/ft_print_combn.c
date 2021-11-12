/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginam <ginam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:58:08 by ginam             #+#    #+#             */
/*   Updated: 2021/10/16 18:00:17 by ginam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_buff[10];
int		g_start;

void	dfs(int num, int cnt, int N)
{
	int		i;

	if (cnt == N)
	{
		if (g_start != 0)
		{
			write(1, ",", 1);
			write(1, " ", 1);
		}
		write(1, g_buff, N);
		g_start++;
		return ;
	}
	i = num;
	while (i < 10)
	{
		g_buff[cnt] = i + '0';
		dfs(i + 1, cnt + 1, N);
		i++;
	}
}

void	ft_print_combn(int n)
{
	dfs(0, 0, n);
}