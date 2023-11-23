#include <iostream>
#include <algorithm>
#include "MAX.h"

int MAX(int x, int y, int z) {
    if (1 <= z && z < 10) {
        int result = std::max(x + y, x + z);
        return result * result;
    }
    else {
        return -1;
    }
}


