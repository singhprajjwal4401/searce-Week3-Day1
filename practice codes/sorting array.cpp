#include <stdio.h>

void main()

{

        int temp, size, array[100];

        printf("Enter the size \n");

        scanf("%d", &size);

        printf("Enter the numbers \n");

        for (int i = 0; i < size; ++i)

         scanf("%d", &array[i]);

        for (int i = 0; i < size; ++i)

        {

          for (int j = i + 1; j < size; ++j)

         {

             if (array[i] > array[j])

         {

                 temp = array[i];

                 array[i] = array[j];

                 array[j] = temp;

          }

         }

        }

      printf("sorted array:\n");

       for (int i = 0; i < size; ++i)

         printf("%d\n", array[i]);

 }
