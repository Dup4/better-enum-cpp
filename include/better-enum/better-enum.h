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
    static std::optional<Enum> FromString(const std::string& s) {
        Enum e;
        return __BetterEnum_FromString(e, s);
    }

    template <typename Enum>
    static std::string ToString(Enum&& e) {
        return __BetterEnum_ToString(e).value_or("");
    }

    template <typename Enum>
    static std::optional<std::string> ToStringWithOptional(Enum&& e) {
        return __BetterEnum_ToString(e);
    }

    template <typename Enum>
    static bool IsValidEnum(const std::string& s) {
        return FromString<Enum>(s).has_value();
    }

    template <typename Enum>
    static bool IsValidEnum(Enum&& e) {
        return ToStringWithOptional(e).has_value();
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
        return To<Enum, int32_t>(std::forward<Enum>(e));
    }
};

#endif  // BETTER_ENUM_BETTER_ENUM_H
