/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:20:28 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 19:53:37 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap tst("John");
	ClapTrap cpy(tst);
	ClapTrap equal = ClapTrap();
	
	equal = tst;

    tst.beRepaired(5);
    tst.attack("Rick");
	cpy.attack("Rick");
	equal.attack("Rick");

    tst.takeDamage(15);
    tst.beRepaired(10);
    tst.attack("Rick");
}