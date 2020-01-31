/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 13:26:57 by exam              #+#    #+#             */
/*   Updated: 2019/12/13 14:29:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int c1;
	int c2;
	int cont;
	i = 0;
	c1 = 0;
	c2 = 0;
	cont = 0;

	if(argc != 3)
		write(1, "\n", 1);
	else
	{
		while(argv[1][cont] != '\0')
			cont++;
	
		char aux[cont - 1];
		
		if(argc == 3)
		{
			while(argv[2][c2] != '\0')
			{
				if(argv[1][c1] == argv[2][c2])
				{
					aux[i] = argv[1][c1];
					i++;
					c1++;
				}
				c2++;
			}
			aux[i] = '\0';
			if(i == cont)
			{
				cont = 0;
				while(argv[1][cont] != '\0')
				{
					write(1, &argv[1][cont], 1);
					cont++;
				}
			}
		}
		write(1, "\n", 1);
	}
	return (0);
}
