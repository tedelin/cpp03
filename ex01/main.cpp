/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:20:28 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 17:29:46 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void) {
    ScavTrap tst("Paul");

    tst.beRepaired(5);
    tst.attack("John");

    tst.takeDamage(15);
    tst.beRepaired(10);
    tst.attack("Jean");
	tst.guardGate();
}