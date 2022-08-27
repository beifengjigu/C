#ifndef SERVER_H
#define SERVER_H
#include<iostream>
#include<pthread.h>
#include<string>
#include<mutex>
#include<unistd.h>
#include<sqlite3.h>
using namespace std;
class Server{
private:
    void LoadConf();
public:
    void Start(unsigned short port, string ip);
};
#endif