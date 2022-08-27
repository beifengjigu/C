#ifndef VERSION_H
#define VERSION_H
#define PEOJECT_VERSION_MAJOR 0
#define PEOJECT_VERSION_MINOR 1
#include<stdio.h>
void version() {
    printf("Version is %d.%d\n", PEOJECT_VERSION_MAJOR, PEOJECT_VERSION_MINOR);
}
#endif
