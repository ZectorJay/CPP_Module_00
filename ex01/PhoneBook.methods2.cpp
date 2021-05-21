/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.methods2.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:16:18 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/21 18:56:17 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void	PhoneBook::_fill_info( void ){
	std::cout<<"\033[1;36mEnter first name: \033[0m";
	std::getline(std::cin, this->_first_name[this->_index]);
	std::cout<<"\033[1;36mEnter second name: \033[0m";
	std::getline(std::cin, this->_second_name[this->_index]);
	std::cout<<"\033[1;36mEnter nickname: \033[0m";
	std::getline(std::cin, this->_nickname[this->_index]);
	std::cout<<"\033[1;36mEnter login: \033[0m";
	std::getline(std::cin, this->_login[this->_index]);
	std::cout<<"\033[1;36mEnter postal_adress: \033[0m";
	std::getline(std::cin, this->_postal_adress[this->_index]);
	std::cout<<"\033[1;36mEnter email_adress: \033[0m";
	std::getline(std::cin, this->_email_adress[this->_index]);
	std::cout<<"\033[1;36mEnter phone_number: \033[0m";
	std::getline(std::cin, this->_phone_number[this->_index]);
	std::cout<<"\033[1;36mEnter birthday_date: \033[0m";
	std::getline(std::cin, this->_birthday_date[this->_index]);
	std::cout<<"\033[1;36mEnter favorite_meal: \033[0m";
	std::getline(std::cin, this->_favorite_meal[this->_index]);
	std::cout<<"\033[1;36mEnter underwear_color: \033[0m";
	std::getline(std::cin, this->_underwear_color[this->_index]);
	std::cout<<"\033[1;36mEnter darkest_secret: \033[0m";
	std::getline(std::cin, this->_darkest_secret[this->_index]);
	std::cout<<"\n"<<std::endl;
	this->_index += 1;
}

void	PhoneBook::_short_output( std::string str) const
{
	;
}

int		PhoneBook::search_phone_book( void ){
	int	i;

	i = -1;
	std::cout<<"\033[1;33m ________________________";
	std::cout<<"___________________"<<std::endl;
	std::cout<<"|  index   |first name|last name | nickname |"<<std::endl;
	std::cout<<"|----------|----------|----------|----------|"<<std::endl;
	while (++i < this->_index)
	{	
		std::cout<<"|  "<<i<<"  |"<<std::endl;
		this->_short_output( this->_first_name );
		this->_short_output( this->_last_name );
		this->_short_output( this->_nickname );
	}
	return (1);
}