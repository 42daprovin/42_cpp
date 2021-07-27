NAME	= BestPhoneBook

SRCS	= phone_book.cpp \
		  contact_class.cpp \
		  utils.cpp

OBJS	= ${SRCS:.cpp=.o}

CFLAGS = -I includes

.cpp.o:
	clang++ ${CFLAGS} -c $< -o ${<:.cpp=.o}

${NAME}: ${OBJS}
	clang++ ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
