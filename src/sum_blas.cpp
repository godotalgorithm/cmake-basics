// implementation of BLAS-based summation function

int sum_blas(int a, int b)
{
  int size = b-a+1
  int stride = 1;
  double *int_list = new double[size];
  double *one_list = new double[size];

  for(int i=0 ; i<size ; i++)
  {
    int_list[i] = (double)(a+i);
    one_list[i] = (double)1.0;
  }

  double ans = ddot(&size, int_list, &stride, one_list, &stride);

  delete[] int_list;
  delete[] one_list;

  return (int)ans;
}
