#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 *              using the Shell sort algorithm (Knuth sequence)
 * @array: pointer to array of integers
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	/* تحديد أكبر فجوة (gap) في تسلسل Knuth */
	while (gap < size / 3)
		gap = gap * 3 + 1;

	/* تنفيذ خوارزمية Shell sort */
	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			j = i;

			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}
			array[j] = temp;
		}

		print_array(array, size);
		gap = (gap - 1) / 3; /* تقليل الفجوة حسب تسلسل Knuth */
	}
}
