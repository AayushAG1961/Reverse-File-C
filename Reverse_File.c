#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	FILE *fp1, *fp2;
	char cont[100],ch1,ch2;
	int i=0,len=0;
	
	printf("Enter content for the file : ");
	gets(cont);
	len= strlen(cont);
	
	fp1= fopen("NewFile1.txt","w");
	fprintf(fp1,"%s",cont);
	fclose(fp1);
	
	fp1= fopen("NewFile.txt","r");
	for(i=0;i<len;i++)
	{
		ch1= cont[len-i-1];
		printf("%c", ch1);
	}
	fclose(fp1);
		
	fp1= fopen("NewFile1.txt","r");
	fp2= fopen("NewFile2.txt","w");
	ch2= fgetc(fp1);
	while(ch2!=EOF)
	{
		fputc(ch2,fp2);
		ch2= fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
}
