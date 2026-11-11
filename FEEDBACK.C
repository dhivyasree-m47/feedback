#include<stdio.h>
int main ()
{
FILE*fp;
char buffer[1000];
fp=fopen("FEEDBACK.txt","w");
if(fp==NULL)
{
printf("file cannot be opened");
return 0;
}
fprintf(fp,"feedback of c programming\n");
fprintf(fp,"1.understanding the basic concepts is easy\n");
fprintf(fp,"2.learning c programming is intresting and useful\n");
fprintf(fp,"3.sometimes debugging errors takes more time\n");
fprintf(fp,"4.practical sessions help to improve programming skills\n");
fprintf(fp,"5.difficult compare to python\n");
fclose(fp);
fp=fopen("FEEDBACK.txt","a");
if(fp==NULL)
{
printf("file cannot be opened");
return 0;
}
fprintf(fp,"feedback about c trainer\n");
fprintf(fp,"1.the trainer explains clearly\n");
fprintf(fp,"2.doubts are explained well\n");
fprintf(fp,"3.the trainer explains every topic step by step\n");
fprintf(fp,"4.helps students improve their skills\n");
fprintf(fp,"5.the trainer makes the class interesting\n");
fclose(fp);
fp=fopen("FEEDBACK.txt","r");
if(fp==NULL)
{
printf("file cannot be opened");
return 0;
}
while(fgets(buffer,sizeof(buffer),fp)!=NULL)
{
printf("%s",buffer);
}
fclose(fp);
return 0;
}