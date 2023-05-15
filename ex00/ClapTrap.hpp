/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:09:46 by tedelin           #+#    #+#             */
/*   Updated: 2023/05/15 19:49:44 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <string>

class ClapTrap {
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap    (const ClapTrap &cpy);
        ClapTrap& operator=(const ClapTrap& rhs);

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
    
    private:
        std::string _name;
        unsigned int    _hitpoints;
        unsigned int    _energy;
        unsigned int    _attack_damage;
};

#endif