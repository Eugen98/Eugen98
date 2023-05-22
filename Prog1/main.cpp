#include <iostream>
#include "CartesianVektor.h"
using namespace std ;
int main() {
    CartesianVektor v1 (1,2,3);
    CartesianVektor v2 (3,4,5);
    int temp = v1 * v2 ;
    cout << temp << endl;

    return 0 ;
}