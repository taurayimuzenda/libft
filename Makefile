# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/30 12:48:36 by tmuzenda          #+#    #+#              #
#    Updated: 2019/05/30 17:05:33 by tmuzenda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC= gcc -c

SRC= *.c *.h

OBJ= *.o

all: $(NAME)

FLAGS= -Wall -Wextra -Werror

$(NAME):
	$(CC)  $(FLAGS) $(SRC) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) *.gch

re :fclean all				
