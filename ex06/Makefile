# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mypark <mypark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 11:02:36 by mypark            #+#    #+#              #
#    Updated: 2022/05/21 15:08:11 by mypark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	ex05.out
CXXFLAGS	=	-std=c++98 -pedantic -Wall -Werror -Wextra
LDFLAGS 	= -std=c++98 -pedantic -Wall -Werror -Wextra
SRCS	=	main.cpp\
				Harl.cpp

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
	rm -rf $(NAME)_address.dSYM

re:
	$(MAKE) fclean
	$(MAKE) all
