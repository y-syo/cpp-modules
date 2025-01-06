/* **************************** */
/*                              */
/*          :::      ::::::::   */
/*        :+:      :+:    :+:   */
/*      +:+ +:+         +:+     */
/*    +#+  +:+       +#+        */
/*  +#+#+#+#+#+   +#+           */
/*       #+#    #+#             */
/*      ###   ########.bzh      */
/*                              */
/* **************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	//std::cout << "Contact created." << std::endl;
}

Contact::~Contact(void)
{
	//std::cout << "Contact destroyed." << std::endl;
}

void	Contact::SetInfo(
					std::string firstname,
					std::string lastname,
					std::string nickname,
					std::string phone,
					std::string secret
)
{
	this->info[0] = firstname;
	this->info[1] = lastname;
	this->info[2] = nickname;
	this->info[3] = phone;
	this->info[4] = secret;
}

std::string	*Contact::GetInfo(void)
{
	return (this->info);
}
