#include "CartesianVektor.h"

CartesianVektor::CartesianVektor() {
    x = 0;
    y = 0;
    z = 0;
}

CartesianVektor::CartesianVektor(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}



CartesianVektor::~CartesianVektor() {}

int CartesianVektor::operator* (const CartesianVektor& factor) const {
    int temp = x * factor.x + y * factor.y + z * factor.z;
    return temp;
}