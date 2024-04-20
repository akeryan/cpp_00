/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 22:16:59 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/20 14:24:38 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	currentContactIndex = -1;
}

int	PhoneBook::getContactsLimit(void)
{
	return contactsLimit;
}

void PhoneBook::addContact(Contact contact) {
	if (currentContactIndex < contactsLimit - 1)
		currentContactIndex++;
	else
		currentContactIndex = 0;
	contacts[currentContactIndex] = contact;
}

int	PhoneBook::printContact(int index)
{
	if (index < 0 || index >= contactsLimit) {
		std::cout << "Error: index must be within [0 : " << PhoneBook::getContactsLimit() << ")" << std::endl;
		return 0;
	}
	if (contacts[index].getFirstName() == "") {
		std::cout << "The record under this index is empty" << std::endl;
		return 0;
	}
	std::cout << contacts[index].getFirstName() << std::endl;
	std::cout << contacts[index].getLastName() << std::endl;
	std::cout << contacts[index].getNickName() << std::endl;
	std::cout << contacts[index].getPhoneNumber() << std::endl;
	std::cout << contacts[index].getDarkestSecret() << std::endl;
	return 1;
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