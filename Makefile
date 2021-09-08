NAME =		deleteRand

SRCS =		srcs/WriteLog.cpp \
			srcs/Utils.cpp \
			srcs/WriteFiles.cpp \
			main.cpp

OBJS =		$(SRCS:.cpp=.o)

CC =		g++ -std=c++11

FLAGS =		-Wall -Wextra -Werror

TEST =		test.cpp

.cpp.o:
		@echo "Generating objs..."
		$(CC) $(FLAGS) -c $< -o ${<:.cpp=.o}

$(NAME): $(OBJS)
		@echo "Linking project"
		$(CC) $(OBJS) -o $(NAME)
		@echo "Project created, run ./deleteRand to start it"

all:	$(NAME)

test:
		$(CC) $(TEST) -o tester
		@echo "Tester created, run ./tester to start it"

clean:
		rm -f $(OBJS)
		@echo "Objs files deleted"

fclean: clean
		rm -f $(NAME)
		rm -f tester
		@echo "Objs and executable files deleted"

free_logs:
		./result/freeLogs.sh

re:		fclean all

.SILENT: