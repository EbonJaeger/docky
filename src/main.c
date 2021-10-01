#define EFL_BETA_API_SUPPORT 1

#include <Efl_Core.h>
#include <stdio.h>

void efl_main(void *data EINA_UNUSED, const Efl_Event *event EINA_UNUSED) {
    printf("Hello, world!\n");
    efl_exit(0);
}

EFL_MAIN()