# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flavon <flavon@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/24 16:17:20 by flavon            #+#    #+#              #
#    Updated: 2020/11/24 16:30:42 by flavon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp ContactClass.cpp PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

INCLUDE = PhoneBook.hpp ContactClass.hpp

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAG) $(SRC) -o $(NAME)

.cpp.o:
	clang++ $(FLAG) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
.PHONY: all re fclean clean
