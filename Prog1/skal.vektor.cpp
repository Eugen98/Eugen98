#include <iostream>

class CartesianVektor {
private:
    int x;
    int y;
    int z;

public:
    CartesianVektor();
    CartesianVektor(int x, int y, int z);

    int operator*(const CartesianVektor& factor) const; // Определение оператора умножения
};

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

int CartesianVektor::operator*(const CartesianVektor& factor) const {
    int temp = x * factor.x + y * factor.y + z * factor.z;
    return temp;
}

int main() {
    CartesianVektor v1(1, 2, 3);
    CartesianVektor v2(3, 4, 5);
    int temp = v1 * v2;
    std::cout << "Скалярное произведение: " << temp << std::endl;

    return 0;
}