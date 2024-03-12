#include <stdio.h>
#include <string.h>
#include "am.c"
#include "pgm.c"
#include "shapes.c"


int main() {
    char operation[200] ;
    printf("Enter the operation: ");
    scanf("%s", operation);

    if (strcmp(operation, "add") == 0)
    {
        add();
    }
    else if (strcmp(operation, "sub") == 0)
    {
        sub();
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        mul();
    }
    else if (strcmp(operation, "divide")==0) {
        div();
    }
    else if (strcmp(operation, "shapes")==0)
    {
        shapes();
    }
    

    return 0;
}