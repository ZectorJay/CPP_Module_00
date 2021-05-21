/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.methods.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 11:14:57 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/21 20:08:13 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) {
	this->_index = 0;
	this->_total_contacts = 0;
	std::cout<<"Let's get started!"<<std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ) {
	std::cout<<"Exiting Phone Book...\nGoodbye"<<std::endl;
	return ;
}

void		PhoneBook::enter_command( void ) {
	std::cout<<"\033[1;92mavailable commands: ADD, SEARCH, EXIT. Case sensetive"<<std::endl;
	std::cout<<"\033[1;36mEnter command: \033[0m";
	std::getline(std::cin, this->_command);
	return ;
}

int		PhoneBook::check_command( void ) const{
	if (this->_command.compare("EXIT") == 0)
		return (0);
	if (this->_command.compare("ADD") == 0)
		return (1);
	else if (this->_command.compare("SEARCH") == 0)
		return (2);
	else
	{
		std::cout<<std::endl;
		std::cout<<"\033[1;31mYou entered wrong commad, try again"<<std::endl;
		std::cout<<"\033[0m";
	}
	return (-1);
}

int		PhoneBook::fill_phone_book( void ) {
	this->_fill_contact_info();
	return (1);
}