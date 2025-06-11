/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:14:43 by hes-safi          #+#    #+#             */
/*   Updated: 2025/03/21 00:16:51 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		bool			init;
		AMateria		*slots[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		~MateriaSource();
		MateriaSource	&operator=(const MateriaSource &obj);
		void			learnMateria(AMateria *m);
		AMateria		*createMateria(std::string const &type);
		void			initSlots();
		void			clearSlots();
};

#endif