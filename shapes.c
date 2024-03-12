#include <stdio.h>
#include "pgm.c"

void shapes() {
    char shape[900];
        printf("Enter the shape: ");
        scanf("%s", shape);
        if (strcmp(shape, "parallelogram") == 0)
        {
            char pgm[100];
            printf("What part to find ? ");
            scanf("%s", pgm);
            if (strcmp(pgm, "area") == 0)
            {
                pgmarea();
            }
            else if (strcmp(pgm, "height") == 0)
            {
                pgmheight();
            }
            else if (strcmp(pgm, "perimeter") == 0)
            {
                pgmperi();
            }
            else
            {
                printf("Invalid part\n");
            }
            
            
        }
        else
        {
            printf("Inavalid shape\n");
        }
        
}