/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:09:46 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/19 20:18:36 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	static const unsigned char contactsLimit = 8;
	static const unsigned char columnWidth = 10;
	unsigned char currentContactIndex;
	Contact contacts[contactsLimit];

	void printString(std::string str);

	public:
		PhoneBook(void);
		//void addContact(string firstName, string lastName, string nickName, string phoneNumber, string darkestSecret);
		void addContact(Contact contact);
		void printContact(unsigned int index);
		void printAllContacts(void);
};

#endif