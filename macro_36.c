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

void main()
{
	//Creating the database variables
	MDT MDT[MDT_SIZE_INIT];
	MNT MNT[MNT_SIZE_INIT];

	//Read the file containing the MACRO
	FILE *fp=fopen("macroprogram.txt","r");

}