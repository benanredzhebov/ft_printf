/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beredzhe <beredzhe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:50:15 by beredzhe          #+#    #+#             */
/*   Updated: 2023/12/10 15:34:02 by beredzhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_chexi(int tmp);
int		ft_chexxi(int tmp);
int		ft_print_c(va_list args);
int		ft_print_s(va_list args);
int		ft_print_i(va_list args);
int		ft_print_u(va_list args);
int		ft_print_x(va_list args, char c);
int		ft_print_p(va_list args);
char	*ft_putadd(unsigned long n);
char	*ft_puthexi(unsigned int n, char c);
char	*ft_utoa(unsigned int n);

#endif
