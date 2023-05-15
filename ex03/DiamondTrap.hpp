/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:48:18 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 19:20:54 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap    (const DiamondTrap &cpy);
        DiamondTrap& operator=(const DiamondTrap& rhs);
		
		void attack(const std::string& target);
		void whoAmI();
	
	private:
		std::string	getName() const;
		std::string _name;
		
};

#endif