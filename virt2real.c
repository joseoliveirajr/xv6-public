#include "types.h"
#include "user.h"

int stdout = 1;
int stderr = 2;

int main(int argc, char *argv[]) {

  //int inteiro;

  printf(stdout, "%s %s %s\n", argv[0], argv[1], argv[2]);

  exit();
}
