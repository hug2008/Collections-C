/*
 * Collections-C
 * Copyright (C) 2013-2014 Srđan Panić <srdja.panic@gmail.com>
 *
 * This file is part of Collections-C.
 *
 * Collections-C is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Collections-C is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Collections-C.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef COMMON_H_
#define COMMON_H_

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#ifdef ARCH_64

typedef uintcc_t uint64_t;
typedef  intcc_t  int64_t;

#define MAX_POW_TWO (((uintcc_t) 1) << 63)

#else

typedef uintcc_t uint32_t;
typedef  intcc_t  int32_t;

#define MAX_POW_TWO (((uintcc_t) 1) << 31)

#endif /* ARCH_64 */


#define NO_SUCH_INDEX (uintcc_t) - 1
#define MAX_ELEMENTS  (uintcc_t) - 2


#if defined(_MSC_VER)

#define       INLINE __inline
#define FORCE_INLINE __forceinline

#else

#define       INLINE inline
#define FORCE_INLINE inline __attribute__((always_inline))

#endif /* _MSC_VER */


#endif /* COMMON_H_ */
