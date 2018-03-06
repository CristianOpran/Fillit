/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 02:02:19 by mienache          #+#    #+#             */
/*   Updated: 2018/01/04 03:06:42 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

# define T_VECTOR_INIT_SIZE 16

typedef	unsigned char				t_byte;
typedef unsigned long long			t_ull;
long								ft_abs(long n);
size_t								ft_count_digits(long n, size_t base);
void								*ft_memalloc(size_t size);
void								*ft_memset(void *b, int c, size_t len);
void								*ft_memcpy(void *dst,
												const void *src, size_t n);
void								*ft_memrcpy(void *dst,
												const void *src, size_t n);
void								*ft_memmove(void *dst,
												const void *src, size_t n);
void								*ft_memccpy(void *dst, const void *src,
												int c, size_t n);
void								*ft_memchr(const void *s, int c, size_t n);
void								ft_bzero(void *s, size_t n);
void								ft_memdel(void **ap);
int									ft_memcmp(const void *s1,
												const void *s2, size_t n);
size_t								ft_strlen(const char *s);
size_t								ft_strlcat(char *s1, const char *s2,
												size_t size);
char								**ft_strsplit(const char *s, char c);
char								*ft_strdup(const char *s1);
char								*ft_strcpy(char *dst, const char *src);
char								*ft_strncpy(char *dst, const char *src,
												size_t len);
char								*ft_strcat(char *s1, const char *s2);
char								*ft_strncat(char *s1, const char *s2,
												size_t n);
char								*ft_strchr(const char *s, int c);
char								*ft_strrchr(const char *s, int c);
char								*ft_strstr(const char *big,
												const char *little);
char								*ft_strnstr(const char *big,
												const char *little, size_t len);
char								*ft_strnew(size_t size);
char								*ft_strmap(const char *s, char (*f)(char));
char								*ft_strmapi(const char *s,
												char (*f)(unsigned int, char));
char								*ft_strsub(const char *s,
												unsigned int start, size_t n);
char								*ft_itoa_generic(long n, size_t b,
												size_t md, const char *fmt);
char								*ft_itoa(int n);
char								*ft_strjoin(const char *s1, const char *s2);
char								*ft_strtrim(const char *s);
void								ft_strdel(char **as);
void								ft_strclr(char *s);
void								ft_striter(char *s, void (*f)(char *));
void								ft_striteri(char *s,
											void (*f)(unsigned int, char *));
int									ft_strcmp(const char *s1, const char *s2);
int									ft_strncmp(const char *s1,
											const char *s2, size_t n);
int									ft_isspace(int c);
int									ft_isalpha(int c);
int									ft_isdigit(int c);
int									ft_isalnum(int c);
int									ft_isascii(int c);
int									ft_isprint(int c);
int									ft_toupper(int c);
int									ft_tolower(int c);
int									ft_atoi_generic(const char *str,
											size_t base, const char *format);
int									ft_atoi(const char *str);
int									ft_strequ(const char *s1, const char *s2);
int									ft_strnequ(const char *s1,
											const char *s2, size_t n);
void								ft_putchar_fd(char c, int fd);
void								ft_putchar(char c);
void								ft_putstr_fd(const char *s, int fd);
void								ft_putstr(const char *s);
void								ft_putendl_fd(const char *s, int fd);
void								ft_putendl(const char *s);
void								ft_putnbr_fd(int n, int fd);
void								ft_putnbr(int n);
void								ft_putnbr_generic(long n, size_t b,
											int fd, const char *fmt);
struct								s_list
{
	void							*content;
	size_t							content_size;
	struct s_list					*next;
};
typedef struct s_list				t_list;
t_list								*ft_lstnew(const void *content,
												size_t content_size);
void								ft_lstdelone(t_list **alst,
												void (*del)(void *, size_t));
void								ft_lstdel(t_list **alst,
												void (*del)(void *, size_t));
void								ft_lstadd(t_list **alst, t_list *n);
void								ft_lstiter(t_list *lst,
												void (*f)(t_list *elem));
t_list								*ft_lstmap(t_list *lst,
												t_list *(*f)(t_list *elem));
struct								s_vector
{
	void							*data;
	size_t							step;
	size_t							size;
	size_t							count;
};
typedef struct s_vector				t_vector;
t_vector							*ft_vec_new(size_t step);
t_vector							*ft_vec_newn(size_t step, size_t init_size);
t_vector							*ft_vec_copy(t_vector *v);
t_vector							*ft_vec_move(t_vector *v);
void								*ft_vec_at(t_vector *v, size_t index);
void								ft_vec_append(t_vector *v, void *data);
void								ft_vec_pop(t_vector *v, void *store);
void								ft_vec_pop_s(t_vector *v, void *store);
void								ft_vec_resize(t_vector *v, size_t new_size);
void								ft_vec_del(t_vector **v);

#endif
