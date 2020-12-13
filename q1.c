#include<stdio.h>
#include<string.h>

void main()
{         FILE *fp;
         char pattern [50];
         char fileName [50];
         char buffer[50];
          printf("Enter the file name here : \n");
          scanf("%s",fileName);
     
         printf("Enter the pattern here : \n");
         scanf("%s",pattern);
     
              
              fp = fopen(fileName,"r"); 
              if (fp == NULL || fp == 0){ // when not found file
                  perror("error : file not found ");
                  return(-1);}
   
              
             while(fscanf(fp , "%[^\n]\n" , buffer)!=EOF) // EOF end of file
            {
                      if(strstr(buffer , pattern) !=NULL)
                     {
                              
                             printf("%s\n" , buffer);
                      }
                     else
                    {
                            continue;
                    }
           }
            fclose(fp);
            return(0);
            }