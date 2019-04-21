/*# Jonathan Pham
 *# cs2750
 *# 03/18/18
 */

float min (float a[],int arr_count) 
{
	double min;
	min = a[0];
	int count;
	for (count = 1 ; count < arr_count ; count ++)
	{
		if (a[count] < min)
			min = a[count];
	}
	return min;
}
