/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:16:18 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/02 17:23:09 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
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

int             PhoneBook::_change_contact( void ){
        std::string             answer;
        std::cout<<"\033[1;31m\n Contact list is full, do u ";
        std::cout<<"want rewrite some1?"<<std::endl;
        std::cout<<"Write index of contact if you want to change it"<<std::endl;
        std::cout<<"    Any another input will mean NO CHANGES\033[0m"<<std::endl;
        std::getline(std::cin, answer);
        if (isdigit(answer[0]) && answer[0] >= '0' && answer[0] < '9'){
                this->_index = answer[0] & 0x0F;
                return (1);
        }
        return (0);
}

void    PhoneBook::_fill_contact_info( void ){
        if (this->_total_contacts == 8)
        {
                        if (!this->_change_contact())
                                return ;
        }
        std::cout<<"\033[1;36mEnter first name: \033[0m";
        std::getline(std::cin, this->_first_name[this->_index]);
        std::cout<<"\033[1;36mEnter second name: \033[0m";
        std::getline(std::cin, this->_last_name[this->_index]);
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
        if (this->_total_contacts < 8)
                this->_total_contacts +=1;
}

void    PhoneBook::_short_output( std::string str) const{
        int     i;

        i = str.length();
        if (i > 10)
                std::cout<<str.substr(0, 9)<<".|";
        else{
                std::cout.width(10);
                std::cout<<str<<"|";
        }
}

void    PhoneBook::_color_output( std::string field, std::string str ) const {
        std::cout<<"\033[1;38;2;0;255;0m"<<field<<": \033[0m";
        std::cout.width(30 - field.length());
        std::cout.fill('_');
        std::cout<<str<<std::endl;
}

void    PhoneBook::_search_contact( void ){
        std::string             answer;
        int                             i;

        std::cout<<"\033[1;3mDo you want to get more information about some contact?"<<std::endl;
        std::cout<<"     Write INDEX of that contact if YES"<<std::endl;
        std::cout<<"       Any another input will mean NO\033[0m"<<std::endl;
        std::getline(std::cin, answer);
        if (isdigit(answer[0]) && answer[0] >= '0'
                && (answer[0] & 0x0F) < this->_total_contacts)
        {
                i = answer[0] & 0x0F;
                this->_color_output("first name", this->_first_name[i]);
                this->_color_output("last name", this->_last_name[i]);
                this->_color_output("nickname", this->_nickname[i]);
                this->_color_output("login", this->_login[i]);
                this->_color_output("postal adress", this->_postal_adress[i]);
                this->_color_output("email adress", this->_email_adress[i]);
                this->_color_output("phone number", this->_phone_number[i]);
                this->_color_output("birthday date", this->_birthday_date[i]);
                this->_color_output("favorite meal", this->_favorite_meal[i]);
                this->_color_output("underwear color", this->_underwear_color[i]);
                this->_color_output("darkest secret", this->_darkest_secret[i]);
        }
        std::cout<<"Returning in main menu..."<<std::endl;
}

int             PhoneBook::search_phone_book( void ){
        int     i;

        i = -1;
        std::cout<<"\033[1;33m ________________________";
        std::cout<<"___________________"<<std::endl;
        std::cout<<"|  index   |first name|last name | nickname |"<<std::endl;
        std::cout<<"|----------|----------|----------|----------|"<<std::endl;
        while (++i < this->_total_contacts){
                std::cout<<"|     "<<i<<"    |";
                this->_short_output( this->_first_name[i] );
                this->_short_output( this->_last_name[i] );
                this->_short_output( this->_nickname[i] );
                std::cout<<std::endl;
        if (i < this->_total_contacts - 1)
                std::cout<<"|----------|----------|----------|----------|"<<std::endl;
        }
        std::cout<<" ▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔"<<std::endl;
        std::cout<<"\033[0m"<<std::endl;
        this->_search_contact();
        return (1);
}