/*# Jonathan Pham
 *# cs2750
 *# 03/18/18
 */

float max (float a[],int arr_count) 
{
	double high;
	high = a[0];
	int count;
	for (count = 1 ; count < arr_count ; count ++)
	{
		if (a[count] > high)
			high = a[count];
	}
	return high;
}
