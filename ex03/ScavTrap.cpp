/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:18:18 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 19:45:13 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap () : ClapTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
    return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& cpy) {
    std::cout << "ScavTrap " << _name << " copy constructor has been called" << std::endl;
	*this = cpy; 
}

void	ScavTrap::attack(const std::string& target) {
	 if (_hitpoints > 0 && _energy > 0)
    {
        _energy -= 1;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    }
    else if (_hitpoints == 0)
        std::cout << "ScavTrap " << _name << " can't attack no hitpoints left" << std::endl;
    else if (_energy == 0)
        std::cout << "ScavTrap " << _name << " can't attack no energy left" << std::endl;
    return ;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
	return ;
}

ScavTrap::~ScavTrap () {
	std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
	return ;
}