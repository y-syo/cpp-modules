/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoussou <mmoussou@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:36:54 by mmoussou          #+#    #+#             */
/*   Updated: 2025/01/14 05:27:33 by mmoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap test1;
	ScavTrap test2("scav");
	ScavTrap test3("INVALID");
	ScavTrap test4(test2);
	ScavTrap test5("SUP3R-SV-TP");

	test3 = test1;
	test1.attack("test dummy");
	test2.attack("test dummy");
	test3.attack("lord test dummy the 2nd");
	test4.attack("lord test dummy the 2nd");
	test1.takeDamage(9);
	test2.takeDamage(100);
	test2.attack("test dummy");
	test4.beRepaired(50);
	test3.beRepaired(100);
	test1.takeDamage(10);
	test2.takeDamage(1);
	for (int i = 0; i < 49; i++){
		test5.beRepaired(1);
	}
	test5.takeDamage(10);
	test5.ClapTrap::attack("ClapTrap's dummy");
	test1.guardGate();
	test1.guardGate();
	test2.guardGate();
	test2.guardGate();
	test3.guardGate();
	test3.guardGate();
	test4.guardGate();
	test4.guardGate();
	test5.guardGate();
	test5.guardGate();
	return 0;
}
