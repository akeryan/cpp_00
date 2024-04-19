/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 22:16:59 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/19 20:43:16 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	currentContactIndex = -1;
}

void PhoneBook::addContact(Contact contact) {
	if (currentContactIndex < contactsLimit - 1)
		currentContactIndex++;
	else
		currentContactIndex = 0;
	contacts[currentContactIndex] = contact;
}

void PhoneBook::printContact(unsigned int index)
{
	std::string	str = "";
	char		currentChar;
	int			index;

	while (1) {
		std::cout << "Enter index between 0 and " << contactsLimit - 1 << std::endl;
		while (std::cin.get(currentChar) && currentChar != '\n')
			str += currentChar;
		std::stringstream ss(str);
		ss >> index;
		if (index < 0 || index >= contactsLimit) {
			ss.clear();
			ss.str("");
			index = 0;
		} else {
			if (contacts[index].getFirstName() == "")
				std::cout << "This record is empty, try another index" << std::endl;
			else
				break ;
		}
	}
	std::cout << contacts[index].getFirstName() << std::endl;
	std::cout << contacts[index].getLastName() << std::endl;
	std::cout << contacts[index].getNickName() << std::endl;
	std::cout << contacts[index].getPhoneNumber() << std::endl;
	std::cout << contacts[index].getDarkestSecret() << std::endl;
}

void PhoneBook::printAllContacts(void)
{
	std::stringstream ss;
	for (int i = 0; i < contactsLimit; i++) {
		if (contacts[i].getFirstName() != "") {
			ss << i;
			printString(ss.str());
			std::cout << '|';
			printString(contacts[i].getFirstName());
			std::cout << '|';
			printString(contacts[i].getLastName());
			std::cout << '|';
			printString(contacts[i].getNickName());
			std::cout << std::endl;
			ss.clear();
			ss.str("");
		}
	}
}

void PhoneBook::printString(std::string str)
{
	if (str.length() < columnWidth) {
		for (size_t i = 0; i < columnWidth - str.length(); i++)
			std::cout << " ";
		for (size_t i = 0; i < str.length(); i++)
			std::cout << str[i];
	} else {
		for (int i = 0; i < columnWidth - 1; i++) {
			std::cout << str[i];
		}
		std::cout << '.';
	}
}