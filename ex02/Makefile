.SILENT:
NAME		= 	FFFixed

CC 			= 	c++

CFLAGS		= 	-Wall -Wextra -Werror -std=c++98 #-g

RM 			= 	rm -f

SRC			=	main.cpp Fixed.cpp

GREEN		= 	\033[0;32m

RESET		=	\033[0m

$(NAME):		$(SRC)
				$(CC) $(CFLAGS) $(SRC) -o $(NAME)
				make done

all: 			$(NAME)

fclean:
				$(RM) $(NAME)

re:				fclean	all

done:
				printf "															 	\n"
				printf "$(GREEN)	$(NAME)							 			$(RESET)\n"
				printf "$(GREEN)                             _  _             _ $(RESET)\n"
				printf "$(GREEN)                            (_)| |           | |$(RESET)\n"
				printf "$(GREEN)  ____   ___   ____   ____   _ | |  ____   _ | |$(RESET)\n"
				printf "$(GREEN) / ___) / _ \ |    \ |  _ \ | || | / _  ) / || |$(RESET)\n"
				printf "$(GREEN)( (___ | |_| || | | || | | || || |( (/ / ( (_| |$(RESET)\n"
				printf "$(GREEN) \____) \___/ |_|_|_|| ||_/ |_||_| \____) \____|$(RESET)\n"
				printf "$(GREEN)                     |_|                        $(RESET)\n"
				printf "																\n"

.PHONY: 		all fclean re