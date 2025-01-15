NAME = push_swap

LIBFT_D = ./libft

LIBFT = $(LIBFT_D)/libft.a

SRC = ft_swap.c \
      ft_push.c \
      ft_rotate.c \
      ft_reverse_rotate.c \
      helper.c \
      ft_smol_sort.c \
      ft_init_stack_c.c \
      ft_thicc_sort.c \
      sort_utils.c \
      check_check.c \
      push_swap.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -g

CC = cc

all: $(LIBFT)  $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) ./libft/libft.a -o $(NAME)

clean:
	@make clean -s -C $(LIBFT_D)
	rm -fr $(OBJ)

fclean: clean
	@make fclean -s -C $(LIBFT_D)
	rm -fr $(NAME)

re: fclean $(NAME)
	@make re -s -C $(LIBFT_D)

$(LIBFT):
	@make all -s -C $(LIBFT_D)

.PHONY: all clean fclean
