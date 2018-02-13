# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thou <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/12 17:48:41 by thou              #+#    #+#              #
#    Updated: 2018/01/12 17:49:25 by thou             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLACK					=	\033[30;1m
RED						=	\033[31;1m
GREEN					=	\033[32;1m
YELLOW					=	\033[33;1m
BLUE					=	\033[34;1m
PURPLE					=	\033[35;1m
CYAN					=	\033[36;1m
WHITE					=	\033[37;1m
RESET					=	\033[0m
CLEAR					=	\033[H\e[J

NAME1		=	push_swap
NAME2		=	checker
FLAG		=	-Wall -Wextra -Werror
INC			=	-I libft/includes
INC1		=	$(INC) -I $(NAME1)/includes
INC2		=	$(INC) -I $(NAME2)/includes
SRC_DIR1	=	src_$(NAME1)/
SRC_DIR2	=	src_$(NAME2)/
SRC_BASE1	=	main.c
SRC_BASE2	=	main.c
SRC1		=	$(addprefix $(SRC_DIR1), $(SRC_BASE1))
SRC2		=	$(addprefix $(SRC_DIR2), $(SRC_BASE2))
OBJ_DIR		=	obj/
OBJ_DIR1	=	$(addprefix $(OBJ_DIR), $(NAME1))/
OBJ_DIR2	=	$(addprefix $(OBJ_DIR), $(NAME2))/
OBJ1		=	$(addprefix $(OBJ_DIR1), $(SRC_BASE1:.c=.o))
OBJ2		=	$(addprefix $(OBJ_DIR2), $(SRC_BASE2:.c=.o))
LIB			=	./libft
LFT			=	./libft/libft.a

all: $(LFT) $(NAME1) $(NAME2)

$(LFT):
	@make -C $(LIB)

$(NAME1): $(OBJ1)
	@gcc $(FLAG) -o $(NAME1) $(OBJ1) $(INC1) -L$(LIB) -lft
	@echo "\033[48;5;15;38;5;25;1mMAKE $(NAME1) DONE$(RESET)"

$(NAME2): $(OBJ2)
	@gcc $(FLAG) -o $(NAME2) $(OBJ2) $(INC2) -L$(LIB) -lft
	@echo "\033[48;5;15;38;5;25;1mMAKE $(NAME2) DONE$(RESET)"

$(OBJ_DIR1)%.o : $(SRC_DIR1)%.c
	@mkdir -p $(OBJ_DIR1)
	@gcc $(FLAG) $(INC1) -o $@ -c $<

$(OBJ_DIR2)%.o : $(SRC_DIR2)%.c
	@mkdir -p $(OBJ_DIR2)
	@gcc $(FLAG) $(INC2) -o $@ -c $<

clean:
	@make clean -C $(LIB)
	@rm -rf $(OBJ_DIR)
	@echo "$(YELLOW)Clean	$(OBJ_DIR)$(GREEN)			[ OK ]$(RESET)"


fclean:
	@make fclean -C $(LIB)
	@rm -rf $(OBJ_DIR)
	@echo "$(YELLOW)Clean	$(OBJ_DIR)$(GREEN)			[ OK ]$(RESET)"
	@rm -rf $(NAME1)
	@rm -rf $(NAME2)
	@echo "$(YELLOW)Clean	$(NAME1)$(GREEN)		[ OK ]$(RESET)"
	@echo "$(YELLOW)Clean	$(NAME2)$(GREEN)			[ OK ]$(RESET)"
re: fclean all
