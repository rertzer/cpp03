CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -MMD -MP

NAME = DiamondTrap 

SRC_DIR = ./

OBJ_DIR = obj/

INC_DIR = ./

SOURCES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = $(SOURCES:.cpp=.o)

OBJS = $(addprefix $(OBJ_DIR), $(OBJ))
DEPS = $(OBJS:.o=.d)

all: $(NAME) 

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CC) $(FLAGS) -c  $< -o $@ -I $(INC_DIR)


$(NAME): $(OBJ_DIR) $(OBJS)
	$(CC) $(FLAGS) -o  $@ $(OBJS)

$(OBJ_DIR):
	mkdir  $(OBJ_DIR)

clean:
	rm -f $(OBJS)
	rm -f $(DEPS)
	rm -fd $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
