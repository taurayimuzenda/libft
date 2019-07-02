# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/30 12:48:36 by tmuzenda          #+#    #+#              #
#    Updated: 2019/07/01 16:21:52 by tmuzenda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC= gcc -c

SRC= *.c

OBJ= *.o

all: $(NAME)

FLAGS= -Wall -Wextra -Werror

$(NAME):
	$(CC)  $(FLAGS) $(SRC) 
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *.gch

re : fclean all				
