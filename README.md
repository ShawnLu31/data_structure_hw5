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
* variable:
   * int *hash_table - 1. the poniter to array of hash table.  
                       2. it restores keys.
   * int *check_list - 1. the pointer to array.  
                       2. This is for recording that the bucket of hash_table is empty or used.  
                       3. 0 mean empty, 1 mean this bucket is used.  
   * int key - the inptu key.
   * int index - the result of hashed key.
   

1. in main function
   * parameter:
2. hash1(int key)
   * parameter:
      * key - the input key value.
   * retirn:  
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
