#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/*
 * main: entry point of the program
 * argc- returns the int of what is written on the terminal
 * argv[]- holds the value of the no of things
 */ 

int main(int argc, char *argv[])
{
	int fd;
	char buf[25];


	/*open and create a file */

	fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);
	
	if(fd == -1)
	{
		printf("Failed to create and open the file.\n");
		exit(1);	
	
	}
	
	/*write to a file */

	write(fd, "sheyi writes to a file.\n", 24);	
	
	close(fd);
	
	/* read a file only */

	fd = open("myfile.txt", O_RDONLY);

	if(fd == -1)
	{
		printf("Failed to open and read the file.\n");
		exit(1);	
			
	}
	
	/* read a file after it opened, also close it*/
	
	read(fd, buf, 24);
	buf[25] = '\0';	


	close(fd);

	printf("buf: %s\n", buf);

	return(0);
}	
