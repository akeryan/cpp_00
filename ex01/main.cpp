/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:35:31 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/14 22:02:42 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "include.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"

using namespace std;

int main () {
	//PhoneBook	book;
	string		command;

	while (1)
	{
		enterCommand(command);
		if (command == "ADD")
			addContact();
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

void addContact(void) {
	//string fName, lName, nName, dSecret, pNumber;

	//string entries[5];
	string callToAction[5] = {
		"Please enter first name", 
		"Please enter last name",
		"please enter nickname",
		"please enter phone number",
		"please enter darkest secret"
	};

	for (int i = 0; i < 5; i++) {
		cout << callToAction[i] << endl;
	}
}