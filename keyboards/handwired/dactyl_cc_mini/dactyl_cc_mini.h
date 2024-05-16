// Copyright 2022 Shem Sedrick (@ssedrick)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define XXX KC_NO
#define LAYOUT( \
    L00, L01, L02, L03, L04,                        R00, R01, R02, R03, R04, \
    L10, L11, L12, L13, L14,                        R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24,                        R20, R21, R22, R23, R24, \
              L32,                                            R32,           \
                            L25,                R26,                         \
                                L26,        R25,                            \
                        L33, L35, L36,    R35, R36, R31                     \
) { \
    { L00, L01, L02, L03, L04, XXX, XXX }, \
    { L10, L11, L12, L13, L14, XXX, XXX }, \
    { L20, L21, L22, L23, L24, L25, L26 }, \
    { XXX, XXX, L32, L33, XXX, L35, L36 }, \
\
    { R00, R01, R02, R03, R04, XXX, XXX }, \
    { R10, R11, R12, R13, R14, XXX, XXX }, \
    { R20, R21, R22, R23, R24, R25, R26 }, \
    { XXX, R31, R32, XXX, XXX, R35, R36 }, \
}
