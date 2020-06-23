/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 08:37:48 by pimahlan          #+#    #+#             */
/*   Updated: 2020/06/23 08:52:50 by pimahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int main( int ac, char *av[])
{
    int i;
	int k;
	k =1;
	i =0;
	while(k < ac)
	{
		while(av[k][i])
		{
			ft_putchar(av[k][i]);
			i++;
		}
		k++;
		i =0;
		ft_putchar('\n');
	}
	return(0);
}
