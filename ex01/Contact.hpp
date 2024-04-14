/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:10:30 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/14 22:04:01 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

using namespace std;

class Contact {
	public:
		bool setFirstName(string firstName);
		bool setLastName(string lastName);
		bool setNickName(string nickName);
		bool setDarkestSecret(string darkestSecret);
		bool setPhoneNumber(string phoneNumber);
		bool setContact(string firstName, string lastName, string nickName, string phoneNumber, string darkestSecret);
		const string& getFirstName(void);
		const string& getLastName(void);
		const string& getNickName(void);
		const string& getDarkestSecret(void);
		const string& getPhoneNumber(void);
		Contact(void);
	private:
		string	firstName;
		string	lastName;
		string	nickName;
		string	phoneNumber;
		string	darkestSecret;
		bool	isPhoneNumberValid(string phoneNumber);

};

#endif