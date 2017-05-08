#include <stdio.h>
extern int rt_init(); // prototypes of standard D runtime functions
extern void rt_term();
void helloD(); // the prototype of own our D function
void helloC() { // an existing C function we'll call from D
    printf("Hello from C!\n");
}
int main() {
    if(!rt_init()) { // init the D runtime
        fprintf(stderr, "D rt init failed.\n");
        return 1;
    }
    helloD(); // call the D function
    rt_term(); // end the D runtime
    return 0;
}

