/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:09:46 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/14 22:06:30 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

using namespace std;

class PhoneBook {
	Contact contacts[8];

	public:
		void setContact(string firstName, string lastName, string nickName, string phoneNumber, string darkestSecret);
		void setContact(Contact contact);
};

#endif