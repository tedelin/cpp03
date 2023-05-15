/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:31:47 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 19:40:21 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap () : ClapTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap (std::string name) : ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
    return ;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
}

FragTrap::FragTrap(const FragTrap& cpy) {
    std::cout << "FragTrap " << _name << " copy constructor has been called" << std::endl;
	*this = cpy; 
}

void	FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << _name << " : HighFive ?" << std::endl;
	return ;
}

FragTrap::~FragTrap () {
	std::cout << "FragTrap " << _name << " destructor called" << std::endl;
	return ;
}