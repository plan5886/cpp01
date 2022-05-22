# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mypark <mypark@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 11:02:36 by mypark            #+#    #+#              #
#    Updated: 2022/05/22 10:09:33 by mypark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	Zombie_ex00
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -pedantic
LDFLAGS 	= -Wall -Werror -Wextra -std=c++98 -pedantic
SRCS	=	main.cpp\
				newZombie.cpp\
				randomChump.cpp\
				Zombie.cpp
OBJS	=	$(SRCS:.cpp=.o)
INCS	=	-I.

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	$(MAKE) clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all
