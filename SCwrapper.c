#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\xFF\xFF\xFF\x90\x90";

/* ^^^^^ shellcode goes here */

main()
{

  printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}
