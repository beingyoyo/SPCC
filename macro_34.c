#include<stdio.h>
#include<fstdio.h>
#include<string.h>
#include<stdlib.h>
#define LINE_SIZE     40
#define NAME_SIZE     20
#define VAR_SIZE      20
#define MDT_SIZE_INIT 20
#define MNT_SIZE_INIT 10

// Define structures
struct MDT_element{
	char line[LINE_SIZE];
};
struct MNT_element{
	char name[NAME_SIZE];
	int mdtc;
};
struct ALA_element{
	char var_name[VAR_SIZE];
}

// Insert into MDT
void MDT_insert(MDT_element mdt_element, MDT_element *MDT, int *MDT_size){
	// Check if the size is enough
	int size = ((*MDT_size/MDT_SIZE_INIT)+1)*MDT_SIZE_INIT;
	if(*MDT_size<size){
		realloc(MDT, size+MDT_SIZE_INIT);
	}

	// Insert element at the highest position
	MDT[*MDT_size] = mdt_element;
	*MDT_size++;
}
// Insert into MNT
void MNT_insert(MNT_element mnt_element, MNT_element *MNT, int *MNT_size){
	// Check if the size is enough
	int size = ((*MNT_size/MNT_SIZE_INIT)+1)*MNT_SIZE_INIT;
	if(*MNT_size<size){
		realloc(MNT, size+MNT_SIZE_INIT);
	}

	// Insert element at the highest position
	MNT[*MNT_size] = mnt_element;
	*MNT_size++;
}

void main(){
	// Create database variables
	MDT_element MDT[MDT_SIZE_INIT];
	MNT_element MNT[MNT_SIZE_INIT];
	int MDT_size = 0, MNT_size=0;

	// Declare file reading variables
	FILE *fp = fopen("prog.txt", "r");
	char *line = NULL;
	size_t line_len;
}