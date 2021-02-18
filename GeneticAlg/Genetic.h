#pragma once

#include "Generation.h"

class Genetic {
public:
    void create_random_generation();
    bool make_selection(float survive_percentage = 0.5, float bad_individs_chance = 0);
    bool make_mutations(float probability);
    bool crossingover(std::uint8_t top_individs_amount, std::uint8_t tournment_size, std::uint8_t tournments_amount); // cross top4 individs + tournment
    void start(std::uint16_t generations_amount = 50);
private:
    std::unique_ptr<Generation> generation;
    std::vector<std::shared_ptr<Individ> > best_solution;
};