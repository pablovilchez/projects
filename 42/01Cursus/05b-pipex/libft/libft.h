/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:57:25 by pvilchez          #+#    #+#             */
/*   Updated: 2023/06/09 21:52:23 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t number, size_t size);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(char c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_memset(void *str, int c, unsigned int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dst, char *src, size_t size);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *src, unsigned int start, size_t len);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
// Funciones del bonus de libft
typedef struct s_list
{
	int				num;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_list	*next;
}					t_node;
void	ft_lstadd_back(t_node **lst, t_node *new);
void	ft_lstadd_front(t_node **lst, t_node *new);
void	ft_lstclear(t_node **lst);
void	ft_lstdelone(t_node *lst);
t_node	*ft_lstlast(t_node *lst);
t_node	*ft_lstnew(int num);
int		ft_lstsize(t_node *lst);
void	*free_all(char **matrix, size_t num);
// Funciones de ft_printf
char	*ft_itoa_long(long n);
int		ft_printf(const char *str, ...);
size_t	print_hex_cap(unsigned int nbr);
size_t	print_hex_long(unsigned long long nbr);
size_t	print_hex(unsigned int nbr);
size_t	print_int(int nbr);
size_t	print_str(char *str);
size_t	print_unsig_int(unsigned int nbr);
size_t	print_void(void *p);
// Funciones de ft_get_next_line
char	*ft_get_next_line(int fd);
char	*file_to_static(int fd, char *static_str);
char	*line_to_print(char *static_str, char *line);
char	*extra_data(char *static_str);
size_t	find_nl(char *str);
size_t	count_nl(char *str);
char	*ft_strjoin_gnl(char *s1, char *s2);
void	*ft_calloc_gnl(size_t number, size_t size);

#endif