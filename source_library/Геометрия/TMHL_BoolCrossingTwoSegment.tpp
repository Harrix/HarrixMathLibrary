template <class T> int TMHL_BoolCrossingTwoSegment(T b1,T c1,T b2,T c2)
{
/*
Функция определяет наличие пересечения двух отрезков. Координаты отрезков могут быть перепутаны по порядку в каждом отрезке.
Входные параметры:
 b1 - левый конец первого отрезка;
 c1 - правый конец первого отрезка;
 b2 - левый конец второго отрезка;
 с2 - правый конец второго отрезка.
Возвращаемое значение:
 1 - отрезки пересекаются;
 0 - отрезки не пересекаются.
*/
//Запишем во временные переменные
T B1=b1,B2=b2,C1=c1,C2=c2;
if (B1>C1) TMHL_NumberInterchange (&B1,&C1);
if (B2>C2) TMHL_NumberInterchange (&B2,&C2);
if (B1>C2)
 {
 TMHL_NumberInterchange (&B1,&B2);
 TMHL_NumberInterchange (&C1,&C2);
 }
if (C1<B2)
 return 0;
else
 return 1;
}