/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 20:43:46 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/14 22:06:56 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_HPP
# define INCLUDE_HPP

# include <string>

typedef enum e_command { 
	ADD, 
	SEARCH, 
	EXIT 
} t_command;


void enterCommand(std::string& cmd);
void addContact(void);



#endif