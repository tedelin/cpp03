/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:18:21 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 18:09:40 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap    (const ScavTrap &cpy);
        ScavTrap& operator=(const ScavTrap& rhs);
		
		void	attack(const std::string& target);
		void	guardGate( void );
};

#endif