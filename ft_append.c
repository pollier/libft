/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 00:45:22 by pollier           #+#    #+#             */
/*   Updated: 2015/05/11 01:13:28 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_append(char *old, char *new, size_t s_old, size_t s_new)
{
	ft_realloc(&old, (s_old + s_new), s_old);
	ft_memcpy((old + s_old), new, s_new);
}
