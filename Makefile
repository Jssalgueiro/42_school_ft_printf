# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsilva-s <jsilva-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 11:35:48 by jsilva-s          #+#    #+#              #
#    Updated: 2023/06/09 17:08:32 by jsilva-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = ft_arg_conv.c ft_hexalen.c
SOURCES += ft_intlen.c ft_itoa_hexa.c ft_print_arg_d.c
SOURCES += ft_print_arg_p.c ft_print_arg_x.c
SOURCES += ft_printf.c ft_putchar_pf.c ft_putstr_pf.c
SOURCES += ft_verify_param.c ft_strdup_pf.c ft_print_arg_u.c

# compile .c to .o
OBJECTS = ${SOURCES:.c=.o}


# @ supress commands to show in terminal
RM = rm -f

CC = cc 
CFLAGS = -Wall -Wextra -Werror
MSG1 = @echo "Compiled ✔︎"
MSG2 = @echo "Cleaned ✔︎"

# Adds object files *.o static library libft.a, creating libft.a if it no exist. -rc = replace and create
ARCHIVE = ar -rcs 

#Define a header and a index to library.
RANLIB = ranlib

$(NAME): ${OBJECTS}
	${ARCHIVE} ${NAME} ${OBJECTS}
	${RANLIB} ${NAME}
	${MSG1}

# Default all command to compile
all: ${NAME}

# Clean generated .o files
clean:
	${RM} ${OBJECTS}
	${MSG2}

# Force clean all files generated on all
fclean: clean
	${RM} ${NAME}

# Regenarate compilation
re: fclean all

# phony will run, independent from the state of the file system, avoid make in files with same name
.PHONY: all clean fclean re