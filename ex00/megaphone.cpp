/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:25:01 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/14 14:46:04 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

string trim(const std::string &str);

int main (int argc, char **argv)
{
	string	str;
	int			len;
	int			flag = 0;

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else {
		for (int i = 1; i < argc; i++) {
			str = trim(string(argv[i]));
			if (!str.empty())
			{
				if (flag == 1)
					cout << " ";
				len = str.length();
				for (int j = 0; j < len; j++)
					cout << (unsigned char)toupper(str[j]);
				flag = 1;
			}
		}
		if (flag == 1)
			cout << endl;
	}
	return 0;
}

string trim(const string &str)
{
	int	start = 0;
	int	end = str.length() - 1;				

	if (str.empty())
		return "";
	while (start < end && isspace((unsigned char)str[start]))
		start++;
	while (end > 0 && isspace((unsigned char)str[end]))
		end--;
	if (start > end)
		return "";
	return str.substr(start, end - start + 1);
}