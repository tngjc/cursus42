/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <jtaing@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:08:07 by jtaing            #+#    #+#             */
/*   Updated: 2023/12/02 14:08:09 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!*little)
		return ((void *)big);
	while (len && *big)
	{
		i = 0;
		while (i < len && little[i] && little[i] == big[i])
			i++;
		if (!little[i])
			return ((void *)big);
		big++;
		len--;
	}
	return (NULL);
}
