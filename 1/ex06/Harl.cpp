/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 09:53:57 by mmoussou          #+#    #+#             */
/*   Updated: 2024/11/22 09:54:01 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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
  bool start_talking = false;

  std::cout << "level: " << level << std::endl;
  for (int i = 0; i < 4; i++)
   {
     if (level == levels[i])
       start_talking = true;
     if (start_talking)
       (this->*func_ptr[i])();
   }
  std::cout << std::endl;
}
