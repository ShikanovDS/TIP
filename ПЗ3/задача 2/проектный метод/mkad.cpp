#include "mkad.h"

int calculateMark(int v, int t) {
    long long distance = 1LL * v * t;
    int mark = static_cast<int>(((distance % MKAD_LENGTH) + MKAD_LENGTH) % MKAD_LENGTH);
    return mark;
}