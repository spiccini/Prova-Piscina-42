/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 12:04:52 by exam              #+#    #+#             */
/*   Updated: 2019/12/13 12:32:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	i = 0;
	
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if(((argv[1][i] >= 65) && (argv[1][i] <= 90)) ||((argv[1][i] >= 97) && (argv[1][i] <= 122)))
			{	
				if(argv[1][i] == 90 || argv[1][i] == 122)
                {
                    argv[1][i] = argv[1][i] - 25;
                }
				else
				{
					argv[1][i] = argv[1][i] + 1;
				}
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}