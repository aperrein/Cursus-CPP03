/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:42:26 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/11 09:42:27 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int             main(void)
{
    ClapTrap        c1("c1");
    ClapTrap        c2(c1);
    ClapTrap        c3;

    c1.attack("c3");
    c3.takeDamage(0);

    std::cout << "exemples\n";

    c1.takeDamage(3);
    c1.beRepaired(2);
    c1.takeDamage(10);
    c1.attack("test");
    c1.beRepaired(1);


    return (0);
}