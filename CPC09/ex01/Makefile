NAME	= libft.a
C_FILES	= ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
C_DIRS	= $(addprefix $(SRCDIR), $(C_FILES))
O_FILES	= $(C_DIRS:.c=.o)
SRCDIR	= ./srcs/
HEADER	= ./includes/
AR		= ar r
RAN		= ranlib
GCC		= gcc
CFLAGS	= -Wall -Wextra -Werror


all:		$(NAME)

.c.o:
			$(GCC) $(CFLAGS) -c -I $(HEADER) $< -o $(<:.c=.o)

$(NAME):	$(O_FILES)
			$(AR) $(NAME) $(O_FILES)
			$(RUN) $(NAME)

clean:
			rm -f $(O_FILES)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
