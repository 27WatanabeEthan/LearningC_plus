#include <iostream>
#include <cmath>
// https://cplusplus.com/reference/cmath/

int main(){
    using std::endl;

    double x = 3;
    double y = 4;
    double z;

    // z = std::max(x, y);
    // z = std::min(x, y);

    // z = pow(2, 4); // 2^4
    // z = sqrt(9);
    // z = abs(-67);
    // z = round(3.52);
    // z = ceil(3.01);
    z = floor(3.999);
    std::cout << z << endl;
    return 0;
}