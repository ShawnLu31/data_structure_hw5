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
   TABLE_SIZE = 13  
   PRIME = 7
   
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
