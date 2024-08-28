/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:56:20 by tabreia-          #+#    #+#             */
/*   Updated: 2023/06/30 19:56:20 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	Contact contactArr[8];
	public:
	PhoneBook();
	void	addContact();
	void	searchContact();
};





#endif