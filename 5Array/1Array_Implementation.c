#include <stdio.h>
#include <stdlib.h>

struct Array{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct Array *a, int tSize, int uSize){
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // int (*a).ptr = (int *) malloc(tSize*sizeof(int));
    
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *) malloc(tSize*sizeof(int));
}

void ShowArray(struct Array *a){
    printf("Your Array is : ");
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d ", (a->ptr)[i]);
    }    
}

void SetVal(struct Array *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter the number:");
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }    
}

int main(){
    struct Array marks;
    createArray(&marks, 20, 5);
    SetVal(&marks);
    ShowArray(&marks);

    return 0;
}