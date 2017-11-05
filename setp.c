#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){
    if(argc!=3) 
    	printf(2,"input format: setp pid priority\"");
    else if(atoi(argv[2]) < 0 || atoi(argv[2]) > 100)
    	printf(2,"Invalid Priority value\n");
    else
    	cpr(atoi(argv[1]),atoi(argv[2]));
    exit();
}