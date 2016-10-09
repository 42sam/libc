/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 03:26:02 by ssachet           #+#    #+#             */
/*   Updated: 2016/01/05 13:20:06 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/stat.h>
# include <dirent.h>
# include <signal.h>
# include <time.h>
# include "term/termlib.h"
# include "get_next_line/get_next_line.h"
# include "printf/ft_printf.h"
# define N(x) ft_putnbr(x)
# define S(x) ft_putstr(x)
# define E(x) ft_putendl(x)
# define C(x) ft_putchar(x)
# define JOIN ft_sprintf
# define LEN(X) ft_strlen(X)
# define CI(X, Y) char_index(X, Y)
# define DBE(X) E(X)
# define DBS(X) S(X)
# define DBA(X) ft_putarray(X)
# define DBN(X) N(X)
#define NRM  "\x1B[0m"
#define RED  "\x1B[31m"
#define GRN  "\x1B[32m"
#define YEL  "\x1B[33m"
#define BLU  "\x1B[34m"
#define MAG  "\x1B[35m"
#define CYN  "\x1B[36m"
#define WHT  "\x1B[37m"
//for linux
# include <inttypes.h>
#define S_IFWHT 0160000 /* whiteout */ 
typedef	struct		s_stack
{
	int				nb;
	struct s_stack	*next;
	struct s_stack	*previous;
}					t_stack;

typedef	struct		s_list
{
	char			*name;
	char			*value;
	struct s_list	*next;
	void			*content;
	size_t			content_size;
}					t_list;

typedef	struct		s_dict
{
	char			*name;
	char			*value;
	struct s_list	*next;
}					t_dict;

typedef struct		s_file
{
	char			*file_name;
	char			*file_mode;
	int				links_nb;
	char			*owner_name;
	char			*group_name;
	int				bytes_nb;
	char			*time;
	int				time_stamp;
	char			*year;
	int				st_uid;
	int				blocks;
	char			*target;
	struct s_file	*subfiles;
	struct s_file	*next;
}					t_file;

t_list				*new_arg(char *name, t_list *previous);
t_stack				*new_stack(int nb);
int					is_int(char *str);
char				*str_insert(char *str, char *to_insert, int index);
char				**ft_strsplit(char const *s, char c);
char				*add_chars_to_str(char *s1, char c, int x);
char				*case_down(char *str);
char				*case_up(char *str);
char				*char_to_str(char c);
char				*ft_itoa(int n);
char				*ft_ltoa(long n);
char				*ft_ltrim(char const *s);
char				*ft_rtrim(char const *s);
char				*ft_stpcpy(char *s1, const char *s2);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
char				*ft_strchr_rev(char *s, int c);
char				*ft_strcpy(char *s1, const char *s2);
char				*ft_strdup(const char *s1);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *s1, const char *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
char				*ft_strrev(char *s);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
char				*get_current_dir();
char				*get_value(char *name, t_list *node);
char				*hard_trim(char *s, char c);
char				*makestr(char *str);
char				*pad_left(char *s1, char c, int x);
char				*tab_to_space(char *s);
char				*tr(char *s, char c, char tr);
char				*trim_all(char *s);
char				ft_toupper_for_strmap(char s);
char				ft_toupper_for_strmapi(unsigned int i, char s);
int					char_index(char *str, char c);
int					file_exists(char *path);
int					ft_atoi(const char *str);
int					is_digitstr(char *s);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_isspace(unsigned char c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_printf(char *string, ...);
int					ft_sprintf(char **s, char *string, ...);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					has_char(char *s, char c);
int					has_char_at_end(char *str, char c);
int					has_char_rev(char *str, char c);
int					is_alphastr(char *s);
int					is_directory(char *path);
int					is_dot(char *str);
int					is_file(char *path);
int					is_file(char *path);
int					is_lowercase(char c);
int					is_space_str(char *str);
int					is_uppercase(char c);
int					set_value(char *name, char *value,
												int overwrite, t_list *node);
int					strstrcount(char *s1, char *s2);
int					tab_del_i(char **to_delete, t_list **head);
int					tablen(char **array);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *s);

//List Functions:

//-Conversion
t_list				*str_to_lst(char const *s, char c);
t_list				*array_to_dblst(char **array);
char				**lst_to_array(t_list *lst);
char				*lst_to_str(t_list *node, char c);
//-Info
int					ft_lstlen(t_list *lst);
void				ft_lstprint(t_list *head);
void				lst_grep(char *grep_str, t_list *node);

char				*get_value(char *name, t_list *node);
t_file				*last_node(t_file *node);
//-Create node
t_list 				*ft_lstnew(void const *content, size_t content_size);
t_list				*new_dict(char *name, char *value, t_list *next);
void				ft_lstcpy(t_list *l1, t_list *l2) ;//??weirdo
//-Modify node
int					set_value(char *name, char *value, int overwrite, t_list *node);
void 				ft_lstdelone(t_list **node, void (*del)(void *, size_t));//delete properly a node and its content; deletes the node you give it
int					find_and_remove_node(t_list *to_delete, t_list **head);//deletes (not properly) one node according to some reference node "to delete"
//-Modify list
void 				ft_lstdel(t_list **alst, void (*del)(void *, size_t));//delete properly a list and its nodes content
void				lst_reverse(t_file** head_ref);

t_list				*lst_copy(t_list *lst);//copy a list
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));//(create new list from transformation)
void 				ft_lstiter(t_list *lst, void (*f)(t_list *elem));//(In place)
//-Add node
void 				ft_lstadd(t_list **lst, t_list *new);
void				push(t_list **head, t_list *new);

//push_swap functions:
t_stack				*str_to_stack(char const *s, char c);
t_stack				*array_to_stack(char **array);
int					print_stack(t_stack *node, int fd);

void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *s1, const void *s2, size_t n);
void				*ft_memmove(void *s1, const void *s2, size_t n);
void				*ft_memset(void *b, int c, size_t n);
void				free_and_null(t_list **head);
void				ft_bzero(void *s, size_t n);
void				ft_memdel(void **ap);
void				ft_putarray(char **array);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_toupper_for_striter(char *s);
void				ft_toupper_forstriteri(unsigned int i, char *s);
void				init_signals();
#endif
