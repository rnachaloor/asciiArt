/*
Rohit Nachaloor
Cmdr. Schenk
CS50AP
Period: 4
12-06-2019
*/
#include <stdio.h>
#include "cs50.h"
#include "cs50.c"

int main(int argc, string argv[])
{
    //array for storing characters in art piece
    char drawing[23][85];

    //outer loop for setting shifting x values
    for (int x = 1; x < 23; x++)
    {
        //inner loop for setting y values
        for (int y = 0; y < 85; y++)
        {
            /*sets every entry in array as a space by default
              ascii for space = 32 */ 
            drawing[x][y] = 32;
            if (x == 1)
            {
                //switch sets up top point of the star
                switch(y)
                {
                    //ascii for forward slash = 47
                    case 18: drawing[x][y] = 47;
                    break;
                    //ascii for backward slash = 92
                    case 19: drawing[x][y] = 92;
                }
            }

            else if (x == 2 && y < 22 && y > 15)
            {
                //switch continues setting up the star
                switch(y)
                {
                    case 16: drawing[x][y] = 47;
                    break;
                    case 21: drawing[x][y] = 92;
                    break;
                    //ascii for pound sign = 35
                    default: drawing[x][y] = 35;
                }
            }

            //first line of the candy cane 1
            else if (x == 2 && y < 38 && y > 35)
            {
                //ascii for percent sign
                drawing[x][y] = 37;
            }

            //first line of the candy cane 2
            else if (x == 2 && y < 62 && y > 59)
            {
                //ascii for percent sign
                drawing[x][y] = 37;
            }

            //continues setting up the star
            else if (x == 3 && y < 23 && y > 14)
            {
                switch(y)
                {
                    //ascii for less than sign = 60
                    case 15: drawing[x][y] = 60;
                    break;
                    //ascii for greater than sign = 62
                    case 22: drawing[x][y] = 62;
                    break;
                    default: drawing[x][y] = 35;
                }
            }

            //continues setting the characters for candy cane 1
            else if (x == 3 && y < 40 && y > 33)
            {
                switch (y)
                {
                    case 36: drawing[x][y] = 32;
                    break;
                    case 37: drawing[x][y] = 32;
                    break;
                    default: drawing[x][y] = 37;
                }
            }

            //continues setting the characters for candy cane 2
            else if (x == 3 && y < 64 && y > 57)
            {
                switch (y)
                {
                    case 60: drawing[x][y] = 32;
                    break;
                    case 61: drawing[x][y] = 32;
                    break;
                    default: drawing[x][y] = 37;
                }
            }

            else if (x == 4 && y < 22 && y > 15)
            {
                //switch continues storing chars for tree
                switch(y)
                {
                    case 16: drawing[x][y] = 92;
                    break;
                    case 21: drawing[x][y] = 47;
                    break;
                    default: drawing[x][y] = 35;
                }
            }

            else if (x == 4 && y < 40 && y > 33)
            {
                //switch continues setting characters for candy cane 1
                switch (y)
                {
                    case 36: drawing[x][y] = 32;
                    break;
                    case 37: drawing[x][y] = 32;
                    break;
                    default: drawing[x][y] = 37;
                }
            }

            //continues setting the characters for candy cane 2
            else if (x == 4 && y < 64 && y > 57)
            {
                switch (y)
                {
                    case 60: drawing[x][y] = 32;
                    break;
                    case 61: drawing[x][y] = 32;
                    break;
                    default: drawing[x][y] = 37;
                }
            }

            else if (x == 5 && y < 22 && y > 15)
            {
                //switch continues setting characters for christmas tree
                switch(y)
                {
                    case 16: drawing[x][y] = 47;
                    break;
                    case 21: drawing[x][y] = 92;
                    break;
                    case 17: drawing[x][y] = 32;
                    break;
                    case 20: drawing[x][y] = 32;
                    break;
                    default: drawing[x][y] = 43;
                }
            }

            else if (x == 5 && y < 40 && y > 33)
            {
                //continues setting characters for candy cane 1
                switch (y)
                {
                    case 36: drawing[x][y] = 32;
                    break;
                    case 37: drawing[x][y] = 32;
                    break;
                    default: drawing[x][y] = 37;
                }
            }

            //continues setting the characters for candy cane 2
            else if (x == 5 && y < 64 && y > 57)
            {
                switch (y)
                {
                    case 60: drawing[x][y] = 32;
                    break;
                    case 61: drawing[x][y] = 32;
                    break;
                    default: drawing[x][y] = 37;
                }
            }

            //continues setting characters for christmas tree
            else if (x == 6 && y < 21 && y > 17)
            {
                drawing[x][y] = 43;
            }

            //continues setting characters for candy cane 1
            else if (x == 6 && y < 40 && y > 37)
            {
                drawing[x][y] = 37;
            }

            //continues setting characters for candy cane 2
            else if (x == 6 && y < 64 && y > 61)
            {
                drawing[x][y] = 37;
            }
            
            //continues setting characters for christmas tree
            else if (x == 7 && y < 23 && y > 15)
            {
                drawing[x][y] = 43;
            }

            //continues setting up characters for candy cane 1
            else if (x == 7 && y < 40 && y > 37)
            {
                drawing[x][y] = 37;
            }

            //continues setting characters for candy cane 2
            else if (x == 7 && y < 64 && y > 61)
            {
                drawing[x][y] = 37;
            }

            //continues settng up characters for christmas tree
            else if (x == 8 && y < 25 && y > 13)
            {
                drawing[x][y] = 43;
            }

            //continues setting up characters for candy cane 1
            else if (x == 8 && y < 40 && y > 37)
            {
                drawing[x][y] = 37;
            }

            //continues setting characters for candy cane 2
            else if (x == 8 && y < 64 && y > 61)
            {
                drawing[x][y] = 37;
            }

            //starts setting up characters for snowman
            else if (x == 8 && y < 54 && y > 49)
            {
                drawing[x][y] = 42;
            }

            //setting up characters for christmas tree
            else if (x == 9 && y < 26 && y > 12)
            {
                drawing[x][y] = 43;
            }

            //setting up characters for candy cane 1
            else if (x == 9 && y < 40 && y > 37)
            {
                drawing[x][y] = 37;
            }

            //continues setting characters for candy cane 2
            else if (x == 9 && y < 64 && y > 61)
            {
                drawing[x][y] = 37;
            }

            //setting up characters for snowman
            else if (x == 9 && y < 55 && y > 48)
            {
                drawing[x][y] = 42;
            }

            //setting up characters for christmas tree
            else if (x == 10 && y < 24 && y > 14)
            {
                drawing[x][y] = 43;
            }

            //setting up characters for snowman
            else if (x == 10 && y < 56 && y > 47)
            {
                drawing[x][y] = 42;
            }

            //setting up characters for christmas tree
            else if (x == 11 && y < 26 && y > 12)
            {
                drawing[x][y] = 43;
            }

            //setting up characters for snowman for the next few if statements
            else if (x == 11 && y < 46 && y > 40)
            {
                switch(y)
                {
                    case 42: drawing[x][y] = 42;
                    break;
                    case 45: drawing[x][y] = 42;
                }
            }
            else if (x == 11 && y < 55 && y > 48)
            {
                drawing[x][y] = 42;
            }
            else if (x == 11 && y < 62 && y > 57)
            {
                switch(y)
                {
                    case 58: drawing[x][y] = 42;
                    break;
                    case 61: drawing[x][y] = 42;
                }
            }
            
            //generates the left arm of the snowman
            for (int z = 12, w = 44; z < 15; z++, w++)
            {
                drawing[z][w] = 42;
            }

            //generates the right arm of the snowman
            for (int z = 12, w = 59; z < 15; z++, w--)
            {
                drawing[z][w] = 42;
            }

            //setting up characters for snowman
            if (x == 12 && y < 54 && y > 49)
            {
                drawing[x][y] = 42;
            }

            //produces first line of reindeer antlers.
            else if (x == 12 && y < 83 && y > 62)
            {
                for (int z = 12, w = 63; w < 83; w ++)
                {
                    drawing[z][w] = 36;
                    switch (w) {
                        case 64: w = 66;
                        break;
                        case 68: w = 76;
                        break;
                        case 78: w = 80;
                    }
                }
            }

            //setting up characters for snowman
            else if (x == 13 && y < 55 && y > 48)
            {
                drawing[x][y] = 42;
            }


            //setting up characters for christmas tree
            else if (x == 12 && y < 29 && y > 9)
            {
                drawing[x][y] = 43;
            }

            //setting up characters for christmas tree
            else if (x == 13 && y < 27 && y > 11)
            {
                drawing[x][y] = 43;
            }

            // produces second line of reindeer antlers
            else if (x == 13 && y < 83 && y > 62)
            {
                for (int z = 13, w = 63; w < 83; w ++)
                {
                    drawing[z][w] = 36;
                    switch (w) {
                        case 64: w = 66;
                        break;
                        case 68: w = 76;
                        break;
                        case 78: w = 80;
                    }
                }
            }

            //setting up characters for christmas tree
            else if (x == 14 && y < 29 && y > 9)
            {
                drawing[x][y] = 43;
            }

            //setting up characters for snowman
            else if (x == 14 && y < 56 && y > 47)
            {
                drawing[x][y] = 42;
            }

            //thrid line of antlers
            else if (x == 14 && ((y > 62 && y < 69) || (y > 76 && y < 83)))
            {
                drawing[x][y] = 36;
            }

            //setting up characters for characters for christmas tree
            else if (x == 15 && y < 31 && y > 7)
            {
                drawing[x][y] = 43;
            }

            //setting up characters for snowman
            else if (x == 15 && y < 57 && y > 46)
            {
                drawing[x][y] = 42;
            }

            //fourth line of antlers
            else if (x == 15 && ((y > 64 && y < 67) || (y > 69 && y < 72) || (y > 74 && y < 77) || (y > 79 && y < 82)))
            {
                drawing[x][y] = 36;
            }

            //setting up characters for christmas tree
            else if (x == 16 && y < 32 && y > 6)
            {
                drawing[x][y] = 43;
            }

            //setting up characters for snowman
            else if (x == 16 && y < 56 && y > 47)
            {
                drawing[x][y] = 42;
            }

            //fifth line of antlers
            else if (x == 16 && ((y > 64 && y < 72) || (y > 74 && y < 82)))
            {
                drawing[x][y] = 36;
            }

            //setting up characters for christmas tree
            else if (x == 17 && y < 33 && y > 5)
            {
                drawing[x][y] = 43;
            }

            //setting up characters for snowman
            else if (x == 17 && y < 55 && y > 48)
            {
                drawing[x][y] = 42;
            }
            
            //sixth row of antlers
            else if (x == 17 && ((y > 67 && y < 70) || (y > 75 && y < 78)))
            {
                drawing[x][y] = 36;
            }

            //setting up characters for christmas tree
            else if (x == 18 && y < 34 && y > 4)
            {
                drawing[x][y] = 43;
            }

            //setting up characters for snowman
            else if (x == 18 && y < 56 && y > 47)
            {
                drawing[x][y] = 42;
            }

            //first row of the reindeer's head
            else if (x == 18 && y < 76 && y > 69)
            {
                drawing[x][y] = 36;
            }

            //setting up characters for christmas tree
            else if (x == 19 && y < 37 && y > 1)
            {
                drawing[x][y] = 43;
            }

            //setting up characters for snowman
            else if (x == 19 && y < 57 && y > 46)
            {
                drawing[x][y] = 42;
            }

            //second row of the reindeer's head
            else if (x == 19 && y < 77 && y > 68)
            {
                drawing[x][y] = 36;
            }

            //setting up characters for christmas tree trunk
            else if (x == 20 && y < 23 && y > 14)
            {
                drawing[x][y] = 43;
            }

            //setting up characters for snowman
            else if (x == 20 && y < 58 && y > 45)
            {
                drawing[x][y] = 42;
            }

            //third row of the reindeer's head
            else if (x == 20 && y < 78 && y > 67)
            {
                drawing[x][y] = 36;
            }

            //setting up christmas tree trunk
            else if (x == 21 && y < 23 && y > 14)
            {
                drawing[x][y] = 43;
            }

            //setting up snowman
            else if (x == 21 && y < 57 && y > 46)
            {
                drawing[x][y] = 42;
            }

            //fourth row of the reindeer's head
            else if (x == 21 && y < 77 && y > 68)
            {
                drawing[x][y] = 36;
            }

            //setting up christmas tree trunk
            else if (x == 22 && y < 23 && y > 14)
            {
                drawing[x][y] = 43;
            }

            //setting up snowman
            else if (x == 22 && y < 56 && y > 47)
            {
                drawing[x][y] = 42;
            }

            //fifth row of the reindeer's head
            else if (x == 22 && y < 76 && y > 69)
            {
                drawing[x][y] = 36;
            }
        }
    }

    //loop prints out array
    for (int x = 1; x < 23; x++)
    {
        //inner loop for setting y values
        for (int y = 0; y < 85; y++)
        {
            printf("%c", drawing[x][y]);
            //prints new line at the end of each line
            if(y == 84)
            {
                printf("\n");
                 
            }
        }

    }
   
    return 0;
}