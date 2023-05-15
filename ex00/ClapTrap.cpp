/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:05:41 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 19:59:27 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name(""), _hitpoints(10), _energy(10), _attack_damage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy(10), _attack_damage(0) {
    std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap& cpy) {
    std::cout << "ClapTrap " << _name << " copy constructor has been called" << std::endl;
	*this = cpy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
	if (this != &rhs) {
		_name = rhs._name;
		_energy = rhs._energy;
		_hitpoints = rhs._hitpoints;
		_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

void    ClapTrap::attack(const std::string& target) {
    if (_hitpoints > 0 && _energy > 0)
    {
        _energy -= 1;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    }
    else if (_hitpoints == 0)
        std::cout << "ClapTrap " << _name << " can't attack no hitpoints left" << std::endl;
    else if (_energy == 0)
        std::cout << "ClapTrap " << _name << " can't attack no energy left" << std::endl;
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (_hitpoints - amount < 0)
        _hitpoints = 0;
    else
        _hitpoints = _hitpoints - amount;
    std::cout << _name << " take " << amount << " damage" << std::endl;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (_energy == 0)
        std::cout << _name << " can't be repaired not enough energy" << std::endl;
    else if (_hitpoints == 0)
            std::cout << _name << " can't be repaired not enough hitpoints" << std::endl;
    else
    {
        _hitpoints += amount;
        _energy = _energy - 1;
        std::cout << _name << " regained " << amount << " hitpoints" << std::endl;
    }
    return ;
}

ClapTrap::~ClapTrap () {
    std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
    return ;
}