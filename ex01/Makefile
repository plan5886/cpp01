# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mypark <mypark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 11:02:36 by mypark            #+#    #+#              #
#    Updated: 2022/05/20 09:48:39 by mypark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	Zombie
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -pedantic
LDFLAGS 	= -Wall -Werror -Wextra -std=c++98 -pedantic
SRCS	=	main.cpp\
				zombieHorde.cpp\
				Zombie.cpp
OBJS	=	$(SRCS:.cpp=.o)
INCS	=	-I.
CLANG14 = /Users/mypark/goinfre/clang+llvm-14.0.0-x86_64-apple-darwin/bin/clang++

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

leak:
	$(CLANG14) $(CXXFLAGS) -fsanitize=leak $(SRCS) -o $(NAME)_leak

clean:
	rm -f $(OBJS)

fclean:
	$(MAKE) clean
	rm -f $(NAME)
	rm -f $(NAME)_leak

re:
	$(MAKE) fclean
	$(MAKE) all
