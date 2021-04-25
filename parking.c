/* H ergasia me mperdeje kai medyskoleje para poly me apotelesma na mhn bro to lathos poy exei 
ginei, parolayta elpizo ena mikro kommati tis na einai sosto, kai prokeimenoy na mhn paro apoysia 
tin stelno etsi */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char(*arr)[10], char *no, int type);

int main (void)
{
    char cars[200][10];
    char motors[40][10];

    char a[10];
    int type;
	int pos;
	int res;
    int sum;

    while (strcmp("end", a) != 0)
    {
        printf("License Plate: \n");
        scanf("%s", &a);

        printf("Type of vehicle: ");
        scanf("%d", &type);

        if (type == 1) 
		{
            res = check(cars, a, 1);
            if (res == -1) 
			{
                pos = organize(cars, 1);
                strcpy(cars[pos], a);
            }
			else 
			{
                sum += 10;
                strcpy(cars[res], "0000000000");
            }
        } 
		else if (type == 2) 
		{
            res = check(cars, a, 2);
            if (res == -1) 
			{
                pos = organize(motors, 2);
                strcpy(motors[pos], a);
            } 
			else 
			{
                sum += 4;
                strcpy(motors[res], "0000000000");
            }
        }    
    }
    return 0;
}

int check(char (*arr)[10], char *no, int type) 
{
    
    int i;

    if (type == 1)
    {
        i = 0;
        while (strcmp(arr[i], no) != 0 && i<199) 
		{
            i += 1;
        }
        if (i < 199) 
		{
            return i;
        } 
		else 
		{
            return -1;
        }
    }
}

int organize(char (*arr)[10], int type) 
{
    
    int i;
    
    if (type == 1) 
	{
        for (i = 0; i < 199; i++) 
		{
            if (strcmp(arr[i], "0000000000") == 0) 
			{
                return i;
            }
        }
    } 
	else if (type == 2) 
	{
        for (i = 0; i < 39; i++) 
		{
            if (strcmp(arr[i], "0000000000") == 0) 
			{
                return i;
            }
        }
    }  
    
}
