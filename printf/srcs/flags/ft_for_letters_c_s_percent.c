/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_letters_c_s_percent.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroussel <rroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:16:54 by rroussel          #+#    #+#             */
/*   Updated: 2022/11/21 16:18:28 by rroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_letter_c(va_list args, int *tt_l)
{
	char	c;

	c = va_arg(args, int);
	ft_putchar_fd (c, 1);
	*tt_l += 1;
	return (1);
}

int	ft_letter_s(va_list args, int *tt_l)
{
	char	*str;
	int		len;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		*tt_l += 6;
		return (0);
	}
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	*tt_l += len;
	return (1);
}

int	ft_letter_percent(va_list args, int *tt_l)
{
	(void)args;
	ft_putchar_fd('%', 1);
	*tt_l += 1;
	return (1);
}
