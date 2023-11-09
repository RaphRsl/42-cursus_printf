/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_letters_x_capx_p.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroussel <rroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:02:38 by rroussel          #+#    #+#             */
/*   Updated: 2022/11/22 15:38:39 by rroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_nblen_hexa(unsigned long nb)
{
	int	len;

	len = 0;
	while (nb > 0)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}

void	ft_putnbr_hexa(unsigned long n, int format)
{
	char	c;
	char	*base;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n > 15)
	{
		ft_putnbr_hexa(n / 16, format);
		ft_putnbr_hexa(n % 16, format);
	}
	else
	{
		c = base[n];
		ft_putchar_fd(c, 1);
	}
}

int	ft_letter_x(va_list args, int *tt_l)
{
	unsigned int	hex;
	int				len;

	len = 0;
	hex = va_arg(args, unsigned int);
	if (!hex)
	{
		ft_putchar_fd('0', 1);
		*tt_l += 1;
	}
	else
	{
		ft_putnbr_hexa((unsigned long)hex, 'x');
		len = ft_nblen_hexa((unsigned long)hex);
		*tt_l += len;
	}
	return (1);
}

int	ft_letter_capx(va_list args, int *tt_l)
{
	unsigned int	hex;
	int				len;

	len = 0;
	hex = va_arg(args, unsigned int);
	if (!hex)
	{
		ft_putchar_fd('0', 1);
		*tt_l += 1;
	}
	else
	{
		ft_putnbr_hexa((unsigned long)hex, 'X');
		len = ft_nblen_hexa((unsigned long)hex);
		*tt_l += len;
	}
	return (1);
}

int	ft_letter_p(va_list args, int *tt_l)
{
	unsigned long	hex;
	int				len;

	hex = va_arg(args, unsigned long);
	if (!hex)
	{
		ft_putstr_fd("(nil)", 1);
		*tt_l += 5;
	}
	else
	{
		ft_putstr_fd("0x", 1);
		*tt_l += 2;
		ft_putnbr_hexa(hex, 'x');
		len = ft_nblen_hexa(hex);
		*tt_l += len;
	}
	return (1);
}
