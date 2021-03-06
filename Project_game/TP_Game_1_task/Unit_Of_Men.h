#include <iostream>
#pragma once

using namespace std;

// Юниты людей
class Unit_of_men {
public:
    virtual void info() = 0;

    virtual void attack() = 0;

    virtual void defend() = 0;

    virtual ~Unit_of_men() = default;

};

class Men_infantry : public Unit_of_men {
public:
    void info() override {
        cout << "  This is Men_infantry" << endl;
    }

    void attack() override {
        cout << "Men_infantry attacking in closely battle!" << endl;
    }

    void defend() override {
        cout << "Men_infantry defend!" << endl;
    }

};

class Men_arbalesters : public Unit_of_men {
public:
    void info() override {
        cout << "  This is Men_arbalesters" << endl;
    }

    void attack() override {
        cout << "Men_arbalesters attacking in a long battle!" << endl;
    }

    void defend() override {
        cout << "Men_arbalesters defend!" << endl;
    }
};

class Men_cavalry : public Unit_of_men {
public:
    void info() override {
        cout << "  This is Men_cavalry" << endl;
    }

    void attack() override {
        cout << "Men_cavalry attacking in a long battle!" << endl;
    }

    void defend() override {
        cout << "Men_cavalry defend!" << endl;
    }
};