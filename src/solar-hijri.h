/*
 * Copyright 2017 - Soroush Rabiei, <soroush@ametisco.ir>
 * This file is part of libcalendar.
 *
 * libcalendar is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libcalendar is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libcalendar.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef LIBCALENDAR_SOLAR_HIJRI_H
#define LIBCALENDAR_SOLAR_HIJRI_H

#include <stdint.h>
#include "export.h"

#ifdef __cplusplus
extern "C" {
#endif

LIBCALENDAR_API int sh_is_leap(int16_t year);
LIBCALENDAR_API int days_in_month(uint8_t month, int16_t year);
LIBCALENDAR_API uint16_t days_in_year(int16_t year);
LIBCALENDAR_API void sh_to_jdn(uint32_t* jd,
                             int16_t year, uint8_t month, uint16_t day);
LIBCALENDAR_API void jdn_to_sh(uint32_t jdn,
                             int16_t* year, uint8_t* month, uint16_t *day);

#ifdef __cplusplus
}
#endif

#endif /* LIBCALENDAR_SOLAR_HIJRI_H */
