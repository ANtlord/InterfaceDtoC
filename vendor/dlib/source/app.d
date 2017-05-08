import std.stdio, core.stdc.stdio : stderr;
extern(C) void helloC() nothrow; // a function from C
extern(C)
void helloD() nothrow {
    helloC();
    try {
        writeln("hello from D!");
    } catch(Throwable t) {
        fprintf(stderr, "writeln threw an exception.\n");
    }
}

