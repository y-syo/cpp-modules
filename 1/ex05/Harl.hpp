/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 09:53:01 by mmoussou          #+#    #+#             */
/*   Updated: 2024/11/22 09:53:42 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Harl {

public:
  Harl(void);
  ~Harl(void);

  void complain(std::string level);

private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);

};
