/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:21:08 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/11 11:21:11 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
    protected:

    const unsigned int    _scav_ep;

    public:

    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(ScavTrap const & copy);
    ScavTrap &     operator=(ScavTrap const & rhs);

    void            guardgate(void);
    void            attack(const std::string& target);
    unsigned int    getScavep();
    
};

#endif
