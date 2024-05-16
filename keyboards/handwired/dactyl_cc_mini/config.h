// Copyright 2022 Shem Sedrick (@ssedrick)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define MATRIX_ROWS 8
#define MATRIX_COLUMNS 7

// Wiring pins
#define MATRIX_ROW_PINS { D7, E6, B4, B5}
#define MATRIX_COL_PINS { F7, B1, B3, B6, B2, F6, F5 }
#define MATRIX_COL_PINS_RIGHT { B2, B6, B3, B1, F7, F6, F5 }
#define DIODE_DIRECTION COL2ROW

// #define EE_HANDS
// #define SPLIT_USB_DETECT
/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0