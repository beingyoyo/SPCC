#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LINE_SIZE 40
#define NAME_SIZE 20
#define VAR_SIZE 20
#define MNT_SIZE_INIT 10
#define MDT_SIZE_INIT 20
//Defining the structures for the databases
struct MDT
{	
	char line[LINE_SIZE];
};

struct MNT
{
	char name[NAME_SIZE];
	int ,dtc
};

struct ALA
{
	char line[LINE_SIZE];
};

void insert(MDT mdt_element,MDT *MDT, int *MDT_size)
{
	int size=((*MDT_size/MDT_SIZE_INIT)+1)*MDT_SIZE_INIT;
	if(*MDT_size<size)
	{
		realloc(MDT,size+MDT_SIZE_INIT);
	}

	MDT[*MDT_size]=mdt_element;
	*MDT_size++;
}

void insert(MNT mnt_element,MNT *MNT, int *MNT_size)
{
	int size=((*MNT_size/MNT_SIZE_INIT)+1)*MNT_SIZE_INIT;
	if(*MNT_size<size)
	{
		realloc(MNT,size+MNT_SIZE_INIT);
	}

	MNT[*MNT_size]=mnt_element;
	*MNT_size++;
}

void main()
{
	int i;
	//Creating the database variables
	MDT MDT[MDT_SIZE_INIT];
	MNT MNT[MNT_SIZE_INIT];
	int MDT_size = 0, MNT_size=0;

	//Read the file containing the MACRO
	FILE *file=fopen("macroprogram.txt","r");
	char *line=NULL;
	ssize_t line_len;
	size_t len=0;

	while((line_len=getline(&line,&len,file))!=-1)
	{
		if (strcmp(line,"MACRO")!=0)
		{
			line_len=getline(&line,&len,file);
			for(i=0;i<line_len;i++)
			{
				if (line[i]=="&")
				{
					
				}
			}
		}
	}
}