// #include <stdio.h>
// int main()
// {
//     int fact(int);
//     int n, f;
//     printf("enter number:");
//     scanf("%d", &n);
//     f = fact(n);
//     printf("%d", f);
//     return 0;
// }
// int fact(int x)
// {
//     int f;
//     if (x == 1)
//      return 1;
//  f = x * fact(x - 1);
// return f;
//}

// // Write a function which convert lower case string  to upper case string using recusrsion.
// #include <stdio.h>

// void toUpperCase(char str[], int i)
// {
//     if (str[i] == '\0')
//         return;

//     if (str[i] >= 'a' && str[i] <= 'z')
//     {
//         str[i] = str[i] - 32;
//     }

//     toUpperCase(str, i + 1);
// }

// int main()
// {
//     char str[100];
//     printf("Enter a word: ");
//     gets(str);

//     toUpperCase(str, 0);

//     printf("Uppercase word: %s\n", str);
//     return 0;
// }

// POINTERS-->
// #include <Stdio.h>
// int main()
// {
//     int a = 5;
//     printf("%d %d %d", a, &a, *(&a));
//     return 0;
// }

// POINTER VARIABLE--> Store address only
// #include <stdio.h>
// int main()
// {
//     int a = 5, *b;
//     b = &a;
//     printf("%d %d %d", a, *b, *&a);
// }

// #include <stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     int swap(int, int);
//     swap(a, b);
//     printf("%d %d", a, b);
// }
// int swap(int x, int y)
// {
//     int z;
//     z = x;
//     x = y;
//     y = z;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     int swap(int *, int *);
//     swap(&a, &b);
//     printf("%d %d", a, b);
// }
// int swap(int *x, int *y)
// {
//     int z;
//     z = *x;
//     *x = *y;
//     *y = z;
//}
// RECURSION PROGRAM-->

// #include <stdio.h>
// int main()
// {
//     int i, f;
//     int fact(int);
//     printf("Enter number:");
//     scanf("%d", &i);
//     f = fact(i);
//     printf("%d", f);
//     return 0;
// }
// int fact(int n)
// {
//     int f = 1;
//     if (n == 1)
//         return 1;
//     f = n * fact(n - 1);
//     return f;
// }

// #include <stdio.h>

// void toUppercase(char str[], int index)
// {
//     // Base case: stop when string ends
//     if (str[index] == '\0')
//         return;

//     // If current character is lowercase, convert to uppercase
//     if (str[index] >= 'a' && str[index] <= 'z')
//     {
//         str[index] = str[index] - 32;
//     }

//     // Recursive call for next character
//     toUppercase(str, index + 1);
// }

// int main()
// {
//     char str[100];

//     printf("Enter a lowercase string: ");
//     gets(str); // Note: use fgets() in safer programs

//     toUppercase(str, 0);

//     printf("Uppercase string: %s\n", str);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i;
//     for (i = 1; i < 10; i++)
//     {
//         if (i % 2 == 0)
//             break;
//         i++;
//         printf("%d\n", i);
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int a[5] = {10, 20, 30, 40, 50};
//     int i = 0;
//     while (i < 5)
//     {
//         printf("%d\n", a[i]);
//         i++;
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int x = 50;
//     while (x > 1)
//     {
//         x = x / 10;
//         printf("%d\n", x);
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int n = 376, x;
//     while (n > 1)
//     {
//         x = n % 10;
//         printf("%d\n", x);
//         n = n / 10;
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int i;
//     for (i = 0; i < 10; i++)
//         ;

//     printf("%d", i);
// }

// #include <stdio.h>
// int main()
// {
//     int i;
//     for (i = 40; i < 80; i++)
//         printf("\t%c", i);
// }

// TWO DIMENSIONAL ARRAY-->

// rows         columns

// #include <stdio.h>
// int main()
// {
//     int a[3][3];
//     int r, c;
//     printf("Enter nine elements :");
//     for (r = 0; r < 3; r++)
//         for (c = 0; c < 3; c++)
//             scanf("%d", &a[r][c]);
//     for (r = 0; r < 3; r++)
//     {
//         for (c = 0; c < 3; c++)
//             printf("%d ", a[r][c]);
//         printf("\n");
//     }
//}

// WAP to find the sum of diagonals of a square matrix

// #include <stdio.h>

// int main()
// {
//     int n, i, j, sum = 0;

//     printf("Enter the size of the matrix (n x n): ");
//     scanf("%d", &n);

//     int matrix[n][n];

//     printf("Enter the elements of the matrix:\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     for (i = 0; i < n; i++)
//     {
//         sum += matrix[i][i];
//         if (i != n - 1 - i)
//         {
//             sum += matrix[i][n - 1 - i];
//         }
//     }

//     printf("Sum of diagonals = %d\n", sum);

//     return 0;
// }

// WAP to add two matrices
// WAP to multiply two matrices
// #include <stdio.h>
// struct student
// {
//     int Roll;
//     float marks;
// };
// int main()
// {
//     struct student s1, s2;
//     printf("Enter Roll & marks");
//     scanf("%d%f", &s1.Roll, &s1.marks);
// }

// #include <stdio.h>
// struct student
// {
//     int roll;
//     float marks;
// };
// int main()
// {
//     struct student s1, s2;
//     printf("Enter roll & marks:");
//     scanf("%d %f", &s1.roll, &s1.marks);
//     s2 = s1;
//     printf("%d\n%.2f", s2.roll, s2.marks);
// }

// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     char name[20];
//     int Roll;
//     float marks;
// };
// int main()
// {
//     struct student s1, s2;
//     strcpy(s1.name, "Raj kumar");
//     s1.Roll = 1040;
//     s1.marks = 75;
//     ;
//     s2 = s1;
//     printf("\n%s %d %f", s2.name, s2.Roll, s2.marks);
// }

#include <stdio.h>
#include <string.h>
union student
{
    char name[20];
    int roll;
    float marks;
};

int main(void)
{
    union student s;

    /* Write to the string member, then print it. */
    strncpy(s.name, "Satyarth", sizeof(s.name));
    s.name[sizeof(s.name) - 1] = '\0';
    printf("After writing name: %s\n", s.name);

    /* Now write to the integer member — this overwrites the union storage. */
    s.roll = 101;
    printf("After writing roll: %d  (name is now undefined)\n", s.roll);

    /* Now write to the float member — this again overwrites the same storage. */
    s.marks = 95.5f;
    printf("After writing marks: %.2f  (roll/name are now undefined)\n", s.marks);

    return 0;
}
