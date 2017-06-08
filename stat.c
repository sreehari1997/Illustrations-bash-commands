#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
#include<time.h>
void main()
{
  int p;
  char s[100];
  struct stat sb;
   printf("\nEnter the souce path:");
  __fpurge(stdin);
  scanf("%s",s);
  p=open(s,O_RDONLY);
  fstat(p,&sb);
  printf("\n%d\t%d\t%s\t%s\t%s\n",sb.st_size,sb.st_uid,ctime(&sb.st_atime),ctime(&sb.st_ctime),ctime(&sb.st_mtime));
}
