#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
void main()
{
  int p1,p2;
  char s[100],d[100],str[1000];
  struct stat sb;
  printf("\nEnter the souce path:");
  __fpurge(stdin);
  scanf("%s",s);
  printf("\nEnter the destination path:");
  __fpurge(stdin);
  scanf("%s",d);
  p1=open(s,O_RDONLY);
  p2=open(d,O_RDWR|O_CREAT|O_APPEND,S_IRWXU);
  fstat(p1,&sb);
  read(p1,&str,sb.st_size);
  write(p2,&str,sb.st_size);
  printf("\nCopied\n");
}
