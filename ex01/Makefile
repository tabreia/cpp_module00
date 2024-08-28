# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 18:37:36 by tabreia-          #+#    #+#              #
#    Updated: 2023/06/28 18:48:28 by tabreia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=c++
CXXFLAGS=-Wall -Werror -Wextra -std=c++98
DEPS=
SRCS=Contact.cpp PhoneBook.cpp main.cpp
OBJS=$(SRCS:.cpp=.o)
NAME=Contacts
all: $(NAME)
$(NAME): $(OBJS) $(DEPS)
	@$(CXX) $(OBJS) $(DEPS) -o $(NAME)
clean:
	@rm $(OBJS)
fclean: clean
	@rm $(NAME)
re: fclean all