# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sko <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/14 23:38:06 by sko               #+#    #+#              #
#    Updated: 2020/01/14 23:38:13 by sko              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
PPFLAG = -Wall -Wextra -Werror
COMP = clang++ $(PPFLAG)
FILE = *.cpp
HDRS = *.hpp

all : $(NAME)

$(NAME):
	@$(COMP) $(FILE) $(HDRS) -o $(NAME)

clean:
	@rm -rf *.gch

fclean:
	@rm -f $(NAME)
re: fclean all
