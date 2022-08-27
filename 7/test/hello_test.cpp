#include "hello.h"
#include<iostream>
#include<assert.h>
#include<unistd.h>
int main(int argc, char *argv[]) {
    int a[8] = {1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++) {
        if(getnum(a[i]+atoi(argv[0]))==(atoi(argv[0])+a[i]+1)) {
            return 0;
        } else {
            return -1;
        }
    }
    return 0;
}