/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:20:28 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 19:31:33 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main(void) {
    FragTrap tst("Paul");

    tst.highFivesGuys();
	tst.takeDamage(100);
	tst.beRepaired(10);
}