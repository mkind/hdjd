#ifndef __DUMP_H__
#define __DUMP_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Some things I use for debugging */
#ifndef DEBUG
#  define DUMPf(fmt, args...)
#else
#  define DUMPf(fmt, args...) fprintf(stderr, "%s:%d " fmt "\n", __FILE__,  __LINE__, ##args)
#endif
#define DUMP() DUMPf("")
#define DUMP_d(v) DUMPf("%s = %d", #v, (int)v)
#define DUMP_l(v) DUMPf("%s = %ld", #v, (long)v)
#define DUMP_x(v) DUMPf("%s = 0x%x", #v, v)
#define DUMP_s(v) DUMPf("%s = %s", #v, v)
#define DUMP_c(v) DUMPf("%s = '%c' (0x%02x)", #v, v, v)
#define DUMP_p(v) DUMPf("%s = %p", #v, v)

#endif
