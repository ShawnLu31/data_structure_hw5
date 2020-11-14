#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 13
#define PRIME 7

int hash1(int key);
int hash2(int key);
void Print(int table[]);

int main(){
	//table bucket
	int *hash_table = (int*)malloc(TABLE_SIZE * sizeof(int));
	for(int i = 0; i < TABLE_SIZE; i++)
		*(hash_table + i) = 0;
	//input key
	int key = 0, index = 0;
	while(scanf("%d", &key) != EOF)
	{
		for(int i = 0; i < TABLE_SIZE; i++)
		{
			index = (hash1(key) + i * hash2(key)) % TABLE_SIZE;
			if(*(hash_table + index) == 0){
				*(hash_table + index) = key;
				break;
			}
		}
	}
	Print(hash_table);
	free(hash_table);
	return 0;
}

int hash1(int key)
{
	return key % TABLE_SIZE;
};

int hash2(int key)
{
	return PRIME - (key % PRIME);
};
void Print(int *table)
{
	for(int i = 0; i < TABLE_SIZE; i++)
	{
		if(table+i != NULL){
			printf("%d->%d", i, *(table+i));
			if(i < TABLE_SIZE - 1)
				printf("\n");
		}
	}	
	
};
