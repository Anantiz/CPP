CXX:=g++ -std=c++98
CPPFLAGS:= -Wall -Werror -Wextra -g3
RM:=rm -rf

NAME:=account

SRC_PATH:=./

SRC_FILES:=Account.cpp tests.cpp

SRC_FILES:= $(addprefix $(SRC_PATH)/,$(SRC_FILES))
SRC_OBJECTS:= $(patsubst %.cpp,%.o,$(SRC_FILES))

%.o: %.cpp
	$(CXX) -c $< $(CPPFLAGS) -o $@

all: $(NAME)

$(NAME): $(SRC_OBJECTS)
	@$(CXX) $^ $(CPPFLAGS) -o $@

clean:
	@$(RM) $(SRC_OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

#awk '{sub(/^[^[:space:]]+[[:space:]]+/, "")} 1' "A.log" > "cuted_A.log"