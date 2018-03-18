#include <vector>
#include "Unit_Of_Men.h"

//////////////////////////////////////////////////////////////
// Фабрика людей
class Factory_men {
public:
    virtual Unit_of_men *Create() = 0;

    virtual ~Factory_men() = default;
};

class Men_infantry_factory : public Factory_men {
public:
    Unit_of_men *Create() override {
        cout << "Create Men_infantry" << endl;
        return new Men_infantry;
    }
};

class Men_arbalesters_factory : public Factory_men {
public:
    Unit_of_men *Create() override {
        cout << "Create Men_arbalesters" << endl;
        return new Men_arbalesters;
    }
};

class Men_cavalry_factory : public Factory_men {
public:
    Unit_of_men *Create() override {
        cout << "Create Men_cavalry" << endl;
        return new Men_cavalry;
    }
};
//////////////////////////////////////////////////////////////


class Army {
public:
    // содержит все типы боевых единиц всех фракций //
    vector<Men_infantry> vector_men_infantry;
    vector<Men_arbalesters> vector_men_arbalesters;
    vector<Men_cavalry> vector_men_cavalry;

    void info() {
        for (int i = 0; i < vector_men_infantry.size(); i++)
            vector_men_infantry[i].info();
        for (int i = 0; i < vector_men_arbalesters.size(); i++)
            vector_men_arbalesters[i].info();
        for (int i = 0; i < vector_men_cavalry.size(); i++)
            vector_men_cavalry[i].info();
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

    virtual void build_Men_infantry() {}

    virtual void build_Men_arbalesters() {}

    virtual void build_Men_cavalry() {}

    virtual Army *getArmy() {
        return p;
    }
};

class Men_army_builder : public Army_builder {
public:
    void createArmy() override { p = new Army; }

    void build_Men_infantry() override {
        p->vector_men_infantry.emplace_back(Men_infantry());
    }

    void build_Men_arbalesters() override {
        p->vector_men_arbalesters.emplace_back(Men_arbalesters());
    }

    void build_Men_cavalry() override {
        p->vector_men_cavalry.emplace_back(Men_cavalry());
    }

    ~Men_army_builder() = default;
};


// Класс-распорядитель, поэтапно создающий армию той или иной стороны.
// Именно здесь определен алгоритм построения армии.
class Director {
public:
    Army *createArmy(Army_builder &builder) {
        // содержит все типы боевых единиц всех фракций //

        builder.createArmy();
        builder.build_Men_infantry();
        builder.build_Men_arbalesters();
        builder.build_Men_cavalry();
        cout << "1" << endl;
        return (builder.getArmy());
    }
};

Unit_of_men *foo(Factory_men *value) {
    return value->Create();
}

int main() {
    /* Реализация через "фабрику" */
    Men_infantry_factory men_infantry;         //Переменные для каждого юнита
    Men_arbalesters_factory men_arbalesters;
    Men_cavalry_factory men_cavalry;


    Factory_men *ptr1 = &men_infantry;  //Указатели на юнитов нужных типов
    Factory_men *ptr2 = &men_arbalesters;
    Factory_men *ptr3 = &men_cavalry;

    ///////////////////////////
    Unit_of_men *ObjectNature1 = foo(ptr1); //Создали пехотинца
    Unit_of_men *ObjectNature2 = foo(ptr2); //Создали арбалетчика
    Unit_of_men *ObjectNature3 = foo(ptr3); //Создали кавалерия

    ObjectNature1->info();
    ObjectNature2->info();
    ObjectNature3->info();

    delete ObjectNature1; //
    delete ObjectNature2; // Почистили память
    delete ObjectNature3; //

    //////////////////////////////////////////////////////////////////
    cout << endl << "else" << endl << endl;
    //////////////////////////////////////////////////////////////////
    /* Реализация через "строителя"*/
    Director dir;
    Men_army_builder men_builder;
    Army *ra = dir.createArmy(men_builder);
    cout << "Men army:" << endl;
    ra->info();
    return 0;
}