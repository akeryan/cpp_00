# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/14 15:57:35 by akeryan           #+#    #+#              #
#    Updated: 2024/04/14 22:38:08 by akeryan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook 

FLAGS =  -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -rf

SRC_FILES = main.cpp	\
			Contact.cpp	\
			PhoneBook.cpp	\

INCLUDE_FILES = Contact.hpp	\
				PhoneBook.hpp

OBJ = $(patsubst %.cpp, %.o, $(SRC_FILES))

%.o: %.cpp $(INCLUDE_FILES) 
	$(CC) $(FLAGS) -o $@ -c $<  

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
