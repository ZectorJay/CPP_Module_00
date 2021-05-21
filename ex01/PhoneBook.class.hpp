/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:48:48 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/21 18:54:02 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>

class	PhoneBook {

public:

	std::string		search_index;

	PhoneBook( void );
	~PhoneBook(void);

	void	enter_command( void );
	int		check_command( void ) const;
	int		fill_phone_book( void );
	int		search_phone_book( void );
	void	change_contact( void );
	
private:

	void			_fill_info( void );
	void			_short_output( std::string str ) const;
	int				_index;	
	std::string		_command[8];
	std::string		_first_name[8];
	std::string		_second_name[8];
	std::string		_nickname[8];
	std::string		_login[8];
	std::string		_postal_adress[8];
	std::string		_email_adress[8];
	std::string		_phone_number[8];
	std::string		_birthday_date[8];
	std::string		_favorite_meal[8];
	std::string		_underwear_color[8];
	std::string		_darkest_secret[8];

};

#endif