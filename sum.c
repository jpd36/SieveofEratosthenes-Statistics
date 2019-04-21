/*# Jonathan Pham
 *# cs2750
 *# 03/18/18
 */

float sum(float a[], int arr_count){

  double my_sum = 0;
  int i;
  for (i = 0; i < arr_count; i++){
    my_sum += a[i];
  }
  return my_sum;
}
