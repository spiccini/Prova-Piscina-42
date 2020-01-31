/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 12:36:03 by exam              #+#    #+#             */
/*   Updated: 2019/12/13 13:23:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	int i;
	int f;
	char aux;

	i = 0;
	f = 0;

	while(str[f] != '\0')
	{
		f++;
	}

	f = f - 1;	
	
	while(i < f)
	{
		aux = str[f];
		str[f] = str[i];
		str[i] = aux;
		i++;
		f--;
	}

	return(str);
}