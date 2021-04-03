

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "sbmem.h"

int main()
{
    
    sbmem_init(8192); 

    printf ("memory segment is created and initialized \n");

    return (0); 
}
