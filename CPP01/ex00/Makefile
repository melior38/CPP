# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asouchet <asouchet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 18:06:46 by asouchet          #+#    #+#              #
#    Updated: 2023/11/14 13:45:20 by asouchet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_ORANGE=\033[0;34m
COLOUR_END=\033[0m
COLOUR_YELLOW=\033[0;33m
COLOUR_CYAN=\033[0;36m

NAME	= BraiiiiiiinnnzzzZ

RM				= rm -rf

SRC				=	main.cpp						\
					randomChump.cpp			\
					newZombie.cpp				\
					Zombie.cpp

DIRS			= objs
HEADERS			= includes
OBJS			= ${SRC:.cpp=.o}
CFLAGS 			= -I $(HEADERS) -Werror -Wextra -Wall -std=c++98
_OBJS			= $(addprefix $(DIRS)/, $(OBJS))


all: ${NAME}

${NAME}: ${_OBJS}
			@echo "$(COLOUR_CYAN)Compile..."
			g++ ${CFLAGS} $(_OBJS) -o $@
${DIRS}/%.o: %.cpp
		@mkdir -p $(DIRS)
		g++ $(CFLAGS) -c $< -o $@ -g3
clean:
			$(RM) ${_OBJS}

fclean:		clean
			$(RM) $(NAME) *.a

re:			fclean all