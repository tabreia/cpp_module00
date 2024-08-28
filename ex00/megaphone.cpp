/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 18:51:29 by tabreia-          #+#    #+#             */
/*   Updated: 2023/06/28 18:51:33 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i = 1;
	int k = 0;

	if(ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (av[i])
	{
		k = 0;
		while (av[i][k])
		{
			av[i][k] = toupper(av[i][k]);
			k++;
		}
		i++;
	}
	i = 1;
	while (av[i])
	{
		std::cout << av[i];
		i++;
	}
	std::cout << "\n";
}
