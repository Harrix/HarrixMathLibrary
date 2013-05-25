template <class T> void TMHL_MatrixTMultiplyMatrix(T **a, T **b, T **VMHL_ResultMatrix, int VMHL_N, int VMHL_M, int VMHL_S)
{
/*
Функция умножает транспонированную матрицу на матрицу.
Входные параметры:
 a - первый сомножитель (матрица, которую мы транспонируем), VMHL_M x VMHL_N;
 b - второй сомножитель, VMHL_M x VMHL_S;
 VMHL_ResultMatrix - произведение матриц (сюда записывается результат), VMHL_N x VMHL_S;
 VMHL_N - число столбцов в матрице a;
 VMHL_M - число строк в матрице a и строк в матрице b;
 VMHL_S - число столбцов в матрице b.
Возвращаемое значение:
 Отсутствует.
*/
T w;
int i,j,k;
for (i=0;i<VMHL_N;i++)
 for (k=0;k<VMHL_S;k++)
  {
  w=0;
  for (j=0;j<VMHL_M;j++) w=w+a[j][i]*b[j][k];
  VMHL_ResultMatrix[i][k]=w;
  }
}