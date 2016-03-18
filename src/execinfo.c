#include <stdio.h>

#include "execinfo.h"

int
backtrace (void **buffer, int size)
{
  return 0;
}
char**
backtrace_symbols (void * const *buffer, int size)
{
  return NULL;
}
void
backtrace_symbols_fd (void * const *buffer, int size, int fd)
{
  return;
}
