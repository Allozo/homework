#include "Army_builder.hpp"

// функция для объединения войск
template<typename t_1>
auto association_army(Director dir, t_1 first_army, t_1 second_army) {
    vector<int> number_unit_first = first_army->get_number_unit();
    vector<int> number_unit_second = second_army->get_number_unit();
    string race = first_army->get_race();
    t_1 new_army;
    if (race == "men") {
        Men_army_builder men_builder;
        new_army = dir.createArmy(men_builder,
                                  number_unit_first[0] + number_unit_second[0],
                                  number_unit_first[1] + number_unit_second[1],
                                  number_unit_first[2] + number_unit_second[2]);
    } else if (race == "dwarves") {
        Dwarves_army_builder dwarves_builder;
        new_army = dir.createArmy(dwarves_builder,
                                  number_unit_first[0] + number_unit_second[0],
                                  number_unit_first[1] + number_unit_second[1],
                                  number_unit_first[2] + number_unit_second[2]);
    } else if (race == "elfs") {
        Elfs_army_builder elfs_builder;
        new_army = dir.createArmy(elfs_builder,
                                  number_unit_first[0] + number_unit_second[0],
                                  number_unit_first[1] + number_unit_second[1],
                                  number_unit_first[2] + number_unit_second[2]);
    }
    return new_army;
};

template <typename t_1, typename  t_2>
auto battle_army(Director dir, t_1 first_army, t_2 second_army) {
    vector<int> number_unit_first = first_army->get_number_unit();
    vector<int> number_unit_second = second_army->get_number_unit();
    string race_first = first_army->get_race();
    string race_second = second_army->get_race();
    int power_first = first_army->get_power_attack();
    int power_second = second_army->get_power_attack();
    Army *new_army;
    if (power_first > power_second) {
        if (race_first == "men") {
            Men_army_builder men_builder;
            new_army = dir.createArmy(men_builder,
                                      number_unit_first[0] / 100 * 10,
                                      number_unit_first[1] / 100 * 10,
                                      number_unit_first[2] / 100 * 5);
        } else if (race_first == "dwarves") {
            Dwarves_army_builder dwarves_builder;
            new_army = dir.createArmy(dwarves_builder,
                                      number_unit_first[0] / 100 * 10,
                                      number_unit_first[1] / 100 * 10,
                                      number_unit_first[2] / 100 * 5);
        } else if (race_first == "elfs") {
            Elfs_army_builder elfs_builder;
            new_army = dir.createArmy(elfs_builder,
                                      number_unit_first[0] / 100 * 10,
                                      number_unit_first[1] / 100 * 10,
                                      number_unit_first[2] / 100 * 5);
        }
        return new_army;
    } else {
        if (race_second == "men") {
            Men_army_builder men_builder;
            new_army = dir.createArmy(men_builder,
                                      number_unit_second[0] / 100 * 10,
                                      number_unit_second[1] / 100 * 10,
                                      number_unit_second[2] / 100 * 5);
        } else if (race_second == "dwarves") {
            Dwarves_army_builder dwarves_builder;
            new_army = dir.createArmy(dwarves_builder,
                                      number_unit_second[0] / 100 * 10,
                                      number_unit_second[1] / 100 * 10,
                                      number_unit_second[2] / 100 * 5);
        } else if (race_second == "elfs") {
            Elfs_army_builder elfs_builder;
            new_army = dir.createArmy(elfs_builder,
                                      number_unit_second[0] / 100 * 10,
                                      number_unit_second[1] / 100 * 10,
                                      number_unit_second[2] / 100 * 5);
        }
    }
    return new_army;

};
