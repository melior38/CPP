# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 18:32:49 by marvin            #+#    #+#              #
#    Updated: 2023/12/12 18:32:49 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_ORANGE=\033[0;34m
COLOUR_END=\033[0m
COLOUR_YELLOW=\033[0;33m
COLOUR_CYAN=\033[0;36m

NAME	= Abstract_Class

RM				= rm -rf

SRC				=	main.cpp							\
					Animal.cpp							\
					Cat.cpp								\
					Dog.cpp								\
					WrongCat.cpp						\
					WrongAnimal.cpp						\
					Brain.cpp
					

DIRS			= objs
HEADERS			= include
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
			$(RM) objs

fclean:		clean
			$(RM) $(NAME) *.a
			$(RM) objs

re:			fclean all