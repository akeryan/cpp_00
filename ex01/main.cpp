/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:35:31 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/19 14:20:00 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "include.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

using namespace std;

int main () {
	PhoneBook	book;
	string		command;

	while (1)
	{
		enterCommand(command);
		if (command == "ADD")
			addContact(book);
		else if (command == "SEARCH")
			//book.printAllContacts();
			book.printAllContacts();
		else if (command == "EXIT")
			break;
	}
	return 0;
}

void enterCommand(string& cmd) {
	char	currentChar;

	while (1) {
		cmd = "";
		cout << "What you want to do? (ADD, SEARCH, or EXIT)" << endl;
		while (cin.get(currentChar) && currentChar != '\n')
			cmd += currentChar;
		if (cmd == "ADD" || cmd == "SEARCH" || cmd == "EXIT")
			break ;
		else
			cout << "\"" << cmd << "\"" << " is a wrong command" << endl;
	}
}

void addContact(PhoneBook& book) {
	char	currentChar;
	string	entries[5];
	string	callToAction[5] = {
		"first name", 
		"last name",
		"nickname",
		"7-digit phone number",
		"darkest secret"
	};

	for (int i = 0; i < 5; i++) {
		while (1) {
			entries[i] = "";
			cout << "Please enter " << callToAction[i] << endl;
			while (cin.get(currentChar) && currentChar != '\n')
				entries[i] += currentChar;
			if (entries[i] == "")
				cout << callToAction[i] << " cannot be an empty string" << endl;
			else if (i == 3 && !isPhoneNumberValid(entries[i]))
				cout << entries[i] << " is not a valid phone number" << endl; 
			else
				break ;
		}
	}
	book.addContact(Contact(entries[0], entries[1], entries[2], entries[3], entries[4]));
}

bool isPhoneNumberValid(string phoneNumber)
{
	if (phoneNumber.empty() || phoneNumber.length() != 7)
		return false;
	for (size_t i = 0; i < phoneNumber.length(); i++) {
		if (!isdigit(phoneNumber[i]))
			return false;
	}
	return true;
}