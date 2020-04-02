#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
pid_t pid = fork(); //The pid_t data type is a signed integer type which is capable of representing a process ID
int i;
if(pid)
{
	for(i=0;i<3;i++)
	{
	sleep(2);
	printf("The parent peocess : %d\n",i);
	}
}

else
{
        for(i=0;i<3;i++)
        {
        sleep(2);
        printf("The child peocess : %d\n",i);
        }
}

return 0;
}
