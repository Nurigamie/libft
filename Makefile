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

SRCS =	ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_strnstr.c	\
		ft_striteri.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c 	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c		\
		ft_strmapi.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	

SRCSB = ft_lstadd_back.c\
		ft_lstadd_front.c\
		ft_lstclear.c 	\
		ft_lstdelone.c	\
		ft_lstiter.c	\
		ft_lstlast.c	\
		ft_lstmap.c		\
		ft_lstnew.c		\
		ft_lstsize.c
# **************************************************************************** #

NAME	= libft.a
OBJS = $(SRCS:.c=.o)
CC                = gcc
RM                = rm -f
CFLAGS            = -Wall -Wextra -Werror
OBJSB  = $(SRCSB:.c=.o)
# **************************************************************************** #

$(NAME): $(OBJS)
	@ar r $(NAME) $(OBJS)

%.o: %.c
	gcc $(FLAGS) -I $(INCLUDES) -c $< -o $@
# **************************************************************************** #
all:	$(NAME)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME) $(OBJSB)

re:	fclean all

bonus: $(OBJSB)
	@ar r $(NAME) $(OBJSB)
