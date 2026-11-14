
#include <iostream>
#include <vector> // kirjasto vektorin käyttöön
#include "Car.h"


//lähde: https://peatutor.com/cplus/index.php#objectlist

int main()
{
    // Luodaan Car olioita sisältävä vektori
    std::vector<Car> carList;

	// Lisätään kolme autoa vektoriin (merkki malli ja vuosimalli)
    carList.emplace_back("Volkswagen", "Golf GTI", 2001);
    carList.emplace_back("BMW", "330i", 2018);
    carList.emplace_back("Audi", "A4", 2020);

    // Tulostetaan listan toisen auton tiedot
    std::cout << "Listan toinen auto:" << std::endl;
    carList[1].printData();

    std::cout << std::endl;

	// for silmukka jolla tulostetaan kaikkien autojen tiedot
    std::cout << "Kaikki autot:" << std::endl;

    for (const Car& car : carList)
    {
        car.printData();
        std::cout << std::endl;
    }

    return 0;
}


//omia muistiinpanoja:

//Silmukka käy automaattisesti kaikki vektorin autot läpi.
//Car & tarkoittaa viittausta alkuperäiseen olioon, jolloin oliota ei kopioida.
//const estää olion tietojen muuttamisen silmukan sisällä.
//carList on läpikäytävä vektori.
