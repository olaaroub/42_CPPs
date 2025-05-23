/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrimah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:03:07 by yrimah            #+#    #+#             */
/*   Updated: 2022/10/10 09:32:46 by yrimah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 48 && a <= 57)
		|| ((a >= 65 && a <= 90)
			|| (a >= 97 && a <= 122)))
		return (1);
	return (0);
}
