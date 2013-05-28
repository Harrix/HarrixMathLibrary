template <class T> void TMHL_GrayCodeToBinaryFromPart(T *a, T *VMHL_ResultVector, int Begin, int n)
{
/*
Функция переводит бинарный код Грея в бинарный код.
При этом бинарный код Грея берется как часть некой строки a, заполненной 0 и 1.
Входные параметры:
 a - строка, заполненная 0 и 1;
 VMHL_ResultVector - сюда записывается вектор бинарного числа. Причем запись происходит в те же элементы по номерам, что брались из вектора a, то есть в номера элементов от Begin до Begin+n. Остальные элементы в VMHL_ResultVector не трогаются.
 Begin - номер элемента массива a как начало числа в виде кода Грея (начиная с нуля);
 n - длина числа в виде кода Грея (это не длина вектора a).
Возвращаемое значение:
 Отсутствует.
*/
for (int j=0;j<n;j++)
 {
 if (j==0)
  VMHL_ResultVector[j+Begin]=a[j+Begin];//Первый бит остается прежним
 else
  {
  if (VMHL_ResultVector[j+Begin-1]==0)
   VMHL_ResultVector[j+Begin]=a[j+Begin];//оставляем без изменения
  else
   VMHL_ResultVector[j+Begin]=1-a[j+Begin];//инвертируем
  }
 }
}