#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "pstat.h"

int main(int argc,char *argv[]){
    int i;
    int x=0;
    settickets(1);
    for(i=1;i<atoi(argv[1]);i++){
        x+=i;
    }
    exit();
    return x;
}