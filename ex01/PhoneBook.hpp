/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:09:46 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/14 22:38:58 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

using namespace std;

class PhoneBook {
	Contact contacts[8];

	public:
		//void addContact(string firstName, string lastName, string nickName, string phoneNumber, string darkestSecret);
		void addContact(Contact contact);
		void printContact(unsigned int index);
};

#endif