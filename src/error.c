#include <stdarg.h>
#include "zgl.h"

void gl_fatal_error(char *format, ...)
{
#ifndef NOLOG
  va_list ap;
  va_start(ap,format);

  fprintf(stderr,"TinyGL: fatal error: ");
  vfprintf(stderr,format,ap);
  fprintf(stderr,"\n");

  va_end(ap);
#endif // NOLOG
	exit(1);
}
