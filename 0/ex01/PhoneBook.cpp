/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:07:15 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/18 14:29:29 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::string command;

	this->index_list_contact = 0;
	this->size_list_index = 0;
	while (1 + 1 - 1 * 1 / 1)
	{
		command.clear();
		std::getline(std::cin, command);
		if (!command.compare("ADD"))
			this->Add();
		else if (!command.compare("SEARCH"))
			this->Search();
		else if (!command.compare("EXIT"))
			return ;
	}
}

PhoneBook::~PhoneBook(void)
{
}

std::string	PhoneBook::TakeInput(std::string what)
{
	std::string	value;

	do
	{
		std::cout << "enter the " << what << " of this contact : ";
		value.clear();
		std::getline(std::cin, value);
	}
	while (value.empty());
	return (value);
}


void	PhoneBook::Add(void)
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phone;
	std::string secret;

	if (this->size_list_index < 8)
		this->size_list_index++;
	firstname = this->TakeInput("firstname");
	lastname = this->TakeInput("lastname");
	nickname = this->TakeInput("nickname");
	phone = this->TakeInput("phone");
	secret = this->TakeInput("secret");

	this->list_contact[index_list_contact].SetInfo(firstname, lastname, nickname, phone, secret);
	this->index_list_contact = (this->index_list_contact + 1) % 8;
}

std::string PhoneBook::Format(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
		return (str);
	}
	else
	{
		for (; str.length() != 10;)
			str.append(" ");
		return (str);
	}
	return (str);
}

void	PhoneBook::Search(void)
{
	std::string	str_index;

	if (this->size_list_index == 0)
	{
		std::cout << "no contact to search for." << std::endl;
		return ;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	for (int i = 0; i < this->size_list_index; i++)
	{
		str_index = "1";
		str_index[0] += i;
		std::cout
			<< "| " << "    " << str_index << "     "
			<< " | " << Format(list_contact[i].GetInfo()[0])
			<< " | " << Format(list_contact[i].GetInfo()[1])
			<< " | " << Format(list_contact[i].GetInfo()[2])
			<< " |" << std::endl;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	do
	{
		std::cout << "enter the id of the contact you want : ";
		str_index.clear();
		std::getline(std::cin, str_index);

	}
	while (str_index.length() != 1 || str_index[0] - '1' < 0 || str_index[0] - '1' > 8);
	for (int i = 0; i < 5; i++)
		std::cout << list_contact[str_index[0] - '1'].GetInfo()[i] << std::endl;
}
