#include <stddef.h>

int strlen (const char *str) {
  int i = 0;
  
  for (;;) {
    if (str[i] == '\0') {
      break;
    }
    i++;
  }

  return i;
}
