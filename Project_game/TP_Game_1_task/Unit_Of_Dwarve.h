#include <iostream>
#pragma once

using namespace std;

// Юниты гномов
class Unit_of_dwarves {
public:
    virtual void info() = 0;

    virtual void attack() = 0;

    virtual void defend() = 0;

    virtual ~Unit_of_dwarves() = default;

};

class Dwarves_infantry : public Unit_of_dwarves {
public:
    void info() override {
        cout << "  This is Dwarves_infantry" << endl;
    }

    void attack() override {
        cout << "Dwarves_infantry attacking in closely battle!" << endl;
    }

    void defend() override {
        cout << "Dwarves_infantry defend!" << endl;
    }

};

class Dwarves_arbalesters : public Unit_of_dwarves {
public:
    void info() override {
        cout << "  This is Dwarves_arbalesters" << endl;
    }

    void attack() override {
        cout << "Dwarves_arbalesters attacking in a long battle!" << endl;
    }

    void defend() override {
        cout << "Dwarves_arbalesters defend!" << endl;
    }
};

class Dwarves_cavalry : public Unit_of_dwarves {
public:
    void info() override {
        cout << "  This is Dwarves_cavalry" << endl;
    }

    void attack() override {
        cout << "Dwarves_cavalry attacking in a long battle!" << endl;
    }

    void defend() override {
        cout << "Dwarves_cavalry defend!" << endl;
    }
};