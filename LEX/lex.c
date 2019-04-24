#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char *keys[6]={"void","main","int","float","do","if"};
    char *arith[7]={"+" , "-" , "*" , "/" , "%" , "++" , "--"};
    char *logical[3]={"&&" , "!" , "||"};
    char *relational[6]={"<" , ">" , "==" , "<=" , ">=" , "!="};
    char *assignop[6]={"=" , "+=" , "-=" , "*=" , "/=" , "%="};
    char *bitwise[6]={"&" , "|" , "^" , "~" , "<<" , ">>"};
    char *punct[8]={";" , "," , "{" , "}" , "[" , "]" , "(" , ")"};
    char w[100],buffer[100];
    int i,j;

    FILE *f1;
    f1=fopen("lexinput.txt","r");
    if(f1==NULL){
        printf("File is empty");
        exit(0);
    }
    else
    {
        while(fscanf(f1,"%s",w)==1)
        {
            printf("%s\n", w);
            for(i=0;i < 6; i++)
            {
                if(strcmp(w,keys[i])==0)
                    printf("%s is a Keyword\n",w);
            }

            for(i=0;i<7;i++)
            {
                if(strcmp(w,arith[i])==0)
                    printf("%s is a Arithmetic operator\n",w);
            }

            for(i=0;i<3;i++)
            {
                if(strcmp(w,logical[i])==0)
                    printf("%s is a Logical operator\n",w);
            }

            for(i=0;i<6;i++)
            {
                if(strcmp(w,relational[i])==0)
                    printf("%s is a Relational operator\n",w);
            }

            for(i=0;i<6;i++)
            {
                if(strcmp(w,assignop[i])==0)
                    printf("%s is a Assignment operator\n",w);
            }

            for(i=0;i<6;i++)
            {
                if(strcmp(w,bitwise[i])==0)
                    printf("%s is a bitwise operator\n",w);
            }

            for(i=0;i<8;i++)
            {
                if(strcmp(w,punct[i])==0)
                    printf("%s is a Special character\n",w);
            }

            if(isdigit(w[0]))
            {
                if(isdigit(w[0]) && isalpha(w[1]))
                    printf("%s is an Invalid Identifier\n", w);
                else
                    printf("%s is constant\n", w);
            }
            else if(isalnum(w[0]))
            {
                if(strlen(w)==1 && isalpha(w[0]))
                    printf("%s is Identifier\n", w);
                else if(w[0]>='0'&& w[0]<='9')
                    printf("%s is an Invalid Identifier\n", w);
            }
            j++;
        }
    }
    fclose(f1);
}