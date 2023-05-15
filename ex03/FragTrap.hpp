/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:31:45 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 18:09:33 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
        ~FragTrap();
        FragTrap    (const FragTrap &cpy);
        FragTrap& operator=(const FragTrap& rhs);
		
		void	highFivesGuys( void );
};

#endif