#ifndef CARTESIANVECTOR_H
#define CARTESIANVECTOR_H

class CartesianVektor {
private:
    int x;
    int y;
    int z;

public:
    CartesianVektor();
    CartesianVektor(int x, int y, int z);
    CartesianVektor(const CartesianVektor& orig);
    virtual ~CartesianVektor();

    int operator* (const CartesianVektor& factor) const;
};

#endif
