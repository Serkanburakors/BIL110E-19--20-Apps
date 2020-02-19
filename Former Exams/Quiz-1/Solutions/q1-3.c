#include <stdio.h>
#include <math.h>

int main(void)
{
    int k;

    printf("Enter a value from 1 to 12 to see resutls or -1 to exit: " );
    scanf("%d", &k);
    
    while ( k!=-1 )
    {
        switch (k)
        {
    
            case 1:
                printf("January\n");
                break;
    
            case 2:
                printf("February\n");
                break;
    
            case 3:
                printf("March\n");
                break;
    
            case 4:
                printf("April\n");
                break;
    
            case 5:
                printf("May\n");
                break;
        
            case 6:
                printf("June\n");
                break;
    
            case 7:
                printf("July\n");
                break;
    
            case 8:
                printf("August\n");
                break;
    
            case 9:
                printf("September\n");
                break;
            
            case 10:
                printf("October\n");
                break;
            
            case 11:
                printf("November\n");
                break;
            
            case 12:
                printf("December\n");
                break;
        
            default:
                printf("Incorrect value entered.\n");
                break;
        }
        
        printf("Enter a value from 1 to 12 to see resutls or -1 to exit: " );
        scanf("%d", &k);
        
    }

    return 0;
 } 