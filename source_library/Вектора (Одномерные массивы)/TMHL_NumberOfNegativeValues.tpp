template <class T> int TMHL_NumberOfNegativeValues(T *a, int VMHL_N)
{
/*
Функция подсчитывает число отрицательных значений в векторе (одномерном массиве).
Входные параметры:
 a - указатель на исходный массив;
 VMHL_N - количество элементов в массиве.
Выходной параметр:
 Число отрицательных значений в массиве.
*/
int VMHL_Result=0;
for (int i=0;i<VMHL_N;i++)
	if (a[i]<0)
		VMHL_Result++;
		
return VMHL_Result;
}