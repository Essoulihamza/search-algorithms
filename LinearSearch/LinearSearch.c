#include <stdio.h>
void LinearSearch(int *numbers, int size, int x);
int main(void)
{
    int numbers[] = {1, 3, 4, 8, 9, 0, 11, 32, 8};
    int size = sizeof(numbers) / sizeof(int);
    int x;
    printf("Enter the number that you'r searching for: ");
    scanf("%i", &x);
    LinearSearch( numbers, size, x);
}
void LinearSearch(int *numbers, int size, int x)
{
    for( int i = 0; i < size; i++ )
    {
        if( numbers[i] == x )
        {
            printf("%i is among the numbers list.",x);
            return;
        }
    }
    printf("%i is not among the numbers list.", x);
}