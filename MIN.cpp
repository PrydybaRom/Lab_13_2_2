#include <iostream>
#include <algorithm>
#include "MIN.h"

#define MIN(x, y, z) \
    (((z) < 1 && (z) >= 10) ? (std::min((x) * (x), abs((y) - (z)) ) : -1)
