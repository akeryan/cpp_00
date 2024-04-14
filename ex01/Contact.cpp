/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:15:19 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/14 22:36:21 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

using namespace std;

Contact::Contact(void)
{
	firstName = "";
	lastName = "";
	nickName = "";
	darkestSecret = "";
	phoneNumber = "";
}

Contact::Contact(string firstName, string lastName, string nickName, string phoneNumber, string darkestSecret) {
	setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
}

bool Contact::setContact(string firstName, string lastName, string nickName, string phoneNumber, string darkestSecret) {
	if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty() || darkestSecret.empty())
	{
		cout << "Error: entry cannot be an empty string" << endl;
		return false;
	}
	if (!isPhoneNumberValid(phoneNumber))
	{
		cout << "Error: please enter a valid 7-digit phone number" << endl;
		return false;
	}
	setFirstName(firstName);
	setLastName(lastName);
	setNickName(nickName);
	setPhoneNumber(phoneNumber);
	setDarkestSecret(darkestSecret);
	return true;
}

bool Contact::setFirstName(string firstName) {
	if (firstName.empty())
		return false;
	this->firstName = firstName;
	return true;
}

const string& Contact::getFirstName(void) {
	return firstName;
}

bool Contact::setLastName(string lastName) {
	if (lastName.empty())
		return false;
	this->lastName = lastName;
	return true;
}

const string& Contact::getLastName(void) {
	return lastName;
}

bool Contact::setNickName(string nickName) {
	if (nickName.empty())
		return false;
	this->nickName = nickName;
	return true;
}

const string& Contact::getNickName(void) {
	return nickName;
}

bool Contact::setDarkestSecret(string darkestSecret) {
	if (darkestSecret.empty())
		return false;
	this->darkestSecret = darkestSecret;
	return true;
}

const string& Contact::getDarkestSecret(void) {
	return darkestSecret;
}

bool Contact::setPhoneNumber(string phoneNumber) {

	if (phoneNumber.empty() || !isPhoneNumberValid(phoneNumber))
		return false;
	this->phoneNumber = phoneNumber;
	return true;
}

const string& Contact::getPhoneNumber(void) {
	return phoneNumber;
}

bool Contact::isPhoneNumberValid(string phoneNumber)
{
	if (phoneNumber.empty() || phoneNumber.length() != 7)
		return false;
	for (size_t i = 0; i < phoneNumber.length(); i++) {
		if (!isdigit(phoneNumber[i]))
			return false;
	}
	return true;
}
