#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    pid_t id = fork();
    printf("process ID: %d\nfork return value: %d\n", getpid(), id);
    if (id == 0) {
        puts("im child");
    }
    else{
        puts("im parent");
    }
}