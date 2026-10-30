#include "types.h"
#include "user.h"
#include "param.h"

int stdout = 1;
char buf[8000];

int
main(int argc, char *argv[]) {
    printf(stdout, "wolfing it\n");
    
    wolfie(buf, WOLFIESIZE);
    printf(stdout, buf);

    return 0;
}