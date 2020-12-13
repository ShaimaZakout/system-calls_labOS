#include<stdio.h>

void main(int argc ,char *argv[])
{              FILE  *fp; // file pointer 
               char buffer[50];  
               int count = 0;
               fp  =  fopen(argv[1],"r"); // open and read files & return file pointer
                  if (fp == NULL || fp == 0){ // when not found file
                  perror("error : file not found ");
                  return(-1);}
            while(fscanf(fp , "%[^\n]\n" , buffer)!=EOF)
                      {
 
                         if(count < atoi(argv[2]))
                         {
                            printf("%s\n" ,  buffer);

                         }
                         else
                         {
                                 break;
                          }
                          count++;
             }

             fclose(fp);
             return(0);
}