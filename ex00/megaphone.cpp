/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:25:01 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/13 19:49:06 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string trim(const std::string &str)
{
	int	start = 0;
	int	end = str.length() - 1;				

	if (str.empty())
		return "";
	while (start < end && std::isspace((unsigned char)str[start]))
		start++;
	while (end > 0 && std::isspace((unsigned char)str[end]))
		end--;
	if (start > end)
		return "";
	return str.substr(start, end - start + 1);
}

int main (int argc, char **argv)
{
	std::string	str;
	int			len;
	int			flag = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else {
		for (int i = 1; i < argc; i++) {
			str = trim(std::string(argv[i]));
			if (!str.empty())
			{
				if (flag == 1)
					std::cout << " ";
				len = str.length();
				for (int j = 0; j < len; j++)
					std::cout << (unsigned char)std::toupper(str[j]);
				flag = 1;
			}
		}
		if (flag == 1)
			std::cout << std::endl;
	}
	return 0;
}
