/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 13:02:49 by hmickey           #+#    #+#             */
/*   Updated: 2021/05/18 16:27:18 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv){
	int	i, j;

	i = 0;
	if (argc == 1){
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return (0);
	}
	while (++i < argc){
		j = -1;
		while (argv[i][++j])
			argv[i][j] = toupper(argv[i][j]);
	}
	i = 0;
	while (argv[++i])
		std::cout<<argv[i]<<" ";
	std::cout<<std::endl;
	return (0);
}