/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:15:19 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/19 20:16:01 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact(void)
{
	firstName = "";
	lastName = "";
	nickName = "";
	darkestSecret = "";
	phoneNumber = "";
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret) {
	setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
}

bool Contact::setContact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret) {
	if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty() || darkestSecret.empty())
	{
		std::cout << "Error: entry cannot be an empty string" << std::endl;
		return false;
	}
	if (!isPhoneNumberValid(phoneNumber))
	{
		std::cout << "Error: please enter a valid 7-digit phone number" << std::endl;
		return false;
	}
	setFirstName(firstName);
	setLastName(lastName);
	setNickName(nickName);
	setPhoneNumber(phoneNumber);
	setDarkestSecret(darkestSecret);
	return true;
}

bool Contact::setFirstName(std::string firstName) {
	if (firstName.empty())
		return false;
	this->firstName = firstName;
	return true;
}

const std::string& Contact::getFirstName(void) {
	return firstName;
}

bool Contact::setLastName(std::string lastName) {
	if (lastName.empty())
		return false;
	this->lastName = lastName;
	return true;
}

const std::string& Contact::getLastName(void) {
	return lastName;
}

bool Contact::setNickName(std::string nickName) {
	if (nickName.empty())
		return false;
	this->nickName = nickName;
	return true;
}

const std::string& Contact::getNickName(void) {
	return nickName;
}

bool Contact::setDarkestSecret(std::string darkestSecret) {
	if (darkestSecret.empty())
		return false;
	this->darkestSecret = darkestSecret;
	return true;
}

const std::string& Contact::getDarkestSecret(void) {
	return darkestSecret;
}

bool Contact::setPhoneNumber(std::string phoneNumber) {

	if (phoneNumber.empty() || !isPhoneNumberValid(phoneNumber))
		return false;
	this->phoneNumber = phoneNumber;
	return true;
}

const std::string& Contact::getPhoneNumber(void) {
	return phoneNumber;
}

bool Contact::isPhoneNumberValid(std::string phoneNumber)
{
	if (phoneNumber.empty() || phoneNumber.length() != 7)
		return false;
	for (size_t i = 0; i < phoneNumber.length(); i++) {
		if (!isdigit(phoneNumber[i]))
			return false;
	}
	return true;
}
