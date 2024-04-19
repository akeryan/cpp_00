/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 22:16:59 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/19 14:42:06 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "PhoneBook.hpp"

using namespace std;

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
	if (index > contactsLimit - 1)
		return ;
	cout << contacts[index].getFirstName() << "|";
	cout << contacts[index].getLastName() << "|";
	cout << contacts[index].getNickName() << "|";
	cout << contacts[index].getPhoneNumber() << "|";
	cout << contacts[index].getDarkestSecret() << "|";
	cout << endl;
}

void PhoneBook::printAllContacts(void)
{
	stringstream ss;
	for (int i = 0; i <= currentContactIndex; i++) {
		ss << i;
		printString(ss.str());
		cout << '|';
		printString(contacts[i].getFirstName());
		cout << '|';
		printString(contacts[i].getLastName());
		cout << '|';
		printString(contacts[i].getNickName());
		cout << endl;
		ss.clear();
		ss.str("");
	}
}

void PhoneBook::printString(string str)
{
	if (str.length() < columnWidth) {
		for (size_t i = 0; i < columnWidth - str.length(); i++)
			cout << " ";
		for (size_t i = 0; i < str.length(); i++)
			cout << str[i];
	} else {
		for (int i = 0; i < columnWidth - 1; i++) {
			cout << str[i];
		}
		cout << '.';
	}
}