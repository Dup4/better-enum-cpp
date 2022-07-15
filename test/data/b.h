#pragma once

#include "better-enum/macros.h"
enum class B {
    UNKNOWN = 0,
    Q,
    W,
    E,
    R,
};

BETTER_ENUM(B, UNKNOWN, Q, W, E, R)
