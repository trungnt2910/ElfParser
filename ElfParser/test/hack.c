#include <stdio.h>
#include <stdint.h>

void *
_dl_open (const char *file, int mode, const void *caller_dlopen, long nsid,
          int argc, char *argv[], char *env[]);

int main(void)
{
    printf("FUCK\n");
    printf("%li", _dl_open(NULL, 0, NULL, 0, 0, NULL, NULL));
}