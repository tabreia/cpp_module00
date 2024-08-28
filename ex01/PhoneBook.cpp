/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:56:09 by tabreia-          #+#    #+#             */
/*   Updated: 2023/06/30 19:56:09 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string formatValue(std::string value)
{
	if (value.length() >= 10)
	{
		value[9] = '.';
		value.resize(10);
	}
	return (value);
}

PhoneBook::PhoneBook()
{

}

void	PhoneBook::addContact()
{
	static int 	i;
	static int 	aux;
	std::string	line;

	if (aux != 1)
	{
		i = 0;
		aux = 1;
	}
	if (i > 7)
		i = 0;
	while (line.empty())
	{
		std::cout << "Enter First Name:\n";
		std::getline(std::cin, line);
		contactArr[i].setFirstName(line);
	}
	line.clear();
	while (line.empty())
	{
		std::cout << "Enter Last Name:\n";
		std::getline(std::cin, line);
		contactArr[i].setLastName(line);
	}
	line.clear();
	while (line.empty())
	{
		std::cout << "Enter Nickname:\n";
		std::getline(std::cin, line);
		contactArr[i].setNickname(line);
	}
	line.clear();
	while (line.empty())
	{
		std::cout << "Enter Phone Number:\n";
		std::getline(std::cin, line);
		contactArr[i].setPhoneNumber(line);
	}
	line.clear();
	while (line.empty())
	{
		std::cout << "Enter Darkest Secret:\n";
		std::getline(std::cin, line);
		contactArr[i].setDarkestSecret(line);
	}
	line.clear();	i++;
}

void	PhoneBook::searchContact()
{
	int 		i = 0;
	int 		index;
	std::string line;

	if (contactArr[0].getFirstName().empty())
	{
		std::cout << "No contacts saved. Try using ADD to save some.\n";
		return;
	}
	std::cout << "     Index|First Name| Last Name|  Nickname|\n";
	while (i < 8 && !contactArr[i].getFirstName().empty())
	{
		std::cout.width(10); std::cout << i << "|";
		std::cout.width(10); std::cout << formatValue(contactArr[i].getFirstName()) << "|";
		std::cout.width(10); std::cout << formatValue(contactArr[i].getLastName()) << "|";
		std::cout.width(10); std::cout << formatValue(contactArr[i].getNickname()) << "|\n";
		i++;
	}
	std::cout << "Choose a contact to display\n";
	std::getline(std::cin, line);
	index = atoi(line.c_str());
	while(index > 7 || index < 0 || contactArr[index].getFirstName().empty())
	{
		std::cout << "Invalid index. Try again\n";
		std::getline(std::cin, line);
		index = atoi(line.c_str());
	}

	std::cout << "First Name: " << contactArr[index].getFirstName() << "\n";
	std::cout << "Last Name: " << contactArr[index].getLastName() << "\n";
	std::cout << "Nickname: " << contactArr[index].getNickname() << "\n";
	std::cout << "Darkest Secret: " << contactArr[index].getDarkestSecret() << "\n";
	std::cout << "Phone Number: " << contactArr[index].getPhoneNumber() << "\n";
}