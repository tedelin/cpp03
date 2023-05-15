/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:20:28 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/05 15:23:07 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap tst("Test");

    tst.beRepaired(5);
    tst.attack("Test 2");

    tst.takeDamage(15);
    tst.beRepaired(10);
    tst.attack("Test 2");
}