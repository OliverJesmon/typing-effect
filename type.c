#include <stdlib.h>
#include <stdio.h>
#include<unistd.h>
#include <string.h>
 
int main(int argc, char **argv)
{
        
        char alpha[]="Lorem Ipsum is just a shit";
        int i=0,len=strlen(alpha);
        while(i<len)
        {
 
    printf("%c",alpha[i]);
    i++;
    sleep(0.98);
    fflush(stdout);
        }
    return 0;
}
