/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:35:31 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/19 20:20:08 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "include.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main () {
	PhoneBook	book;
	std::string		command;

	while (1)
	{
		enterCommand(command);
		if (command == "ADD")
			addContact(book);
		else if (command == "SEARCH") {
			book.printAllContacts();
		}
		else if (command == "EXIT")
			break;
	}
	return 0;
}

void enterCommand(std::string& cmd) {
	char	currentChar;

	while (1) {
		cmd = "";
		std::cout << "What you want to do? (ADD, SEARCH, or EXIT)" << std::endl;
		while (std::cin.get(currentChar) && currentChar != '\n')
			cmd += currentChar;
		if (cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT")
			break ;
		else
			std::cout << "\"" << cmd << "\"" << " is a wrong command" << std::endl;
	}
}

void addContact(PhoneBook& book) {
	char	currentChar;
	std::string	entries[5];
	const std::string	phrase[5] = {
		"first name", 
		"last name",
		"nickname",
		"7-digit phone number",
		"darkest secret"
	};

	for (int i = 0; i < 5; i++) {
		while (1) {
			entries[i] = "";
			std::cout << "Please enter " << phrase[i] << std::endl;
			while (std::cin.get(currentChar) && currentChar != '\n')
				entries[i] += currentChar;
			if (entries[i] == "")
				std::cout << phrase[i] << " cannot be an empty string" << std::endl;
			else if (i == 3 && !isPhoneNumberValid(entries[i]))
				std::cout << entries[i] << " is not a valid phone number" << std::endl; 
			else
				break ;
		}
	}
	book.addContact(Contact(entries[0], entries[1], entries[2], entries[3], entries[4]));
}

bool isPhoneNumberValid(std::string phoneNumber)
{
	if (phoneNumber.empty() || phoneNumber.length() != 7)
		return false;
	for (size_t i = 0; i < phoneNumber.length(); i++) {
		if (!isdigit(phoneNumber[i]))
			return false;
	}
	return true;
}