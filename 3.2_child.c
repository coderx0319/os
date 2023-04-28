#include<stdio.h> 
#include<sys/types.h>
 #include<unistd.h>
 int main ( )
{
pid_t parent_id, child_id;
parent_id=getppid( );
printf("THE PARENT ID IS %d\n",parent_id ); 
child_id=getpid();
 printf("THE CHILD ID IS %d\n",child_id);
}
