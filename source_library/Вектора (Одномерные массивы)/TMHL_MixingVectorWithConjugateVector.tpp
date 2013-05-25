template <class T, class T2> void TMHL_MixingVectorWithConjugateVector(T *VMHL_ResultVector, T2 *VMHL_ResultVector2, double P, int VMHL_N)
{
/*
Функция перемешивает массив вместе со сопряженным массивом. Поочередно
рассматриваются номера элементов массивов. С некоторой вероятностью
рассматриваемый элемент массива меняется местами со случайным элементом массива.
Пары элементов первого массива и сопряженного остаются без изменения.
Входные параметры:
 VMHL_ResultVector - указатель на исходный массив;
 VMHL_ResultVector2 - указатель на сопряженный массив;
 P - вероятность того, что элемент массива под рассматриваемым номером поменяется
 местами с каким-нибудь другим элементов (не включая самого себя);
 VMHL_N - количество элементов в массивах.
Возвращаемое значение:
 Отсутствует.
*/
int i,j;
for (i=0;i<VMHL_N;i++)
 {
 if (MHL_RandomNumber()<P)
  {
  j=MHL_RandomUniformInt(0,VMHL_N-1);
  if (j>=i) j++;
  TMHL_NumberInterchange (&VMHL_ResultVector[i],&VMHL_ResultVector[j]);//меняем местами элементы массива
  TMHL_NumberInterchange (&VMHL_ResultVector2[i],&VMHL_ResultVector2[j]);//меняем местами элементы сопряженного массива
  }
 }
}