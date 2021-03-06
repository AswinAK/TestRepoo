//
//  main.c
//  HelloMac
//
//  Created by Aswin Anil Kumar on 8/18/16.
//  Copyright © 2016 Aswin Anil Kumar. All rights reserved.
//

#include  <stdio.h>
#include  <sys/types.h>

#define   MAX_COUNT  300

void  ChildProcess(void);                /* child process prototype  */
void  ParentProcess(void);               /* parent process prototype */

int  main(void)
{
    pid_t  pid;
    
    pid = fork();
    if (pid == 0)
        ChildProcess();
    else
        ParentProcess();
    
    return 0;
}

void  ChildProcess(void)
{
    int   i;
    
    for (i = 1; i <= MAX_COUNT; i++)
        printf("   This line is from child, value = %d\n", i);
    printf("   *** Child process is done ***\n");
    printf("End of child process");
}

void  ParentProcess(void)
{
    int   i;
    
    for (i = 1; i <= MAX_COUNT; i++)
        printf("This line is from parent, value = %d\n", i);
    printf("End of parent process");
}
