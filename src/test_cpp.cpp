#include <assert.h>
#include <stdio.h>
#include "execinfo.h"

int
main (int argc, char** argv)
{
  assert(0 == backtrace (NULL, 0));
  assert(NULL == backtrace_symbols(NULL, 0));
}
