/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:38:42 by tabreia-          #+#    #+#             */
/*   Updated: 2023/06/30 19:38:42 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

std::string	Contact::getFirstName()
{
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickname()
{
	return (this->nickname);
}

std::string	Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}

void	Contact::setFirstName(std::string value)
{
	this->firstName = value;
}

void	Contact::setLastName(std::string value)
{
	this->lastName = value;
}

void	Contact::setNickname(std::string value)
{
	this->nickname = value;
}

void	Contact::setPhoneNumber(std::string value)
{
	this->phoneNumber = value;
}

void	Contact::setDarkestSecret(std::string value)
{
	this->darkestSecret = value;
}