# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mypark <mypark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 11:02:36 by mypark            #+#    #+#              #
#    Updated: 2022/05/20 10:07:12 by mypark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	ex02.out
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -pedantic
LDFLAGS 	= -Wall -Werror -Wextra -std=c++98 -pedantic
SRCS	=	main.cpp
OBJS	=	$(SRCS:.cpp=.o)
INCS	=	-I.
CLANG14 = /Users/mypark/goinfre/clang+llvm-14.0.0-x86_64-apple-darwin/bin/clang++

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

leak:
	$(CLANG14) $(CXXFLAGS) -fsanitize=leak -g $(SRCS) -o $(NAME)_leak

address:
	$(CLANG14) $(CXXFLAGS) -fsanitize=address -g $(SRCS) -o $(NAME)_address

clean:
	rm -f $(OBJS)

fclean:
	$(MAKE) clean
	rm -f $(NAME)
	rm -f $(NAME)_leak
	rm -f $(NAME)_address
	rm -rf $(NAME)_leak.dSYM

re:
	$(MAKE) fclean
	$(MAKE) all
