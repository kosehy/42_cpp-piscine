# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sko <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/13 20:21:17 by sko               #+#    #+#              #
#    Updated: 2020/01/13 20:25:31 by sko              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
PPFLAG = -Wall -Wextra -Werror
COMP = clang++ $(PPFLAG)
FILE = megaphone.cpp

all : $(NAME)

$(NAME) :
	@$(COMP) $(FILE) -o $(NAME)

clean :

fclean : clean
	@rm -rf $(NAME)

re : fclean all
