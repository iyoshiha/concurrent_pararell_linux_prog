#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    pid_t id = fork();
    int status;

    puts("bike1");
    puts("bike2");
    if (id == 0) {
        puts("im child");
        sleep(5);
    }
    else{
        puts("im parent");
    }
}