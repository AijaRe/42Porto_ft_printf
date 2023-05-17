# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arepsa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 10:25:25 by arepsa            #+#    #+#              #
#    Updated: 2023/05/17 10:25:36 by arepsa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME :=	libftprintf.a
		
SRCS =	ft_printf.c\
	ft_printf_utils.c\
	ft_printf_ptr.c

CC := cc
CFLAGS := -Wall -Wextra -Werror
CPPFLAGS := -I. -g 
LIBFLAGS := ar -rcs 
RM := /bin/rm -f
SRCS_O := $(SRCS:.c=.o) 

#create and index library (ar - archive, -r insert files by replacement, -c create the archve, -s index the files

#create .o files; also default compilation
#%.o : %.c
#	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(SRCS_O)
	$(LIBFLAGS) $(NAME) $(SRCS_O)

clean:
	$(RM) $(SRCS_O) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

#targets declared as .PHONY will force the command even if there is a subdirectory or file with it's name
.PHONY: all clean fclean re
