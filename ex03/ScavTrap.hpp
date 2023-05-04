/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:03 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/04 11:06:38 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap:  virtual public ClapTrap
{
	public :
		ScavTrap(const std::string name);
		ScavTrap(void);
		ScavTrap(const ScavTrap & ct);
		~ScavTrap(void);

		ScavTrap &	operator=(const ScavTrap & rhs);

		void	attack(const std::string & target);
		void	guardGate(void);
};

#endif
