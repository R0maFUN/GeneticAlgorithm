#pragma once

#include <vector>
#include <functional>
#include "functions.h"

using cross_func = std::function<std::vector<std::shared_ptr<Individ> >(std::shared_ptr<Individ>& X, std::shared_ptr<Individ>& Y) >;

class Individ {
public:
    Individ() {}
    double evaluate();
    std::vector<std::shared_ptr<Individ> > cross_with(std::shared_ptr<Individ>& partner, cross_func& crossF);
private:
    std::vector<int> genes;
};