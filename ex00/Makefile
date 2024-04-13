# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 20:25:16 by akeryan           #+#    #+#              #
#    Updated: 2024/04/13 20:04:45 by akeryan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS =  -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -rf

SRC_FILES = megaphone.cpp

OBJ = $(patsubst %.cpp, %.o, $(SRC_FILES))

%.o: %.cpp 
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
