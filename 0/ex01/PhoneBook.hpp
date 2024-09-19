/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:06:54 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/19 15:58:27 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook(void);
	~PhoneBook(void);

	void	Add(void);
	void	Search(void);

private:
	int		index_list_contact;
	int		size_list_index;
	Contact	list_contact[8];

	std::string	TakeInput(std::string what);
	std::string	Format(std::string str);

};

#endif

