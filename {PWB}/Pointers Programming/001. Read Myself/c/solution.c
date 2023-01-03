#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch, filename[25];
   FILE *fp;

   printf("Enter The File Name You Want To Open \n");
   gets(filename);

   fp = fopen(filename,"r");

   if( fp == NULL )
   {
      perror("Error While Opening The File. Or File Not Exist\n");
      exit(EXIT_FAILURE);
   }

   printf("\nYour File If Given Below %s :\n\n", filename);

   while( ( ch = fgetc(fp) ) != EOF )
   printf("%c",ch);

   fclose(fp);
   return 0;
}
