# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sko <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/15 16:36:20 by sko               #+#    #+#              #
#    Updated: 2020/01/23 22:33:03 by sko              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutantstack
PPFLAG = -Wall -Wextra -Werror
COMP = clang++ $(PPFLAG)
FILE = *.cpp

all : $(NAME)

$(NAME):
	@$(COMP) $(FILE) -o $(NAME)

clean:
	@rm -rf *.gch

fclean:
	@rm -f $(NAME)
re: fclean all
