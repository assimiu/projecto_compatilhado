NAME = getnextline.a
GCC = gcc -Wall -Wextra -Werror
RM = rm -fr 
BB = ar -rcs

SRC = get_next_line_utils.c get_next_line.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(BB) $(NAME) $(OBJ)

%.o: %.c
	$(GCC) -c $< -o $@

clean:
	$(RM) $(OBJ) Main.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

a: 
	$(GCC) Main.c -o Main.o $(NAME) && ./Main.o
