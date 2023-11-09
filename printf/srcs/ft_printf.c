/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroussel <rroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:59:14 by rroussel          #+#    #+#             */
/*   Updated: 2022/11/22 15:52:54 by rroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_nextprint(int fd, const char *sentence, va_list args, int *tt_l)
{
	int	i;

	i = 0;
	while (sentence[i] != '\0')
	{
		if (sentence[i] == '%')
		{
			i = ft_checkconv(args, sentence, i + 1, tt_l);
		}
		else
		{
			ft_putchar_fd(sentence[i], fd);
			*tt_l += 1;
		}
		i++;
	}
	return (1);
}

int	ft_printf(const char *sentence, ...)
{
	va_list	args;
	int		total_lens;

	total_lens = 0;
	va_start(args, sentence);
	ft_nextprint(1, sentence, args, &total_lens);
	va_end(args);
	return (total_lens);
}
