# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmourik <mmourik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/06 10:40:43 by mmourik       #+#    #+#                  #
#    Updated: 2021/11/18 06:47:37 by merelmourik   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = library.a
CFLAGS = -Wall -Werror -Wextra -I .

SRCS = atoi bzero calloc isalnum isalpha isascii \
		isdigit isprint itoa memccpy memchr \
		memcmp memcpy memmove memset putchar_fd \
		putendl_fd putstr_fd split strchr strdup \
		strjoin strlcat strlcpy strlen strmapi \
		strncmp strnstr strrchr strtrim substr \
		strcpy tolower toupper putnbr_fd isupper \
		islower lstnew lstsize lstadd_front \
		lstlast lstdelone lstadd_back lstclear \
		lstiter lstmap

CFILES = $(SRCS:%=%.c)
SRCO = $(CFILES:%.c=%.o)

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) -c $(CFILES)
	@ar rc	$(NAME) $(SRCO)
	@ranlib	$(NAME)

clean:
	@/bin/rm -f $(SRCO)

fclean: clean
	@/bin/rm -f $(SRCO) $(NAME)
	@/bin/rm -f a.out

re: fclean all