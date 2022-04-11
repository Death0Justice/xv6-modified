#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  char* start = (char*)4096;
  printf(1, "About to overwrite program texts %c...\n", *start);
  memset(start, 0, 64);
  printf(1, "Overwrite Complete.\n");
  exit();
}