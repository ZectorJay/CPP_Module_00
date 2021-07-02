/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:48:48 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/02 17:22:52 by hmickey          ###   ########.fr       */
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
	
private:

	void    		_color_output( std::string field, std::string str ) const;
	void			_fill_contact_info( void );
	void			_short_output( std::string str ) const;
	void			_search_contact( void );
	int				_change_contact( void );
	int				_index;
	int				_total_contacts;
	std::string		_command;
	std::string		_first_name[8];
	std::string		_last_name[8];
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