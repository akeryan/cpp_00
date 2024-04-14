/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 20:43:46 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/14 22:54:09 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_HPP
# define INCLUDE_HPP

# include <string>
# include "PhoneBook.hpp"

void enterCommand(std::string& cmd);
void addContact(PhoneBook& book);
bool isPhoneNumberValid(string phoneNumber);

#endif