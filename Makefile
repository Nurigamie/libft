# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbuchet <mbuchet@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 13:38:07 by mbuchet           #+#    #+#              #
#    Updated: 2021/10/20 13:38:07 by mbuchet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_atoi.c		\	
		ft_bzero.c		\
		ft_calloc.c		\
		ft_isalnum.c	\
		ft_isalpha.c 	\
		ft_isascii.c	\		
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_itoa.c		\		
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_memcpy.c		\
		ft_memmove.c 	\
		ft_memset.c		\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_split.c		\
		ft_strchr.c		\
		ft_strcpy.c		\
		ft_strdup.c		\
		ft_striteri.c	\
		ft_strjoin.c 	\
		ft_strlcat.c	\
		ft_strlen.c		\
		ft_strmapi.c	\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_strrchr.c	\
		ft_strtrim.c	\
		ft_substr.c		\
		ft_toupper.c	\
		ft_tolower.c	\

NAME			= libft.a
OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror  
 

$(NAME): $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED)
	@echo "Libft Done !"

all:			$(NAME)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean all
