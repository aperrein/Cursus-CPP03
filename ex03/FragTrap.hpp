/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:45:48 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/13 10:45:50 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
    public:

    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(FragTrap const & copy);
    FragTrap &     operator=(FragTrap const & rhs);

    void            highFivesGuys(void);
    void            attack(const std::string& target);
};

#endif
