/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:31:41 by luinasci          #+#    #+#             */
/*   Updated: 2024/11/13 18:11:16 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

int			ft_printf(const char *format, ...);
char		*ft_utoa(unsigned int n);
char		*ft_itoa(int n);
long int	ft_len(int n);
char		*ft_char(char *s, unsigned int number, long int len);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);

#endif
