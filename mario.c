/* mario time
    coder : SM Raiyyan
 */   

#include<stdio.h>
#include<cs50.h>

int main()
{
    int height;
    do
   {
           // prompt user for height
        printf("height :");
        height = GetInt();
    }
    
    // height should be from 0 to 23 
    while(height < 0 || height > 23);
    
    // for number of rows 
    for(int i = 0 ; i < height ; i++)
    {
        
        // for spaces
        for(int j = 0 ; j < (height - i - 1)  ; j++)
        
        {
            printf(" ");
        }
        
        // for hashes
        for(int k = 0 ; k < i+2 ; k++)    
        {
            printf("#");
        }
        printf("\n");
    }
}