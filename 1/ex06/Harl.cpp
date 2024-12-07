/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 09:53:57 by mmoussou          #+#    #+#             */
/*   Updated: 2024/12/06 13:27:28 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#define fallthrough __attribute__((fallthrough))

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::debug(void)
{
  std::cout << "\x1B[1;34m[DEBUG] "
    << "helo"
    << "\x1B[0m" << std::endl;
}

void Harl::info(void)
{
  std::cout << "\x1B[1;32m[INFO] "
    << "@everyone"
    << "\x1B[0m" << std::endl;
}

void Harl::warning(void)
{
  std::cout << "\x1B[1;33m[WARNING]"
    << "wahoo"
    << "\x1B[0m" << std::endl;
}

void Harl::error(void)
{
  std::cout << "\x1B[1;31m[ERROR] "
    << "sadge"
    << "\x1B[0m" << std::endl;
}

void Harl::complain(std::string level)
{
  void (Harl::*func_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

  std::cout << "level: " << level << std::endl;

	int index = -1;
	for (int i = 0; i < 4; ++i)
	{
	  if (levels[i] == level)
		index = i;
	}

  switch (index)
	{
	case 0: (this->*func_ptr[0])(); fallthrough;
	case 1: (this->*func_ptr[1])(); fallthrough;
	case 2: (this->*func_ptr[2])(); fallthrough;
	case 3: (this->*func_ptr[3])(); break; fallthrough;
	default: std::cout << "[ Probably complaining about insignificant problems ]";
	}
  std::cout << std::endl;
}
