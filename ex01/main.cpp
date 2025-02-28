/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:05:38 by masmar            #+#    #+#             */
/*   Updated: 2025/02/10 13:35:57 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	Animal *a = new Dog();
	Animal *b = new Cat();
	Animal *c = new Dog(*dynamic_cast<Dog*>(a));

	std::cout << a->getType() << " says: ";
	a->makeSound();

	std::cout << b->getType() << " says: ";
	b->makeSound();

	std::cout << c->getType() << " says: ";
	c->makeSound();

	delete a;
	delete b;
	delete c;

	return 0;
}

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();
// return 0;
// }
