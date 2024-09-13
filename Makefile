NAME			=	library


SRCS			=	main.c library_utils.c


OBJ				=	$(SRCS:.c=.o)


CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

RM				=	rm -rf



all:			$(NAME)

$(NAME):		$(OBJ)
				@$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)

clean:
				@$(RM) $(OBJ)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re