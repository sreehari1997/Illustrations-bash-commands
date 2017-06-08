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
  int p,i,j,k;char * res;
  char s[100],str[1000],pat[100],temp[500];
  struct stat sb;
   printf("\nEnter the souce path:");
  __fpurge(stdin);
  scanf("%s",s);
   printf("\nEnter the pattern:");
  __fpurge(stdin);
  scanf("%s",pat);
  p=open(s,O_RDONLY);
  fstat(p,&sb);
  read(p,str,sb.st_size);
  for(i=0;i<strlen(str);i++)
  {
	k=0;
	while(str[i]!='\n')
	{
	temp[k]=str[i];
	i++;
	k++;
	}
	temp[k]='\0';
	res=strstr(temp,pat);
	if(res)
	printf("%s\n",temp);
  }
printf("\n");
}
