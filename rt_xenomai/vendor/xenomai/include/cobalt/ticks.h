/*
 * Copyright (C) 2013 Philippe Gerum <rpm@xenomai.org>.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA.
 */
#ifndef _COBALT_TICKS_H
#define _COBALT_TICKS_H

#include <cobalt/uapi/kernel/types.h>

#ifdef __cplusplus
extern "C" {
#endif

xnticks_t cobalt_read_hrclock(void);

xnsticks_t cobalt_ticks_to_ns(xnsticks_t ticks);

xnsticks_t cobalt_ticks_to_ns_rounded(xnsticks_t ticks);

xnsticks_t cobalt_ns_to_ticks(xnsticks_t ns);

unsigned long long cobalt_divrem_billion(unsigned long long value,
					 unsigned long *rem);
#ifdef __cplusplus
}
#endif

#endif /* !_COBALT_TICKS_H */
