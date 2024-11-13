#include "config.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printHelp() {
  printf("Usage: ./program <month>\n");
  printf(" - Enter month as a number (1-12) or name (e.g., \"January\" or "
         "\"Prosinec\").\n");
  printf("Examples:\n");
  printf("   ./program 1\n");
  printf("   ./program January\n");
  printf("   ./program Pro\n");
}

int printMonth(int mi, int s) {
  if (s == 1)
    mi--;

  printf("CZ: %s\nEN: %s\nNumeric: %d\n", m[mi].czD, m[mi].en, mi + 1);
  fflush(stdout);
  return 0;
}

int fromName(char *arg) {
  for (size_t j = 0; j <= 11; j++) {
    if ((strcmp(m[j].cz, arg) == 0) || (strcmp(m[j].en, arg)) == 0 ||
        (strcmp(m[j].czD, arg) == 0)) {
      printMonth(j, 69);
      return 0;
    }
  }
  return 1;
}

int fromNumber(char *arg, size_t len) {

  if (!isdigit(arg[0]) || !isdigit(arg[len - 1])) {
    return 1;
  }
  int val = atoi(arg);
  if (val <= 0 || val > 12) {
    return 1;
  }
  printMonth(val, 1);
  return 0;
}

int findMonth(char *arg) {
  size_t len = strlen(arg);
  if (len == 1 || len == 2) {
    if (fromNumber(arg, len) == 1) {
      return 1;
    }
  }

  if (fromName(arg) == 1) {
    return 1;
  }

  return 0;
}

int main(int argc, char *argv[]) {

  if (argc != 2) {
    printHelp();
    return 1;
    printf("Invalid month input.\n");
  }

  if (findMonth(argv[1]) != 0) {

    printHelp();
    printf("Invalid month input.\n");
    return 1;
  }
}
