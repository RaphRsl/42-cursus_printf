/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_letters_u_d_i.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroussel <rroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:00:37 by rroussel          #+#    #+#             */
/*   Updated: 2022/11/22 14:41:10 by rroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

int	ft_nblen_deca(long int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		len++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

int	ft_print_u(unsigned int nbr)
{
	if (nbr > 9)
	{
		ft_print_u(nbr / 10);
		ft_print_u(nbr % 10);
	}
	else if (nbr < 10)
		ft_putchar_fd(nbr + 48, 1);
	return (1);
}

int	ft_letter_u(va_list args, int *tt_l)
{
	unsigned int	nbr;
	int				len;

	nbr = va_arg(args, unsigned int);
	len = ft_nblen_deca(nbr);
	ft_print_u(nbr);
	*tt_l += len;
	return (1);
}

int	ft_letter_d_or_i(va_list args, int *tt_l)
{
	int	nbr;
	int	len;

	nbr = va_arg(args, int);
	len = ft_nblen_deca((long int)nbr);
	ft_putnbr_fd(nbr, 1);
	*tt_l += len;
	return (1);
}
