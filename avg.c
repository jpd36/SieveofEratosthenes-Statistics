/*# Jonathan Pham
 *# cs2750
 *# 03/18/18
 */

float avg (float a[],int arr_count){
	double average=0;
	int count;
	for (count = 0 ; count < arr_count ; count++) 
	{
		average += a[count];
	}
	return (average/arr_count);
}
