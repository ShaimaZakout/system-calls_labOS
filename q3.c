#include<stdio.h>
#include<string.h>
 

 
struct stack
{
    char Lines[1000];
}; 
 
 void main(int argc , char *argv[]){
             struct stack s[1000]; // stack 1
             struct stack s2[1000]; // stack 2
 
             char line[1000]; 
             int top=0,top2=0,count=0, n=0,n2=0;
              FILE *fp ;  
             
              fp = fopen(argv[1] , "r"); //file pointer
          
          if (fp == NULL || fp == 0){  
                  perror("error : file not found ");
                  return(-1);}
                  
                  
                  
                 //lseek(fd, -atoi(argv[2]), 2); 
                 
                // read line by line 
              while(fscanf(fp , "%[^\n]\n" , line)!=EOF)
              {
                strcpy(s[top].Lines , line);  // to copy string
                     
                            top++; // push in stack 1
                             n=top;  
               }

            // pop from stack 1 and push in stack 2    
               for( top=n; top>0;top--) 
               
              { 
                 // condtion for numbers of lines
                 if(count == atoi(argv[2]))
                 {
                    break;

                 }
                 else
                         { // push to stack 2 from pop data stack 1
                         strcpy(s2[top2].Lines , s[top].Lines);   
                            top2++; // push 
                             n2=top; 
                       
 
 
                          }
                          count++;
               }
                for( top2=n2; top2> 0;top2--){ // pop from stack 2 and print it
                   printf("%s" , s2[top2].Lines);
                  
                }
                    printf("\n");
               
               
             
               fclose(fp);
               return(0);
               
}

 