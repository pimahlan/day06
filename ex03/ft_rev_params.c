/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 08:53:47 by pimahlan          #+#    #+#             */
/*   Updated: 2020/06/23 09:02:18 by pimahlan         ###   ########.fr       */
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
	i =0;
	k =ac-1;
	 while(k > 0)
	 {
		 while(av[k][i])
		 {
			 ft_putchar(av[k][i]);
			 i++;
		 }
		 i =0;
		 k--;
		 ft_putchar('\n');
	 }
	return(0);
}
