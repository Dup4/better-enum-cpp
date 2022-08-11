#ifndef BETTER_ENUM_MACROS_UTILITY_H
#define BETTER_ENUM_MACROS_UTILITY_H

#include <optional>
#include <string>
#include <type_traits>
#include <unordered_map>

#define __BETTER_ENUM_STR(x) #x
#define __BETTER_ENUM_CONCAT(x, y) __BETTER_ENUM_CONCAT_(x, y)
#define __BETTER_ENUM_CONCAT_(x, y) x##y

#define __BETTER_ENUM_NARGS(...) __BETTER_ENUM_NARGS_(__VA_ARGS__)
#define __BETTER_ENUM_NARGS_(...) __BETTER_ENUM_NARGS__(__VA_ARGS__)
#define __BETTER_ENUM_NARGS__(...) __BETTER_ENUM_NARGS___(__VA_ARGS__)
#define __BETTER_ENUM_NARGS___(...) __BETTER_ENUM_NARGS_____(__VA_ARGS__, __BETTER_ENUM_ARG_RSET_N_)
#define __BETTER_ENUM_NARGS_____(...) __BETTER_ENUM_ARG_N_(__VA_ARGS__)
#define __BETTER_ENUM_ARG_N_(_1,   \
                             _2,   \
                             _3,   \
                             _4,   \
                             _5,   \
                             _6,   \
                             _7,   \
                             _8,   \
                             _9,   \
                             _10,  \
                             _11,  \
                             _12,  \
                             _13,  \
                             _14,  \
                             _15,  \
                             _16,  \
                             _17,  \
                             _18,  \
                             _19,  \
                             _20,  \
                             _21,  \
                             _22,  \
                             _23,  \
                             _24,  \
                             _25,  \
                             _26,  \
                             _27,  \
                             _28,  \
                             _29,  \
                             _30,  \
                             _31,  \
                             _32,  \
                             _33,  \
                             _34,  \
                             _35,  \
                             _36,  \
                             _37,  \
                             _38,  \
                             _39,  \
                             _40,  \
                             _41,  \
                             _42,  \
                             _43,  \
                             _44,  \
                             _45,  \
                             _46,  \
                             _47,  \
                             _48,  \
                             _49,  \
                             _50,  \
                             _51,  \
                             _52,  \
                             _53,  \
                             _54,  \
                             _55,  \
                             _56,  \
                             _57,  \
                             _58,  \
                             _59,  \
                             _60,  \
                             _61,  \
                             _62,  \
                             _63,  \
                             _64,  \
                             _65,  \
                             _66,  \
                             _67,  \
                             _68,  \
                             _69,  \
                             _70,  \
                             _71,  \
                             _72,  \
                             _73,  \
                             _74,  \
                             _75,  \
                             _76,  \
                             _77,  \
                             _78,  \
                             _79,  \
                             _80,  \
                             _81,  \
                             _82,  \
                             _83,  \
                             _84,  \
                             _85,  \
                             _86,  \
                             _87,  \
                             _88,  \
                             _89,  \
                             _90,  \
                             _91,  \
                             _92,  \
                             _93,  \
                             _94,  \
                             _95,  \
                             _96,  \
                             _97,  \
                             _98,  \
                             _99,  \
                             _100, \
                             _101, \
                             _102, \
                             _103, \
                             _104, \
                             _105, \
                             _106, \
                             _107, \
                             _108, \
                             _109, \
                             _110, \
                             _111, \
                             _112, \
                             _113, \
                             _114, \
                             _115, \
                             _116, \
                             _117, \
                             _118, \
                             _119, \
                             _120, \
                             _121, \
                             _122, \
                             _123, \
                             _124, \
                             _125, \
                             _126, \
                             _127, \
                             _128, \
                             _129, \
                             _130, \
                             _131, \
                             _132, \
                             _133, \
                             _134, \
                             _135, \
                             _136, \
                             _137, \
                             _138, \
                             _139, \
                             _140, \
                             _141, \
                             _142, \
                             _143, \
                             _144, \
                             _145, \
                             _146, \
                             _147, \
                             _148, \
                             _149, \
                             _150, \
                             _151, \
                             _152, \
                             _153, \
                             _154, \
                             _155, \
                             _156, \
                             _157, \
                             _158, \
                             _159, \
                             _160, \
                             _161, \
                             _162, \
                             _163, \
                             _164, \
                             _165, \
                             _166, \
                             _167, \
                             _168, \
                             _169, \
                             _170, \
                             _171, \
                             _172, \
                             _173, \
                             _174, \
                             _175, \
                             _176, \
                             _177, \
                             _178, \
                             _179, \
                             _180, \
                             _181, \
                             _182, \
                             _183, \
                             _184, \
                             _185, \
                             _186, \
                             _187, \
                             _188, \
                             _189, \
                             _190, \
                             _191, \
                             _192, \
                             _193, \
                             _194, \
                             _195, \
                             _196, \
                             _197, \
                             _198, \
                             _199, \
                             _200, \
                             _201, \
                             _202, \
                             _203, \
                             _204, \
                             _205, \
                             _206, \
                             _207, \
                             _208, \
                             _209, \
                             _210, \
                             _211, \
                             _212, \
                             _213, \
                             _214, \
                             _215, \
                             _216, \
                             _217, \
                             _218, \
                             _219, \
                             _220, \
                             _221, \
                             _222, \
                             _223, \
                             _224, \
                             _225, \
                             _226, \
                             _227, \
                             _228, \
                             _229, \
                             _230, \
                             _231, \
                             _232, \
                             _233, \
                             _234, \
                             _235, \
                             _236, \
                             _237, \
                             _238, \
                             _239, \
                             _240, \
                             _241, \
                             _242, \
                             _243, \
                             _244, \
                             _245, \
                             _246, \
                             _247, \
                             _248, \
                             _249, \
                             _250, \
                             _251, \
                             _252, \
                             _253, \
                             _254, \
                             _255, \
                             _256, \
                             N,    \
                             ...)  \
    N

#define __BETTER_ENUM_ARG_RSET_N_                                                                                      \
    256, 255, 254, 253, 252, 251, 250, 249, 248, 247, 246, 245, 244, 243, 242, 241, 240, 239, 238, 237, 236, 235, 234, \
            233, 232, 231, 230, 229, 228, 227, 226, 225, 224, 223, 222, 221, 220, 219, 218, 217, 216, 215, 214, 213,   \
            212, 211, 210, 209, 208, 207, 206, 205, 204, 203, 202, 201, 200, 199, 198, 197, 196, 195, 194, 193, 192,   \
            191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171,   \
            170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 151, 150,   \
            149, 148, 147, 146, 145, 144, 143, 142, 141, 140, 139, 138, 137, 136, 135, 134, 133, 132, 131, 130, 129,   \
            128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108,   \
            107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84,    \
            83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58,    \
            57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32,    \
            31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4,  \
            3, 2, 1, 0

// clang-format off
#define __BETTER_ENUM_EXPEND_FUNC_1(Enum, func, a) func(Enum, a)
#define __BETTER_ENUM_EXPEND_FUNC_2(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_1(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_3(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_2(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_4(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_3(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_5(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_4(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_6(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_5(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_7(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_6(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_8(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_7(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_9(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_8(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_10(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_9(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_11(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_10(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_12(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_11(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_13(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_12(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_14(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_13(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_15(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_14(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_16(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_15(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_17(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_16(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_18(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_17(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_19(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_18(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_20(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_19(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_21(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_20(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_22(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_21(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_23(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_22(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_24(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_23(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_25(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_24(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_26(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_25(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_27(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_26(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_28(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_27(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_29(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_28(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_30(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_29(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_31(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_30(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_32(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_31(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_33(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_32(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_34(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_33(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_35(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_34(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_36(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_35(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_37(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_36(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_38(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_37(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_39(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_38(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_40(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_39(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_41(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_40(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_42(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_41(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_43(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_42(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_44(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_43(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_45(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_44(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_46(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_45(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_47(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_46(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_48(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_47(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_49(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_48(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_50(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_49(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_51(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_50(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_52(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_51(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_53(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_52(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_54(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_53(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_55(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_54(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_56(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_55(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_57(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_56(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_58(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_57(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_59(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_58(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_60(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_59(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_61(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_60(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_62(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_61(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_63(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_62(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_64(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_63(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_65(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_64(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_66(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_65(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_67(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_66(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_68(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_67(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_69(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_68(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_70(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_69(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_71(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_70(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_72(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_71(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_73(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_72(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_74(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_73(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_75(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_74(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_76(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_75(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_77(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_76(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_78(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_77(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_79(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_78(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_80(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_79(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_81(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_80(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_82(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_81(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_83(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_82(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_84(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_83(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_85(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_84(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_86(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_85(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_87(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_86(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_88(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_87(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_89(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_88(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_90(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_89(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_91(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_90(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_92(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_91(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_93(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_92(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_94(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_93(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_95(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_94(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_96(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_95(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_97(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_96(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_98(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_97(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_99(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_98(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_100(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_99(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_101(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_100(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_102(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_101(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_103(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_102(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_104(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_103(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_105(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_104(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_106(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_105(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_107(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_106(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_108(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_107(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_109(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_108(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_110(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_109(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_111(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_110(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_112(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_111(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_113(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_112(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_114(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_113(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_115(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_114(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_116(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_115(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_117(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_116(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_118(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_117(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_119(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_118(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_120(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_119(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_121(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_120(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_122(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_121(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_123(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_122(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_124(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_123(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_125(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_124(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_126(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_125(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_127(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_126(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_128(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_127(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_129(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_128(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_130(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_129(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_131(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_130(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_132(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_131(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_133(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_132(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_134(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_133(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_135(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_134(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_136(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_135(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_137(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_136(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_138(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_137(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_139(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_138(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_140(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_139(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_141(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_140(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_142(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_141(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_143(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_142(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_144(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_143(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_145(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_144(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_146(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_145(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_147(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_146(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_148(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_147(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_149(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_148(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_150(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_149(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_151(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_150(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_152(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_151(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_153(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_152(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_154(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_153(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_155(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_154(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_156(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_155(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_157(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_156(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_158(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_157(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_159(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_158(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_160(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_159(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_161(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_160(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_162(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_161(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_163(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_162(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_164(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_163(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_165(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_164(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_166(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_165(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_167(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_166(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_168(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_167(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_169(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_168(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_170(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_169(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_171(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_170(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_172(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_171(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_173(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_172(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_174(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_173(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_175(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_174(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_176(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_175(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_177(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_176(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_178(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_177(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_179(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_178(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_180(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_179(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_181(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_180(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_182(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_181(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_183(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_182(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_184(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_183(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_185(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_184(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_186(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_185(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_187(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_186(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_188(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_187(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_189(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_188(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_190(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_189(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_191(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_190(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_192(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_191(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_193(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_192(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_194(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_193(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_195(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_194(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_196(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_195(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_197(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_196(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_198(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_197(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_199(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_198(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_200(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_199(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_201(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_200(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_202(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_201(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_203(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_202(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_204(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_203(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_205(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_204(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_206(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_205(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_207(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_206(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_208(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_207(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_209(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_208(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_210(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_209(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_211(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_210(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_212(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_211(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_213(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_212(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_214(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_213(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_215(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_214(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_216(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_215(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_217(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_216(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_218(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_217(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_219(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_218(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_220(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_219(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_221(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_220(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_222(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_221(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_223(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_222(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_224(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_223(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_225(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_224(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_226(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_225(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_227(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_226(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_228(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_227(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_229(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_228(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_230(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_229(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_231(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_230(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_232(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_231(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_233(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_232(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_234(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_233(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_235(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_234(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_236(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_235(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_237(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_236(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_238(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_237(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_239(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_238(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_240(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_239(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_241(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_240(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_242(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_241(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_243(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_242(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_244(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_243(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_245(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_244(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_246(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_245(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_247(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_246(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_248(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_247(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_249(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_248(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_250(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_249(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_251(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_250(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_252(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_251(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_253(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_252(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_254(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_253(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_255(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_254(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_256(Enum, func, a, ...) func(Enum, a) __BETTER_ENUM_EXPEND_FUNC_255(Enum, func, __VA_ARGS__)
// clang-format on

#define __BETTER_ENUM_EXPEND_FUNC___(Enum, func, NARGS, ...) __BETTER_ENUM_EXPEND_FUNC_##NARGS(Enum, func, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC__(Enum, func, NARGS, ...) __BETTER_ENUM_EXPEND_FUNC___(Enum, func, NARGS, __VA_ARGS__)
#define __BETTER_ENUM_EXPEND_FUNC_(Enum, func, ...) \
    __BETTER_ENUM_EXPEND_FUNC__(Enum, func, __BETTER_ENUM_NARGS_(__VA_ARGS__), __VA_ARGS__)

#define __BETTER_ENUM_FROM_STRING(Enum, field) mp.insert({__BETTER_ENUM_STR(field), Enum::field});

#define __BETTER_ENUM_TO_STRING(Enum, field) mp.insert({Enum::field, __BETTER_ENUM_STR(field)});

#define __BETTER_ENUM(Enum, ...)                                                        \
    template <typename Enum>                                                            \
    inline std::optional<Enum> __BetterEnum_FromString(Enum& e, const std::string& s) { \
        static const auto mp = [&]() {                                                  \
            auto mp = std::unordered_map<std::string, Enum>();                          \
            __BETTER_ENUM_EXPEND_FUNC_(Enum, __BETTER_ENUM_FROM_STRING, __VA_ARGS__);   \
            return mp;                                                                  \
        }();                                                                            \
                                                                                        \
        if (mp.count(s)) {                                                              \
            e = mp.at(s);                                                               \
            return mp.at(s);                                                            \
        }                                                                               \
                                                                                        \
        return std::nullopt;                                                            \
    }                                                                                   \
                                                                                        \
    inline std::optional<std::string> __BetterEnum_ToString(Enum e) {                   \
        static const auto mp = [&]() {                                                  \
            auto mp = std::unordered_map<Enum, std::string>();                          \
            __BETTER_ENUM_EXPEND_FUNC_(Enum, __BETTER_ENUM_TO_STRING, __VA_ARGS__);     \
            return mp;                                                                  \
        }();                                                                            \
                                                                                        \
        if (mp.count(e)) {                                                              \
            return mp.at(e);                                                            \
        }                                                                               \
                                                                                        \
        return std::nullopt;                                                            \
    }

#endif  // BETTER_ENUM_MACROS_UTILITY_H
