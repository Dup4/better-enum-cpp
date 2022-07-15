#ifndef BETTER_ENUM_BETTER_ENUM_H
#define BETTER_ENUM_BETTER_ENUM_H

#include <string>

#include "./macros.h"  // IWYU pragma: export

class BetterEnum {
public:
    template <typename T>
    static T FromString([[maybe_unused]] const std::string& s) {}

    template <typename T>
    static std::string ToString([[maybe_unused]] T&& t) {
        return "";
    }

    template <typename T, typename F>
    static T From(F&& f) {
        return static_cast<T>(f);
    }

    template <typename T, typename F>
    static F To(T&& t) {
        return static_cast<F>(t);
    }

    template <typename T>
    static T FromInteger(int32_t num) {
        return From<T>(num);
    }

    template <typename T>
    static int32_t ToInteger(T&& t) {
        return To<T, int32_t>(std::move(t));
    }
};

#endif  // BETTER_ENUM_BETTER_ENUM_H
