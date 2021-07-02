/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:13:13 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/02 17:19:02 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main( void ){

	PhoneBook	my_phone_book;
	int			i;

	i = 1;
	while (i)
	{
		my_phone_book.enter_command();
		i = my_phone_book.check_command();
		if (i == 1)
			my_phone_book.fill_phone_book();
		else if (i == 2)
			my_phone_book.search_phone_book();
	}
	return (0);
}