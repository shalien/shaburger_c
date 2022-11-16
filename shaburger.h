/* shaburger.h */
#ifndef LIB_SHABURGER_INCLUDED
#define LIB_SHABURGER_INCLUDED

#ifdef __cplusplus
    extern "C" {
#endif
/** 
 * Display a message in stdout
*/
void l(char msg[]);

/** 
 * Display a message in stderr
*/
void e(char msg[]);

#ifdef __cplusplus
    }
#endif

#endif