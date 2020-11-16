# data_structure_hw5
## Result screenshot
* compile
![image](https://github.com/ShawnLu31/data_structure_hw5/blob/main/compile.JPG)
* execution:
![image](https://github.com/ShawnLu31/data_structure_hw5/blob/main/execution.JPG)
* comparison
![image](https://github.com/ShawnLu31/data_structure_hw5/blob/main/diff.JPG)
## Program structure
## Program functions
* Define:  
```c
#define TABLE_SIZE 13  
#define PRIME 7
```
1. in main function:
* variable:
* int *hash_table - 
1. the poniter to array of hash table.  
2. it restores keys.
* int *check_list - 
1. the pointer to array.  
2. This is for recording that the bucket of hash_table is empty or used.  
3. **0** mean **empty**, **1** mean this bucket is **used**.  
* int key - the inptu key.
* int index - the result of hashed key.
* Description:  
* main hash function: (hash1(key) + i*hash2(key)) % TABLE_SIZE
```c
for(int i = 0; i < TABLE_SIZE; i++)
{
index = (hash1(key) + i * hash2(key)) % TABLE_SIZE;  //hash function
if(*(check_list + index) == 0){  //the bucket haven't been used
*(hash_table + index) = key;  //put the key in the bucket
*(check_list + index) = 1;  //set check_list the bucket being used
break;
}
}
```
2. hash1(int key)
* parameter:
* key - the input key value.
* return:  
```c
return key % TABLE_SIZE;
```
3. hash2(int key)
* parameter:
* key - the input key value.
* return:  
```c
return PRIME - (KEY % PRIME);
```
4. Print(int *table)
* parameter:
* *table - the pointer of hash table.
* Description:  
print the hash table in the form "index->key" in each line.
