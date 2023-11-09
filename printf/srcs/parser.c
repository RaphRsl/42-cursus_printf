/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroussel <rroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:44:06 by rroussel          #+#    #+#             */
/*   Updated: 2022/11/21 17:05:02 by rroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_check_correct_letter(char c)
{
	int		i;
	char	*correct_letter;

	i = 0;
	correct_letter = "cspdiuxX%";
	while (i < 9)
	{
		if (correct_letter[i] == c)
			return (i);
		i++;
	}
	return (i);
}

void	ft_call_function(va_list args, const char *sentence, int i, int *tt_l)
{
	int	index;
	int	(*ft_functions[9])(va_list, int *);

	ft_functions[0] = ft_letter_c;
	ft_functions[1] = ft_letter_s;
	ft_functions[2] = ft_letter_p;
	ft_functions[3] = ft_letter_d_or_i;
	ft_functions[4] = ft_letter_d_or_i;
	ft_functions[5] = ft_letter_u;
	ft_functions[6] = ft_letter_x;
	ft_functions[7] = ft_letter_capx;
	ft_functions[8] = ft_letter_percent;
	index = ft_check_correct_letter(sentence[i]);
	ft_functions[index](args, tt_l);
	return ;
}

int	ft_checkconv(va_list args, const char *sentence, int i, int *tt_l)
{
	if (ft_check_correct_letter(sentence[i] < 9))
		ft_call_function(args, sentence, i, tt_l);
	else
	{
		ft_putchar_fd('%', 1);
		*tt_l += 1;
		return (i - 1);
	}
	return (i);
}
