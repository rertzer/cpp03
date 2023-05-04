/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:01:03 by rertzer           #+#    #+#             */
/*   Updated: 2023/05/04 11:07:52 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap
{
	public :
		FragTrap(const std::string name);
		FragTrap(void);
		FragTrap(const FragTrap & ct);
		~FragTrap(void);

		FragTrap &	operator=(const FragTrap & rhs);

		void	highFivesGuys(void);
};

#endif
