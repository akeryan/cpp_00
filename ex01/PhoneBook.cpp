/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 22:16:59 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/14 22:48:22 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

using namespace std;

void PhoneBook::addContact(Contact contact) {
	contacts[0] = contact;
}

void PhoneBook::printContact(unsigned int index)
{
	if (index > 7)
		return ;
	cout << contacts[index].getFirstName() << "|";
	cout << contacts[index].getLastName() << "|";
	cout << contacts[index].getNickName() << "|";
	cout << contacts[index].getPhoneNumber() << "|";
	cout << contacts[index].getDarkestSecret() << "|";
	cout << endl;
}