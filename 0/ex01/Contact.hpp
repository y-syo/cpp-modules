/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:08:02 by mmoussou          #+#    #+#             */
/*   Updated: 2024/09/18 11:54:23 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact {

public:
	Contact(void);

	~Contact(void);

	void SetInfo(
		std::string firstname,
		std::string lastname,
		std::string nickname,
		std::string phone,
		std::string secret
	);
	std::string	*GetInfo(void);

private:
	std::string	info[5];
};

#endif
