#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
static void OnecharAtonce(char *);
int main()
{
pid_t pid;

   if((pid=fork())<0)
   {
	printf("fork error\n");
   }
   else if(pid==0)
   {
	OnecharAtonce("this is child process\n");
 	OnecharAtonce("this is child process\n");
	OnecharAtonce("this is child process\n");
   }
   else
   {
 	OnecharAtonce("this is parent process\n");
 	OnecharAtonce("this is parent process\n");
	OnecharAtonce("this is parent process\n");
   }
return 0;
}
static void OnecharAtonce(char *str)
{
	char *ptr;
	int c;
	for(ptr=str;(c=*ptr++)!=0;)
	putc(c,stdout);

}
