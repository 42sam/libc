# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/22 22:36:30 by ssachet           #+#    #+#              #
#    Updated: frequently          by ssachet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
A		=	libft.a
CFLAGS	=	-Wall -Wextra -Werror

#▶  Printf sources
PSRC = 	printf/ft_printf.c \
		printf/cast_str_cox.c \
		printf/cast_to_numeric.c \
		printf/cast_to_wc.c \
		printf/conversion_type.c \
		printf/add.c \
		printf/add_format.c \
		printf/apply.c \
		printf/apply_left_width.c \
		printf/apply_width.c \
		printf/assistant.c \
		printf/is.c  \
		printf/to_s_a_c.c \
		printf/to_x_to_o.c \
		printf/ft_sprintf.c printf/colors.c
#」
#▶  Get next line sources
GETSRC= get_next_line/get_next_line.c
#  //」
#▶  Termcaps
TERMSRC= 	term/term_init.c \
			term/term_print.c \
			term/term_underline.c \
			term/term_highlight.c \
			term/term_move.c \
			term/term_assistant.c \
			term/term_clear.c \
			term/term_time.c \
			term/loading_attributes.c \
			term/cursor.c \
			term/term_del.c \
			term/switch_to_canonical.c
#  //」
#▶  List
LIST= 	list/ft_lstadd.c \
		list/ft_lstcpy.c \
		list/ft_lstdel.c \
		list/ft_lstdelone.c \
		list/ft_lstiter.c \
		list/ft_lstlen.c \
		list/ft_lstmap.c \
		list/ft_lstnew.c \
		list/ft_lstprint.c \
		list/get_value.c \
		list/find_and_remove_node.c \
		list/lst_to_array.c \
		list/lstcpy.c \
		list/new_dict.c \
		list/push.c \
		list/set_value.c \
		list/lst_to_str.c \
		list/last_node.c \
		list/str_to_lst.c \
		list/array_to_dblst.c \
		list/lst_grep.c \
		list/print_dictionary.c \
		list/lst_reverse.c \
		list/array_to_stack.c \
		list/str_to_stack.c \
		list/print_dictionary.c
#  //」
#▶  Memory
MEM= 	mem/ft_bzero.c \
		mem/ft_memalloc.c \
		mem/ft_memccpy.c \
		mem/ft_memchr.c \
		mem/ft_memcmp.c \
		mem/ft_memcpy.c \
		mem/ft_memdel.c \
		mem/ft_memmove.c \
		mem/ft_memset.c
#  //」
#▶  String
STR= 	str/case_down.c \
		str/case_up.c\
		str/char_index.c \
		str/char_to_str.c \
		str/ft_has_char.c \
		str/ft_isalnum.c \
		str/ft_isalpha.c \
		str/ft_isascii.c \
		str/ft_isdigit.c \
		str/ft_isprint.c \
		str/ft_isspace.c \
		str/ft_ltrim.c \
		str/ft_putarray.c \
		str/ft_putchar.c \
		str/ft_putchar_fd.c \
		str/ft_putendl.c \
		str/ft_putendl_fd.c \
		str/ft_putnbr.c \
		str/ft_putnbr_fd.c \
		str/ft_putstr.c \
		str/ft_putstr_fd.c \
		str/ft_rtrim.c \
		str/ft_stpcpy.c \
		str/ft_strcat.c \
		str/ft_strchr.c \
		str/ft_strchr_rev.c \
		str/ft_strclr.c \
		str/ft_strcmp.c \
		str/ft_strcpy.c \
		str/ft_strdel.c \
		str/ft_strdup.c \
		str/ft_strequ.c \
		str/ft_striter.c str/ft_striteri.c \
		str/ft_strjoin.c str/ft_strlcat.c \
		str/ft_strlen.c \
		str/ft_strmap.c \
		str/ft_strmapi.c \
		str/ft_strncat.c \
		str/ft_strncmp.c \
		str/ft_strncpy.c \
		str/ft_strnequ.c \
		str/ft_strnew.c \
		str/ft_strnstr.c \
		str/ft_strrchr.c \
		str/ft_strrev.c \
		str/ft_strsplit.c \
		str/ft_strstr.c \
		str/ft_strsub.c \
		str/ft_strtrim.c \
		str/ft_tolower.c \
		str/ft_toupper.c \
		str/ft_uppercase.c \
		str/hard_trim.c \
		str/has_char.c \
		str/has_char_at_end.c \
		str/has_char_rev.c \
		str/is_digitstr.c \
		str/is_alphastr.c \
		str/is_dot.c \
		str/is_lowercase.c \
		str/is_space_str.c \
		str/is_uppercase.c \
		str/makestr.c \
		str/pad_left.c \
		str/pad_right.c \
		str/path.c \
		str/strstrcount.c \
		str/tab_to_space.c \
		str/tr.c \
		str/trim_all.c \
		str/strsplit_mchars.c \
		str/str_insert.c \
		str/is_digitstr.c
#  //」
#▶  Unix
UNIX= 	unix/file_exists.c \
		unix/get_current_dir.c \
		unix/is_directory.c \
		unix/is_file.c
#  //」
#▶  General
GENERAL= 	general/free_and_null.c \
			general/tablen.c \
			general/arr_len.c
#  //」
#▶  Numeric
INT= 	int/ft_atoi.c \
		int/ft_itoa.c \
		int/ft_ltoa.c \
		int/tab_del_i.c \
#  //」
#▶  .o
O = ft_printf.o cast_str_cox.o cast_to_numeric.o cast_to_wc.o conversion_type.o add.o add_format.o apply.o apply_left_width.o apply_width.o assistant.o is.o  to_s_a_c.o to_x_to_o.o get_next_line.o ft_sprintf.o term_init.o term_print.o term_underline.o term_highlight.o term_move.o term_assistant.o term_clear.o term_time.o loading_attributes.o cursor.o term_del.o colors.o free_and_null.o tablen.o ft_atoi.o ft_itoa.o ft_ltoa.o tab_del_i.o ft_lstadd.o ft_lstcpy.o ft_lstdel.o ft_lstdelone.o ft_lstiter.o ft_lstlen.o ft_lstmap.o ft_lstnew.o ft_lstprint.o get_value.o lst_to_array.o lstcpy.o new_dict.o push.o set_value.o ft_bzero.o ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memmove.o ft_memset.o case_down.o case_up.o char_index.o char_to_str.o ft_has_char.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_isspace.o ft_ltrim.o ft_putarray.o ft_putchar.o ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o ft_rtrim.o ft_stpcpy.o ft_strcat.o ft_strchr.o ft_strchr_rev.o ft_strclr.o ft_strcmp.o ft_strcpy.o ft_strdel.o ft_strdup.o ft_strequ.o ft_striter.o ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlen.o ft_strmap.o ft_strmapi.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnequ.o ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strrev.o ft_strsplit.o ft_strstr.o ft_strsub.o ft_strtrim.o ft_tolower.o ft_toupper.o ft_uppercase.o hard_trim.o has_char.o has_char_at_end.o has_char_rev.o is_digitstr.o is_alphastr.o is_dot.o is_lowercase.o is_space_str.o is_uppercase.o makestr.o pad_left.o pad_right.o strstrcount.o tab_to_space.o tr.o trim_all.o file_exists.o get_current_dir.o is_directory.o is_file.o arr_len.o strsplit_mchars.o last_node.o str_to_lst.o array_to_dblst.o path.o find_and_remove_node.o lst_grep.o str_insert.o is_digitstr.o str_to_stack.o array_to_stack.o print_dictionary.o switch_to_canonical.o lst_reverse.o lst_to_str.o
#//」
#▶  Header files
H = libft.h \
	printf/ft_printf.h \
	get_next_line/get_next_line.h \
	term/termlib.h
#  //」
#O = $(SRC:.c=.o)
all:
	$(CC) -c $(CFLAGS) $(LIST) $(STR) $(UNIX) $(GENERAL) $(INT) $(MEM) $(PSRC) $(GETSRC) $(TERMSRC)
	ar rc $(A) $(O) $(H)
	ranlib $(A)
clean:
	rm -rf $(O)

fclean: clean
	rm -rf $(A)

re: fclean all

.PHONY: all libftprintf.a mainprintf clean fclean
# vim:foldmethod=marker:foldlevel=0 "must be last for folds
