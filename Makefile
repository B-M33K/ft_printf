CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
OBJ = 	ft_picker.o \
		ft_printf.o \
		ft_putadd.o \
		ft_putchar.o \
		ft_putnbr.o \
		ft_putnbr_base.o \
		ft_putstr.o \
		ft_strlen.o
HEADER = printf.h
RM = rm -f
AR = ar cr

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $@ $^

%.o : $(HEADER)

clean :
	$(RM)  $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re 