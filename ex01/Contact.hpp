/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:10:30 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/19 20:19:31 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
	public:
		bool setFirstName(std::string firstName);
		bool setLastName(std::string lastName);
		bool setNickName(std::string nickName);
		bool setDarkestSecret(std::string darkestSecret);
		bool setPhoneNumber(std::string phoneNumber);
		bool setContact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		const std::string& getFirstName(void);
		const std::string& getLastName(void);
		const std::string& getNickName(void);
		const std::string& getDarkestSecret(void);
		const std::string& getPhoneNumber(void);
		Contact(void);
		Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
		bool	isPhoneNumberValid(std::string phoneNumber);

};

#endif