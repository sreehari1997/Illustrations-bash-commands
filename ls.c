#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<sys/types.h>
void main()
{
	char path[100];
	DIR * ptr;
	struct dirent * pt;
	printf("\nEnter the path:");
	__fpurge(stdin);
	scanf("%s",path);
	ptr=opendir(path);
	while(pt=readdir(ptr))
	printf("\n%s\t%d\n",pt->d_name,pt->d_reclen);
}
