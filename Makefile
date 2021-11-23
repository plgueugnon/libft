# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgueugno <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/05 10:07:13 by pgueugno          #+#    #+#              #
#    Updated: 2021/11/23 17:47:04 by pgueugno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###############################################################################
#				Filename output				      #
###############################################################################

NAME		=	libft.a

###############################################################################
#			Sources and objects directories			      #
###############################################################################

HEADERS_DIR	=	header
SRCS_DIR	=	srcs
OBJS_DIR	=	objs

###############################################################################
#				Sources filenames			      #
###############################################################################

SRCS		=	$(notdir $(shell find $(SRCS_DIR) -type f -name *.c))

###############################################################################
#				Commands and arguments			      #
###############################################################################

CC		=	@gcc
CFLAGS		=	-Wall -Wextra -Werror -I$(HEADERS_DIR) -g
BUFSIZE		=	-D BUFFER_SIZE=32
RM		=	@rm -f
AR		=	@ar -rcs

###############################################################################
#				Defining colors				      #
###############################################################################

_RED		=	\x1b[31m
_GREEN		=	\x1b[32m
_YELLOW		=	\x1b[33m

###############################################################################
#				Compiling				      #
###############################################################################

OBJS		=	$(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))


all:	init $(NAME)
	@ echo "$(_GREEN)[libft.a created]"

init:	
	@ echo "$(_YELLOW)[Initialize libft]"
	@ $(shell mkdir -p $(OBJS_DIR))

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
				@ echo "\t$(_YELLOW) compiling... $*.c"
				$(CC) $(CFLAGS) $(BUFSIZE) -c $< -o $@

$(NAME): $(OBJS)
		@ echo "\t$(_YELLOW)[Creating library...]"
		$(AR) $(NAME) $(OBJS)

clean:
		@ echo "$(_RED)[cleaning objects files]"
		$(RM) $(OBJS)

fclean: clean
		@ echo "$(_RED)[cleaning objects and library files]"
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re bonus
