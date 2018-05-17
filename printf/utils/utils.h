/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 19:50:34 by ilarbi            #+#    #+#             */
/*   Updated: 2017/08/27 21:06:05 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_flags				t_flags;
typedef struct s_width				t_width;
typedef struct s_length_modifiers	t_len;
typedef struct s_format				t_format;

int				ft_isflag(char c);
int				ft_iswidth(char c);
int				ft_islen(char c);
int				ft_istype(char c);
int				ft_isok(char c);
int				ft_isunsigned(char type);
int				ft_issigned(char type);
int				ft_isnumeric(char type);
int				ft_assign_base(t_format *f);
int				ft_wcsize(wchar_t letter);
int				ft_printwstr(wchar_t *wstr, int precision);
int				ft_wstrbytes(wchar_t *wstr, int precision);
int				ft_check(t_format **f);
void			ft_checkforflags(const char **format, t_format **f);
void			ft_checkforwidth(const char **format, t_format **f);
void			ft_checkforlen(const char **format, t_format **f);
void			ft_gettype(const char **format, t_format **f);
void			ft_printformat(t_format *f);
void			ft_fdel(t_format **f);
void			ft_prepend(char c, int nbr, int *written);
char			*ft_redirect_p(t_format **f, void *address, int *size);
char			*ft_percent(t_format **f, int *size);
char			*ft_cast_signed(void *result, t_format *f, int *size);
char			*ft_cast_signed_(int result);
char			*ft_cast_signed_hh(intmax_t result);
char			*ft_cast_signed_h(intmax_t result);
char			*ft_cast_signed_l(intmax_t result);
char			*ft_cast_signed_ll(intmax_t result);
char			*ft_cast_signed_j(intmax_t result);
char			*ft_cast_signed_z(intmax_t result);
char			*ft_cast_unsigned(void *res, t_format *f, int *size);
char			*ft_cast_unsigned_(uintmax_t result, int base);
char			*ft_cast_unsigned_hh(uintmax_t result, int base);
char			*ft_cast_unsigned_h(uintmax_t result, int base);
char			*ft_cast_unsigned_l(uintmax_t result, int base);
char			*ft_cast_unsigned_ll(uintmax_t result, int base);
char			*ft_cast_unsigned_j(uintmax_t result, int base);
char			*ft_cast_unsigned_z(uintmax_t result, int base);
char			*ft_wstr(wchar_t *ws, t_format *f, int *size);
char			*ft_chartostr(int result, t_format *f, int *size);
char			*ft_wstrtostr(void *str, t_format *f, int *size);
char			*ft_invalid_type(char *pseudotype, int *size);

struct			s_flags
{
	int			hash;
	int			plus;
	int			minus;
	int			zero;
	int			space;
};

struct			s_width
{
	int			min;
	int			precision;
	int			max;
};

struct			s_length_modifiers
{
	int			hh;
	int			h;
	int			l;
	int			ll;
	int			j;
	int			z;
};

struct			s_format
{
	t_flags		*flags;
	t_width		*width;
	t_len		*len;
	char		*type;
};

#endif
