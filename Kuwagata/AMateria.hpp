/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 23:43:43 by hes-safi          #+#    #+#             */
/*   Updated: 2025/03/21 00:25:14 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string			type;
	public:
		AMateria();
		AMateria(const AMateria &obj);
		AMateria(const std::string &type);
		virtual ~AMateria();
		AMateria			&operator=(const AMateria &obj);
		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif