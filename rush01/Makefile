# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sko <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/24 13:15:05 by sko               #+#    #+#              #
#    Updated: 2020/01/25 11:59:06 by sko              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCDIR = srcs/
OBJDIR = objs/
SRCDIR_CLASS = class/
OBJDIR_CLASS = objs_class/

SRC = main.cpp ImageDisplay.cpp

SRC_CLASS = Gkrellm.hpp GraphicDisplay.hpp IMonitorDisplay.hpp IMonitorModule.hpp

OBJ = $(SRC:.cpp=.o)
OBJ_CLASS = $(SRC_CLASS:.cpp=.o)

SRCS = $(addprefix $(SRCDIR), $(SRC))
OBJS = $(addprefix $(OBJDIR), $(OBJ))
SRCS_CLASS = $(addprefix $(SRCDIR_CLASS), $(SRC_CLASS))
OBJS_CLASS = $(addprefix $(OBJDIR_CLASS), $(OBJ_CLASS))

LIBS = -lncurses -framework sfml-graphics -framework sfml-window -framework sfml-system -F SFML/Frameworks
HEADER = -I includes -I ./SFML/include

SFML = DYLD_FRAMEWORK_PATH="$(PWD)/SFML/Frameworks"

CC = clang++
CFLAG = -c
WFLAG = -Wall -Wextra -Werror

NAME = ft_gkrellm

.PHONY: all clean fclean re
.SUFFIXES: .c .o

all: $(NAME)

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAG) $(WFLAG) $(HEADER) $< -o $@

$(OBJDIR_CLASS)%.o: $(SRCDIR_CLASS)%.cpp
	@mkdir -p $(OBJDIR_CLASS)
	@$(CC) $(CFLAG) $(WFLAG) $(HEADER) $< -o $@

$(NAME): $(OBJS) $(OBJS_CLASS)
	@$(CC) $(OBJS) $(OBJS_CLASS) $(HEADER) $(LIBS) -o $@
	@echo "\x1b[32;1m[ft_gkrellm created]\x1b[0m"

sfml:
	@echo export $(SFML)

clean:
	@/bin/rm -rf $(OBJDIR)
	@/bin/rm -rf $(OBJDIR_CLASS)
	@echo "\x1b[35;1m[ft_gkrellm cleaned]\x1b[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\x1b[31m[ft_gkrellm fcleaned]\x1b[0m"

re: fclean all
