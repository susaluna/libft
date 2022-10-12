/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsabik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:10:15 by lsabik            #+#    #+#             */
/*   Updated: 2022/10/06 12:47:20 by lsabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if(*s == (char)c)
			return ((char*)s);
		s++;
	}
	if(!(char)c)
		return ((char*)s);
	return (0);
}

