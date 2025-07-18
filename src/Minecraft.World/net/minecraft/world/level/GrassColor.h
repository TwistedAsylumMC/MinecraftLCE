#pragma once

#include "net/minecraft/world/ArrayWithLength.h"

class GrassColor {
public:
    static int get(double, double);
    static int set(double, double, unsigned int);

    static void init(arrayWithLength<int> pixels);
};
