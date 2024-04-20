/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:09:46 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/20 13:43:46 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	static const unsigned char	contactsLimit = 8;
	static const unsigned char	columnWidth = 10;
	unsigned char				currentContactIndex;
	Contact						contacts[contactsLimit];

	void printString(std::string str);

	public:
		PhoneBook(void);
		int		getContactsLimit(void);
		void 	addContact(Contact contact);
		int 	printContact(int index);
		void	printAllContacts(void);
};

#endif