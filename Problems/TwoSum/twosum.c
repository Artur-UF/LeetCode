#include <stdio.h>
#include <stdlib.h>


#define NSIZE 4
#define TARGET 9


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int *idxs = (int*)malloc(2*sizeof(int));

    for(int i = 0;i < numsSize;i++){
        for(int j = i+1;j < numsSize;j++){
            if(nums[i]+nums[j] == target){
                idxs[0] = i;
                idxs[1] = j;
            }
        }
    }
    return idxs;
}

int main(){

    int *nums = (int *)malloc(NSIZE*sizeof(int));
    int target = TARGET;

    for(int i = 0;i < NSIZE;i++){
        switch(i){
            case(0):
                nums[0] = 2;
                break;
            case(1):
                nums[1] = 7;
                break;
            case(2):
                nums[2] = 11;
                break;
            case(3):
                nums[3] = 15;
                break;
        }
        printf("[%d] = %d\n", i, nums[i]);
    }
  
    int *returnSize; 
    int *solution = twoSum(nums, 4, target, returnSize);

    printf("[%d, %d]\ntamanho da resposta = %d\n", solution[0], solution[1], *returnSize);


    return 0;
}





