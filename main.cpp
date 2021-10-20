#include <iostream>
#include "Integer.h"

void Print(Integer i) {

}

Integer Add(int x, int y) {
    return Integer(x + y);
}

int main() {
    Integer i(5);
    Integer i2(i);
    std::cout << i.GetValue() << std::endl;
    return 0;
}
