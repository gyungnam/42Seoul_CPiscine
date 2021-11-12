/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginam <ginam@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:42:10 by ginam             #+#    #+#             */
/*   Updated: 2021/10/16 13:42:21 by ginam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int     ft_str_is_alpha(char *str)
{
    while (*str != '\0')
    {
        if(!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
            return (0);
        str++;
    }
    return (1);
}