#ifndef MAIN_H
#define MAIN_H

/*
 * main.c
 */

#include <time.h>  // for time_t

// TODO: These should all be deleted, or moved away soon.
extern time_t boot_time;

#ifdef __cplusplus
extern "C" {
#endif
  int real_main(int argc, char **argv);
#ifdef __cplusplus
}
#endif

#endif
