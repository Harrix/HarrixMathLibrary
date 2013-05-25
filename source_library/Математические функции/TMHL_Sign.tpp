template <class T> int TMHL_Sign(T a)
{
/*
Функция вычисляет знака числа.
Входные параметры:
 a - исходное число.
Возвращаемое значение:
 0 - если a==0;
 1 - если число положительное;
 -1 - если число отрицательное.
*/
if (a==0) return 0;
if (a>0)
 return 1;
else
 return -1;
}