#ifndef BETTER_ENUM_MACROS_UTILITY_H
#define BETTER_ENUM_MACROS_UTILITY_H

#define __BETTER_ENUM_STR(x) #x
#define __BETTER_ENUM_CONCAT(x, y) __BETTER_ENUM_CONCAT_(x, y)
#define __BETTER_ENUM_CONCAT_(x, y) x##y

#endif  // BETTER_ENUM_MACROS_UTILITY_H