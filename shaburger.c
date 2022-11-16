#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/** 
 * Display a message in stdout
*/
void l(char msg[]) {
    fprintf(stdout, "[%d] %s @ %d \n", getpid(), msg, __LINE__);
}

/**
 * Display a message in stderr
*/
void e(char msg[]) {
    fprintf(stderr, "[%d] %s @ %d \n", getpid(), msg, __LINE__);
}