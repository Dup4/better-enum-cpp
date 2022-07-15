#ifndef BETTER_ENUM_BETTER_ENUM_H
#define BETTER_ENUM_BETTER_ENUM_H

#include <string>

#include "./macros.h"  // IWYU pragma: export

class BetterEnum {
public:
    template <typename Enum>
    static void FromString(Enum& e, const std::string& s) {
        __BetterEnum_FromString(e, s);
    }

    template <typename Enum>
    static Enum FromString(const std::string& s) {
        Enum e = static_cast<Enum>(0);

        FromString(e, s);

        return e;
    }

    template <typename Enum>
    static std::string ToString(Enum&& e) {
        return __BetterEnum_ToString(e);
    }

    template <typename Enum, typename T>
    static Enum From(T&& t) {
        return static_cast<Enum>(t);
    }

    template <typename Enum, typename T>
    static T To(Enum&& e) {
        return static_cast<T>(e);
    }

    template <typename Enum>
    static Enum FromInteger(int32_t num) {
        return From<Enum>(num);
    }

    template <typename Enum>
    static int32_t ToInteger(Enum&& e) {
        return To<Enum, int32_t>(std::move(e));
    }
};

#endif  // BETTER_ENUM_BETTER_ENUM_H
