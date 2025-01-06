/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 09:53:57 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/06 14:33:29 by mmoussou         ###   ########.fr       */
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
    << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
    << "\x1B[0m" << std::endl;
}

void Harl::info(void)
{
  std::cout << "\x1B[1;32m[INFO] "
    << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
    << "\x1B[0m" << std::endl;
}

void Harl::warning(void)
{
  std::cout << "\x1B[1;33m[WARNING]"
    << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
    << "\x1B[0m" << std::endl;
}

void Harl::error(void)
{
  std::cout << "\x1B[1;31m[ERROR] "
    << "This is unacceptable! I want to speak to the manager now."
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
