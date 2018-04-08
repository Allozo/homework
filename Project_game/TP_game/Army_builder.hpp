#include <vector>
#include "Factory_Of_Men.h"
#include "Factory_Of_Dwarves.h"
#include "Factory_Of_Elf.h"

class Army {
public:
    // содержит все типы боевых единиц всех фракций //
    vector<Men_infantry> vector_men_infantry;
    vector<Men_arbalesters> vector_men_arbalesters;
    vector<Men_cavalry> vector_men_cavalry;

    vector<Dwarves_infantry> vector_dwarves_infantry;
    vector<Dwarves_arbalesters> vector_dwarves_arbalesters;
    vector<Dwarves_cavalry> vector_dwarves_cavalry;

    vector<Elfs_infantry> vector_elfs_infantry;
    vector<Elfs_arbalesters> vector_elfs_arbalesters;
    vector<Elfs_cavalry> vector_elfs_cavalry;

    void info() {
        cout << "Number men infantry is " << vector_men_infantry.size() << endl;
        for (int i = 0; i < vector_men_infantry.size(); i++)
            vector_men_infantry[i].info();
        cout << "Number men arbalesters is " << vector_men_arbalesters.size() << endl;
        for (int i = 0; i < vector_men_arbalesters.size(); i++)
            vector_men_arbalesters[i].info();
        cout << "Number men cavalry is " << vector_men_cavalry.size() << endl;
        for (int i = 0; i < vector_men_cavalry.size(); i++)
            vector_men_cavalry[i].info();

        cout << "Number dwarves infantry is " << vector_dwarves_infantry.size() << endl;
        for (int i = 0; i < vector_dwarves_infantry.size(); i++)
            vector_dwarves_infantry[i].info();
        cout << "Number dwarves arbalesters is " << vector_dwarves_arbalesters.size() << endl;
        for (int i = 0; i < vector_dwarves_arbalesters.size(); i++)
            vector_dwarves_arbalesters[i].info();
        cout << "Number dwarves cavalry is " << vector_dwarves_cavalry.size() << endl;
        for (int i = 0; i < vector_dwarves_cavalry.size(); i++)
            vector_dwarves_cavalry[i].info();

        cout << "Number elfs infantry is " << vector_elfs_infantry.size() << endl;
        for (int i = 0; i < vector_elfs_infantry.size(); i++)
            vector_elfs_infantry[i].info();
        cout << "Number elfs arbalesters is " << vector_elfs_arbalesters.size() << endl;
        for (int i = 0; i < vector_elfs_arbalesters.size(); i++)
            vector_elfs_arbalesters[i].info();
        cout << "Number elfs cavalry is " << vector_elfs_cavalry.size() << endl;
        for (int i = 0; i < vector_elfs_cavalry.size(); i++)
            vector_elfs_cavalry[i].info();
    }
};

// Базовый класс ArmyBuilder объявляет интерфейс для поэтапного
// построения армии и предусматривает его реализацию по умолчанию
class Army_builder {
protected:
    Army *p;
public:
    Army_builder() : p(nullptr) {}

    // содержит все типы боевых единиц всех фракций //

    virtual void createArmy() {}


    virtual void build_Men_infantry(int number_unit_men) {}

    virtual void build_Men_arbalesters(int number_unit_men) {}

    virtual void build_Men_cavalry(int number_unit_men) {}


    virtual void build_Dwarves_infantry(int number_unit_dwarves) {}

    virtual void build_Dwarves_arbalesters(int number_unit_dwarves) {}

    virtual void build_Dwarves_cavalry(int number_unit_dwarves) {}


    virtual void build_Elfs_infantry(int number_unit_dwarves) {}

    virtual void build_Elfs_arbalesters(int number_unit_dwarves) {}

    virtual void build_Elfs_cavalry(int number_unit_dwarves) {}

    virtual Army *getArmy() {
        return p;
    }
};

class Men_army_builder : public Army_builder {
public:
    void createArmy() override { p = new Army; }

    void build_Men_infantry(int number_unit_men) override {
        for (int i = 0; i < number_unit_men; i++)
            p->vector_men_infantry.emplace_back(Men_infantry());
    }

    void build_Men_arbalesters(int number_unit_men) override {
        for (int i = 0; i < number_unit_men; i++)
            p->vector_men_arbalesters.emplace_back(Men_arbalesters());
    }

    void build_Men_cavalry(int number_unit_men) override {
        for (int i = 0; i < number_unit_men; i++)
            p->vector_men_cavalry.emplace_back(Men_cavalry());
    }

    ~Men_army_builder() = default;
};

class Dwarves_army_builder : public Army_builder {
public:
    void createArmy() override { p = new Army; }

    void build_Dwarves_infantry(int number_unit_dwarves) override {
        for (int i = 0; i < number_unit_dwarves; i++)
            p->vector_dwarves_infantry.emplace_back(Dwarves_infantry());
    }

    void build_Dwarves_arbalesters(int number_unit_dwarves) override {
        for (int i = 0; i < number_unit_dwarves; i++)
            p->vector_dwarves_arbalesters.emplace_back(Dwarves_arbalesters());
    }

    void build_Dwarves_cavalry(int number_unit_dwarves) override {
        for (int i = 0; i < number_unit_dwarves; i++)
            p->vector_dwarves_cavalry.emplace_back(Dwarves_cavalry());
    }

    ~Dwarves_army_builder() = default;
};

class Elfs_army_builder : public Army_builder {
public:
    void createArmy() override { p = new Army; }

    void build_Elfs_infantry(int number_unit_elfs) override {
        for (int i = 0; i < number_unit_elfs; i++)
            p->vector_elfs_infantry.emplace_back(Elfs_infantry());
    }

    void build_Elfs_arbalesters(int number_unit_elfs) override {
        for (int i = 0; i < number_unit_elfs; i++)
            p->vector_elfs_arbalesters.emplace_back(Elfs_arbalesters());
    }

    void build_Elfs_cavalry(int number_unit_elfs) override {
        for (int i = 0; i < number_unit_elfs; i++)
            p->vector_elfs_cavalry.emplace_back(Elfs_cavalry());
    }

    ~Elfs_army_builder() = default;
};

// Класс-распорядитель, поэтапно создающий армию той или иной стороны.
// Именно здесь определен алгоритм построения армии.
class Director {
public:
    Army *createArmy(Army_builder &builder, int number_infantry,
                     int number_arbalesters, int number_cavalry) {
        // содержит все типы боевых единиц всех фракций //
        builder.createArmy();
        builder.build_Men_infantry(number_infantry);
        builder.build_Men_arbalesters(number_arbalesters);
        builder.build_Men_cavalry(number_cavalry);

        builder.build_Dwarves_infantry(number_infantry);
        builder.build_Dwarves_arbalesters(number_arbalesters);
        builder.build_Dwarves_cavalry(number_cavalry);

        builder.build_Elfs_infantry(number_infantry);
        builder.build_Elfs_arbalesters(number_arbalesters);
        builder.build_Elfs_cavalry(number_cavalry);
        return (builder.getArmy());
    }
};

template<typename Factory_smt>
auto foo(Factory_smt *value) {
    return value->Create();
}