## SRC ##
SRC_MISC = \
	source/misc/ft_atoi.c 			\
	source/misc/ft_bzero.c 			\
	source/misc/ft_calloc.c 		\
	source/misc/ft_isalnum.c 		\
	source/misc/ft_isalpha.c 		\
	source/misc/ft_isascii.c 		\
	source/misc/ft_isdigit.c 		\
	source/misc/ft_isprint.c 		\
	source/misc/ft_itoa.c 			\
	source/misc/ft_memchr.c 		\
	source/misc/ft_memcpy.c 		\
	source/misc/ft_memmove.c 		\
	source/misc/ft_memset.c 		\
	source/misc/ft_putchar_fd.c 	\
	source/misc/ft_putendl_fd.c 	\
	source/misc/ft_putnbr_fd.c 		\
	source/misc/ft_putstr_fd.c 		\
	source/misc/ft_split.c 			\
	source/misc/ft_strchr.c 		\
	source/misc/ft_strdup.c 		\
	source/misc/ft_striteri.c 		\
	source/misc/ft_strjoin.c 		\
	source/misc/ft_strlcat.c 		\
	source/misc/ft_strlcpy.c 		\
	source/misc/ft_strlen.c 		\
	source/misc/ft_strmapi.c 		\
	source/misc/ft_strncmp.c 		\
	source/misc/ft_strnstr.c 		\
	source/misc/ft_strrchr.c 		\
	source/misc/ft_strtrim.c 		\
	source/misc/ft_substr.c 		\
	source/misc/ft_tolower.c 		\
	source/misc/ft_toupper.c 		\
	source/misc/ft_memcmp.c

SRC_PRINTF = \
	source/printf/ft_printf.c					\
	source/printf/utils/char_printer.c			\
	source/printf/utils/lohex_printer.c			\
	source/printf/utils/nbr_printer.c			\
	source/printf/utils/new_base_printer.c		\
	source/printf/utils/pct_printer.c			\
	source/printf/utils/ptr_printer.c			\
	source/printf/utils/str_printer.c			\
	source/printf/utils/unint_printer.c			\
	source/printf/utils/uphex_printer.c			\

## BIN ##
BIN_MISC = $(SRC_MISC:.c=.o)
BIN_PRINTF = $(SRC_PRINTF:.c=.o)

## NAMES ##
MISC_A = libft.a
PRINTF_A = ftprintf.a

## COMPILER RULES ##
CC = gcc
FLAGS = -Wall -Wextra -Werror

## COMPILATION ##

all: $(MISC_A) $(PRINTF_A)

$(MISC_A):
	echo -e "\033[0;33m" "\n\n\n [STOP 01] COMPILING LIBFT MISC FUNCTIONS \n\n\n \033[0m"
	$(CC) -c $(SRC_MISC)
	mv ./*.o source/misc --verbose
	ar rcs $(MISC_A) $(BIN_MISC)
	echo -e "\033[0;33m" "\n\n\n [SUCCESS] | "libft.a" CREATED \n\n\n \033[0m"

$(PRINTF_A):
	echo -e "\033[0;33m" "\n\n\n [STOP 02] COMPILING LIBFT PRINTF FUNCTIONS \n\n\n \033[0m"
	$(CC) -c $(SRC_PRINTF)
	mv ft_printf.o source/printf/
	mv ./*.o source/printf/utils/ --verbose
	ar rcs $(PRINTF_A) $(BIN_PRINTF)
	echo -e "\033[0;33m" "\n\n\n [SUCCESS] | "ftprintf.a" CREATED \n\n\n \033[0m"

clean:
	rm -rf $(BIN_MISC) --verbose
	rm -rf $(BIN_PRINTF) --verbose
	echo -e "\033[0;33m" "\n\n\n [CLEAN] all binaries have been removed \n\n\n \033[0m"

fclean:	clean
	rm -f ftprintf.a --verbose
	rm -f libft.a --verbose
	echo -e "\033[0;33m" "\n\n\n [COMPLETELY CLEAN] all static libraries have been removed \n\n\n \033[0m"

re: fclean
	make