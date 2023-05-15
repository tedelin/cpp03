/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:20:28 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 19:37:31 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main(void) {
    DiamondTrap tst("Rick");
	DiamondTrap cpy(tst);
	
	tst.whoAmI();
	cpy.whoAmI();
	cpy = tst;
	cpy.whoAmI();
	tst.attack("John");
}