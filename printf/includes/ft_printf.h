/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroussel <rroussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:10:47 by rroussel          #+#    #+#             */
/*   Updated: 2022/11/22 15:46:33 by rroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *sentence, ...);
int		ft_nextprint(int fd, const char *sentence, va_list args, int *tt_l);
int		ft_check_correct_letter(char c);
void	ft_call_function(va_list args, const char *sentence, int i, int *tt_l);
int		ft_checkconv(va_list args, const char *sentence, int i, int *tt_l);
int		ft_nblen_hexa(unsigned long nb);
void	ft_putnbr_hexa(unsigned long n, int format);
int		ft_letter_x(va_list args, int *tt_l);
int		ft_letter_capx(va_list args, int *tt_l);
int		ft_letter_p(va_list args, int *tt_l);
int		ft_nblen_deca(long int nb);
int		ft_print_u(unsigned int nbr);
int		ft_letter_u(va_list args, int *tt_l);
int		ft_letter_d_or_i(va_list args, int *tt_l);
int		ft_letter_c(va_list args, int *tt_l);
int		ft_letter_s(va_list args, int *tt_l);
int		ft_letter_percent(va_list args, int *tt_l);

#endif