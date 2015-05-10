/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 23:55:54 by pollier           #+#    #+#             */
/*   Updated: 2015/03/03 12:54:25 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_white_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(const char *s)
{
	char	*str;
	int		len;

	if (!*s)
		return ((char *)s);
	while (ft_white_space(*s))
		s++;
	if (!*s)
		return ((char *)s);
	len = ft_strlen(s);
	while (ft_white_space(s[--len]))
		;
	++len;
	str = ft_strsub(s, 0, len);
	return (str);
}
