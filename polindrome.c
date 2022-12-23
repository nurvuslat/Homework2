//C code to check whether a number is palindrome or not

#include <stdio.h>

int main()
{
    int num, temp, reversed = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        reversed = reversed * 10 + rem;
        temp = temp / 10;
    }

    if (num == reversed)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    return 0;
}

