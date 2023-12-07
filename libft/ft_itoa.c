/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaing <jtaing@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:04:52 by jtaing            #+#    #+#             */
/*   Updated: 2023/12/04 12:53:17 by jtaing           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int	nb;
	size_t		len;
	char		*ret;

	nb = n;
	len = n == 0;
	if (nb < 0 && ++len)
		nb = -nb;
	while (n && ++len)
		n /= 10;
	ret = ft_calloc(len + 1, 1);
	if (!ret)
		return (NULL);
	*ret = '-';
	if (!nb)
		*ret = '0';
	while (nb)
	{
		ret[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (ret);
}
