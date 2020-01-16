# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sko <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/15 22:30:48 by sko               #+#    #+#              #
#    Updated: 2020/01/15 22:30:49 by sko              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cat 
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
