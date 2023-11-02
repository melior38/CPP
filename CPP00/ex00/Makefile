# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 13:14:53 by asouchet          #+#    #+#              #
#    Updated: 2023/11/02 13:24:46 by asouchet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_ORANGE=\033[0;34m
COLOUR_END=\033[0m
COLOUR_YELLOW=\033[0;33m
COLOUR_CYAN=\033[0;36m

NAME = megaphone

RM			= rm -rf
SRC			=	megaphone.cpp

OBJS		= ${SRC:.cpp=.o}
CFLAGS 		= -Werror -Wextra -Wall -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
			@echo "$(COLOUR_CYAN)Compile..."
			g++ ${CFLAGS} $(OBJS) -o $@
%.o: %.cpp
		g++ $(CFLAGS) -c $< -o $@ -g3
clean:
			$(RM) ${OBJS}

fclean:		clean
			$(RM) $(NAME) *.a

re:			fclean all