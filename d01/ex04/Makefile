# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sko <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/14 23:02:28 by sko               #+#    #+#              #
#    Updated: 2020/01/25 17:40:41 by sko              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex04
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
