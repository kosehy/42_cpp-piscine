# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sko <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/15 16:36:20 by sko               #+#    #+#              #
#    Updated: 2020/01/15 21:40:41 by sko              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = logger 
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
