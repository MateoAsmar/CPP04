/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:23:27 by masmar            #+#    #+#             */
/*   Updated: 2025/02/10 13:25:28 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {
	public:
		std::string ideas[100];

		Brain();
		Brain(const Brain &other);
		~Brain();
		Brain &operator=(const Brain &other);
};

#endif
