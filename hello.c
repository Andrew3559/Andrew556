#include <stdio.h>
#include <stdlib.h>
#include <time.h>

tYpedef struct {
    char name[32];
    int age;
} person;

int add(int a, int b);

int main(void) 
{
    person sue = { "Sue", 20 };

    int *data = malloc(20 * sizeof(int));
    if (data == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;   
}
    srand((unsigned)time(NULL));
    for (int i = 0; i < 20; i++){
        data[i] = rand() % 101 + 100;
    }

    for (int i = 0; i < 20; i++) {
        printf("data[%d] = %d\n", i, data[i]);
    }
 
     printf("person name = %s\n", sue.name);
    printf("person age = %d\n", sue.age);

    free(data);

    int sum = add(6, 6);
    printf("the sum of 6 and 6 is %d\n", sum);
    return 0;
}

int add(int a, int b) {
    return a + b;
}

