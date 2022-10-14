/*
 * Copyright (c) 2021 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "tests.h"
#include "xmalloc.h"
#include <unistd.h>

char *secontext_full_file(const char *, bool) ATTRIBUTE_MALLOC;
char *secontext_full_pid(pid_t) ATTRIBUTE_MALLOC;

char *secontext_short_file(const char *, bool) ATTRIBUTE_MALLOC;
char *secontext_short_pid(pid_t) ATTRIBUTE_MALLOC;

enum secontext_field {
	SECONTEXT_USER,
	SECONTEXT_ROLE,
	SECONTEXT_TYPE
};

#if defined TEST_SECONTEXT && defined HAVE_SELINUX_RUNTIME

void update_secontext_field(const char *file, enum secontext_field field,
			    const char *newvalue);

# ifdef PRINT_SECONTEXT_FULL

#  ifdef PRINT_SECONTEXT_MISMATCH
#   define SECONTEXT_FILE(filename)	secontext_full_file(filename, true)
#  else
#   define SECONTEXT_FILE(filename)	secontext_full_file(filename, false)
#  endif
#  define SECONTEXT_PID(pid)		secontext_full_pid(pid)

# else

#  ifdef PRINT_SECONTEXT_MISMATCH
#   define SECONTEXT_FILE(filename)	secontext_short_file(filename, true)
#  else
#   define SECONTEXT_FILE(filename)	secontext_short_file(filename, false)
#  endif
#  define SECONTEXT_PID(pid)		secontext_short_pid(pid)

# endif

#else

static inline void
update_secontext_field(const char *file, enum secontext_field field,
		       const char *newvalue)
{
}

# define SECONTEXT_FILE(filename)		xstrdup("")
# define SECONTEXT_PID(pid)			xstrdup("")

#endif

#define SECONTEXT_PID_MY()		SECONTEXT_PID(getpid())
