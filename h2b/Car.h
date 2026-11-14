
#pragma once
#include <string>


// Aiheet: luokka, muodostin, vektori ja oliolista
// https://peatutor.com/cplus/index.php#objectlist

class Car
{
private:
    // Auton jäsenmuuttujat
    std::string brand;
    std::string model;
    int yearModel;

public:
    // Konstruktori auton tietojen alustamiseen
    Car(std::string, std::string, int);

    // Metodi auton tietojen tulostamiseen
    void printData() const;
};
