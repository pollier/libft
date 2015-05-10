/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 00:13:09 by pollier           #+#    #+#             */
/*   Updated: 2015/05/11 01:08:36 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_realloc(char **src, size_t n_length, size_t old_length)
{
	char	*new;

	new = ft_strnew(n_length);
	new = ft_memcpy(new, src, old_length);
	free(*src);
	*src = new;
}
