/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnaka <rnaka@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:40:08 by rnaka             #+#    #+#             */
/*   Updated: 2023/11/19 20:46:29 by rnaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>


// ヘッダ <cctype> で定義
// 		
// int toupper( int ch );
// char を　intにキャストした上でtoupper

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (size_t i = 1; static_cast<int>(i) < argc; i++)
	{
		for (size_t j = 0; j < std::strlen(argv[i]); j++)
		{
			std::cout << static_cast<char>(std::toupper(argv[i][j]));
		}
		if (static_cast<int>(i) != argc - 1)
			std::cout << ' ';
	}
	std::cout << std::endl;
	return (0);
}
