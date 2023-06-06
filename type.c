#include <stdlib.h>
#include <stdio.h>
#include<unistd.h>
#include <string.h>
 
int main(int argc, char **argv)
{
        int i=0;
        char alpha[]="Lorem Ipsum is just a shit";
 
        while(i<26)
        {
 
    printf("%c",alpha[i]);
    i++;
    sleep(0.98);
    fflush(stdout);
        }
    return 0;
}
