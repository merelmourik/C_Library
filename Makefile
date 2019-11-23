# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmourik <mmourik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/06 10:40:43 by mmourik        #+#    #+#                 #
#    Updated: 2019/11/23 12:29:06 by mmourik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I .

SRCS = atoi bzero calloc isalnum isalpha isascii\
		isdigit isprint itoa memccpy memchr\
		memcmp memcpy memmove memset putchar_fd\
		putendl_fd putstr_fd split strchr strdup\
		strjoin strlcat strlcpy strlen strmapi\
		strncmp strnstr strrchr strtrim substr\
		tolower toupper putnbr_fd isupper\
		islower

BSRCS = lstnew lstsize lstadd_front lstlast\
		lstdelone lstadd_back lstclear\
		lstiter lstmap

CFILES = $(SRCS:%=ft_%.c)
SRCO = $(CFILES:%.c=%.o)
BFILES = $(BSRCS:%=ft_%_bonus.c)
BOFILES = $(BFILES:%.c=%.o)

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) -c $(CFILES)
	@ar rc	$(NAME) $(SRCO)
	@ranlib	$(NAME)

clean:
	@/bin/rm -f $(SRCO) $(BOFILES)

fclean: clean
	@/bin/rm -f $(SRCO) $(BOFILES) $(NAME)

re: fclean all

bonus:
	@gcc $(CFLAGS) $(BFILES) -c
	@ar rc $(NAME) $(BOFILES)
	@ranlib $(NAME)
