#ifndef PGZX_PQSRV_HELPERS
#define PGZX_PQSRV_HELPERS

#include <stdint.h>

// re-export the `libpqsrv` helper functions.
// The original functions use C-inline code, but unfortunately the translated
// zig code does not compile. We just wrap and reexport the functions that we need.

void pqsrv_connect_prepare(void);

void *pqsrv_connect(const char *conninfo, uint32_t wait_event_info);

void*
pqsrv_connect_params(const char *const *keywords,
						const char *const *values,
						int expand_dbname,
						uint32_t wait_event_info);

void
pqsrv_disconnect(void *conn);

#endif
