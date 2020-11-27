/* SPDX-License-Identifier: LGPL-2.1-or-later */
#pragma once

#include <stdint.h>

#include "sd-bus.h"

char *machines_path(bool system);

int setup_machine_directory(sd_bus_error *error);
