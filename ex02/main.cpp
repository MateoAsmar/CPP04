/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masmar <masmar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:05:38 by masmar            #+#    #+#             */
/*   Updated: 2025/02/10 15:51:56 by masmar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    Animal* animals[4];

    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();
    for (int i = 2; i < 4; i++)
        animals[i] = new Cat();

    std::cout << "\n--- Testing deep copies ---" << std::endl;
    
    Dog originalDog;
    Dog copyDog = originalDog;

    Cat originalCat;
    Cat copyCat = originalCat;

    std::cout << "\n--- Destroying animals ---" << std::endl;
    for (int i = 0; i < 4; i++)
        delete animals[i];

    return 0;
}


