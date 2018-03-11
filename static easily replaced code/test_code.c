#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"

int main() {

	char s[] = "Tell friend and came";
	encrypt(s);
	printf("Encrypted in %s\n", s);
	printf("Checksum %i\n", checksum(s));
	encrypt(s);
	printf("Decrypted in %s\n", s);
	printf("Checksum %i\n", checksum(s));

	return 0;
}