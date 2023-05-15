/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:48:16 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 19:20:22 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap () : ClapTrap() {
    std::cout << "DiamondTrap default constructor called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap (std::string name) : ClapTrap((name + "_clap_name"), 100, 50, 30), _name(name) {
    std::cout << "DiamondTrap constructor called" << std::endl;
    return ;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
	ClapTrap::operator=(rhs);
	_name = rhs.getName();
	return (*this);
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

std::string	DiamondTrap::getName() const {
	return (this->_name);
}

void	DiamondTrap::whoAmI() {
	std::cout << "My name: " << _name << ", My ClapTrap name: " << ClapTrap::_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& cpy) {
    std::cout << "DiamondTrap copy constructor has been called" << std::endl;
	*this = cpy; 
}

DiamondTrap::~DiamondTrap () {
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}