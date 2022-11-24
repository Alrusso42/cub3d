# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alrusso <alrusso@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 09:19:18 by alrusso           #+#    #+#              #
#    Updated: 2022/11/23 09:52:02 by alrusso          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BLU			= \033[0;34m
GRN			= \033[0;32m
RED			= \033[0;31m
RST			= \033[0m
END			= \e[0m

SRC		= srcs/aff_pixel.c  srcs/check_border.c srcs/main.c \
	srcs/check_dot_cub.c srcs/check_opening_maps.c srcs/check_parameters.c \
	srcs/check_player.c srcs/count.c  srcs/close.c \
	srcs/direction.c  srcs/draw_minimap.c srcs/draw_player.c srcs/error.c \
	srcs/find_char.c  srcs/find_player.c srcs/init_game.c srcs/init_cube.c \
	srcs/init_legend.c srcs/init_player.c srcs/input.c \
	srcs/last_line.c srcs/mouvement_mouse.c srcs/map.c srcs/mouvement.c \
	srcs/parse_map.c srcs/parse_texture.c srcs/parse_utils.c srcs/raycasting.c \
	srcs/check_caracter.c \
	srcs/raycasting2.c srcs/raycasting3.c srcs/texture.c \
	srcs/update.c

NAME		= cub3D
OBJ			= $(SRC:.c=.o)
PROJECT_H	= includes/cub3d.h
CC			= gcc
FLAGS		= -Wall -Wextra -Werror
OBJS_DIR	= objs/
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJ))

MINILIBX = minilibx_mac
MLXFLAGS = -framework OpenGL -framework AppKit

$(OBJS_DIR)%.o : %.c $(PROJECT_H)
	mkdir -p $(OBJS_DIR)
	mkdir -p $(OBJS_DIR)srcs
	$(CC) $(FLAGS) -I/usr/include -I$(MINILIBX) -O3 -c $< -o $@
	printf	"\033[2K\r${BLU}[BUILD]${RST} '$<' $(END)"

$(NAME): $(OBJECTS_PREFIXED) maker
	$(CC) -o $(NAME) $(OBJECTS_PREFIXED) $(FLAGS) ./libft/libft.a \
	./$(MINILIBX)/libmlx.a ${MLXFLAGS}
	printf "\033[2K\r\033[0;32m[END]\033[0m $(NAME)$(END)\n"

all: $(NAME)

test: all
	./$(NAME) map.cub
	#valgrind ./$(NAME) map.cub

maker:
	make -C ./libft
	make -C ./$(MINILIBX)

clean:
	@make clean -C ./libft
	@make clean -C ./$(MINILIBX)
	@rm -rf $(OBJS_DIR)
	@printf "\033[2K\r${GRN}[CLEAN]${RST} done$(END) \n"

fclean: clean
	@make fclean -C ./libft
	@rm -rf $(NAME)
	@printf "\033[2K\r${GRN}[FCLEAN]${RST} done$(END) \n"

re: fclean all

.PHONY:		all clean fclean re maker test
