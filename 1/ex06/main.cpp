/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 09:54:04 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/06 14:33:44 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
  Harl myGoat;
  myGoat.complain("DEBUG");
  myGoat.complain("INFO");
  myGoat.complain("DEBUG");
  myGoat.complain("WARNING");
  myGoat.complain("WARNING");
  myGoat.complain("ERROR");
  myGoat.complain("notamessage");
}
