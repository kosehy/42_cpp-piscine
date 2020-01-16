# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sko <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/15 19:21:29 by sko               #+#    #+#              #
#    Updated: 2020/01/15 19:21:37 by sko              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex06
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
