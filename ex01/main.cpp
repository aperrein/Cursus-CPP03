/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:21:18 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/11 11:21:20 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int         main(void)
{
    ScavTrap       a;
    ScavTrap       b("testb");

    b.attack("target");
    b.takeDamage(5);
    b.guardgate();
    b.beRepaired(2);
    b.takeDamage(500);
    b.guardgate();

    return (0);
}
