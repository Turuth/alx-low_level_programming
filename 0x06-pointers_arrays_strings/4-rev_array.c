#include "main.h"

/**
* reverse_array - reverse the content of an array
* @a: array
* @n: number of elements of the array
* Return: no return
*/
void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;

	while (left < right)
	{
		/*Swap elements at left and right indices*/
		int temp = a[left];

		a[left] = a[right];
		a[right] = temp;

		left++;
		right--;
	}
}
