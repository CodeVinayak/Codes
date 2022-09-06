#include <stdio.h>
int main()
{
    int marks[2][4] = {{45, 5, 6, 3},
                       {3, 5, 55, 97}}; //declaration with inisilization
                                        // for (int i = 0; i < 4; i++)
                                        // {
                                        //     printf("Emter the value of %d element of the aray\n",i);
                                        //     scanf("%d",&marks[i]);
                                        // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* code */
            // printf("the value of %d , %d element of the aray is %d\n", i, j, marks[i][j]);
            printf("%d",marks[i][j]);
        }
        printf("\n");
        // scanf("%d",&marks[i]);
    }

    // marks[0]=34;
    // printf("Marks of a student 1 is %d\n",marks[0]);
    // marks[0]=45;
    // printf("Marks of a student 2 is %d\n",marks[0]);

    return 0;
}