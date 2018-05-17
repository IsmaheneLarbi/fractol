/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 21:22:09 by ilarbi            #+#    #+#             */
/*   Updated: 2017/10/14 12:44:23 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <inttypes.h>
# include <limits.h>
# include <sys/types.h>
# include <fcntl.h>
# define BUFF_SIZE 10
# define MAX sysconf(_SC_OPEN_MAX)

typedef struct s_list	t_list;
typedef	struct s_file	t_file;
struct				s_list
{
	void			*content;
	size_t			content_size;
	t_list			*next;
};

struct				s_file
{
	int			ret;
	char		*rest;
	char		*tmp2;
	char		tmp1[BUFF_SIZE + 1];
	int			oldfd;
};

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *,
			size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void	*dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_striter(char *s, void (*f) (char *));
void				ft_striteri(char *s, void (*f) (unsigned int, char *));
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_bzero(void *s, size_t n);
void				ft_swap(char **first, char **second);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putwchar(wchar_t letter);
void				ft_putwstr(wchar_t *s);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_wstrlen(wchar_t *s);
int					ft_putc(char c);
int					ft_nbrsize(int number, int base);
int					ft_nbrssize(intmax_t number, int base);
int					ft_nbrusize(uintmax_t number, int base);
int					ft_atoistr(const char **str);
int					ft_isspace(int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					get_next_line(const int fd, char **line);
int					ft_abs(int number);
unsigned int		ft_power(unsigned int base, int ex);
unsigned int		ft_bin_to_dec(char *bin);
unsigned int		ft_htoi(char *hex);
char				*ft_get_file_extension(const char *filename);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little,
		size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strmap(char const *s, char (*f) (char));
char				*ft_strmapi(char const *s, char (*f) (unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoin_free(char *s1, int free1, char *s2, int free2);
char				*ft_strtrim(char const *s);
char				*ft_itoa_max_base(intmax_t number, int base);
char				*ft_uitoa_max_base(uintmax_t number, int base);
char				*ft_itoa(int n);
char				*ft_itoa_base(int number, int base);
char				*ft_strminimalize(char **str);
char				*ft_wchart(wchar_t letter);
char				*ft_wc(char *letter);
char				**ft_strsplit(const char *s, char c);
int					ft_atoi(const char *str);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_ishex(char c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

#endif
