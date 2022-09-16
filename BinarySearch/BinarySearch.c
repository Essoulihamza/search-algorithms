#include <stdio.h>
void BinarySearch(int* numbers, int x, int left, int right);
int main(void)
{
    int numbers[] = {0, 1, 2, 4, 5, 7, 9, 12, 80, 120};
    int size = sizeof(numbers) / sizeof(int);
    int x;
    printf("Enter the number that you'r searching for: ");
    scanf("%i", &x);
    BinarySearch(numbers,  x,  0,  size - 1);

}
void BinarySearch(int* numbers, int x, int left, int right)
{
    int middle;
    while (left <= right )
    {
        middle = (right + left) / 2;
        if( numbers[middle] > x ) 
        {
            right = middle - 1;
            return BinarySearch(numbers, x, left, right);
        }
        else if(numbers[middle] < x )
        { 
            left = middle + 1;
            return BinarySearch(numbers, x, left, right);
        }
        else
        {
            printf("%i is founded!!\n", x);
            return;
        }
    }
    printf("%i is not there!!\n");
}