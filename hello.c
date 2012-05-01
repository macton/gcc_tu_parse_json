#include <stdio.h>

int
main( int argc, char** argv )
{
  printf("hello, world!\n");
  printf("argc: %d\n",argc);
  printf("argv: [ ");
  for (int i=0;i<argc;i++)
  {
    printf("%s, ",argv[i]);
  }
  printf("]\n");
  return (0);
}
