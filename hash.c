#include <stdio.h>
#include <string.h>
#include <unistd.h>

unsigned int hash(char *string) {
  int i;
  unsigned int aux;
  unsigned int res;

  res = 0;

  for (i = 0; i < strlen(string); i++) {  
    aux = (res + string[i]) * 0x401;
    res = aux ^ aux >> 6 ^ string[i];
  }

  return res;
}

int main() {
  char password[8];
  read(0, password, 8);

  if (hash(password) == 0x03319f75) {
    puts("Correct");
  } else {
    puts("Wrong");
  }

  return 0;
}
