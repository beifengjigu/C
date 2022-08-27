#include "server.h"
#define THREAD_NUM 4
static mutex mux;
static void *status(void *num) {
    int a = *(int *)num;
    while (1)
    {
        unique_lock<mutex> lock(mux);
        cout<<"thread "<<a<<endl;
        lock.unlock();
        usleep(100);
    }
    
}
void Server::Start(unsigned short port, string ip) {
    pthread_t thread[THREAD_NUM];
    for(int i=0; i<THREAD_NUM; i++) {
        pthread_create(&thread[i], NULL, status, (void *)&i);
    }
    while(1) {
        usleep(1000);
    }
}