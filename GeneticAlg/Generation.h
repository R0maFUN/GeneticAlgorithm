#pragma once

#include <memory>
#include <string>

#include "Individ.h"
#include "Genetic.h"

class Generation {
public:
    Generation() {}
    Generation(std::string filename = "data.txt");
    auto getBest();
private:
    std::vector<std::shared_ptr<Individ> > individs;
    std::vector<std::pair<std::shared_ptr<Individ>, std::shared_ptr<Individ> > > parents;
    std::vector<std::shared_ptr<Individ> > children;

    friend class Genetic;
};