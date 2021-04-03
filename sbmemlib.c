
#include <stdio.h>
#include <stdlib.h>

// Define a name for your shared memory; you can give any name that start with a slash character; it will be like a filename.

// Define semaphore(s)

// Define your stuctures and variables. 

int sbmem_init(int segmentsize)
{
    printf ("sbmem init called"); // remove all printfs when you are submitting to us.  
    return (0); 
}

int sbmem_remove()
{

    return (0); 
}

int sbmem_open()
{

    return (0); 
}


void *sbmem_alloc (int size)
{
    return (NULL);
}


void sbmem_free (void *p)
{

 
}

int sbmem_close()
{
    
    return (0); 
}
