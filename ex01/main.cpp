/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:54:33 by tabreia-          #+#    #+#             */
/*   Updated: 2023/07/07 17:54:33 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (void)
{
	std::string	line;
	PhoneBook 	phoneBook;

	while (line != "EXIT")
	{
		std::cout << "Choose a command: ADD, SEARCH or EXIT: ";
		std::getline(std::cin, line);
		if (line == "ADD")
			phoneBook.addContact();
		else if (line == "SEARCH")
			phoneBook.searchContact();
	}
}