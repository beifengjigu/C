#include "server.h"
int main() {
    Server server;
    server.Start(22, "192.168.0.1");
    return 0;
}