void HML_UniformSearchOptimization (double Left, double Right, double (*Function)(double), double Interval, double *VHML_Result_X,double *VHML_Result_Y)
{
/*
Метод равномерного поиска. Метод одномерной оптимизации функции на интервале. Ищет минимум.
Входные параметры:
 Left - начало интервала поиска;
 Right - конец интервала поиска;
 Function - унимодальная функция, минимум которой ищется;
 Interval - длина шага, с которым будет проводится поиск;
 VHML_Result_X - вычисленная точка минимума (сюда записывается результат);
 VHML_Result_Y - значение функции в точке минимума (сюда записывается результат).
Возвращаемое значение:
 Отсутствует.
*/
int i,n;
double min,fmin,f,x;
n=ceil(fabs(Right-Left)/Interval);
min=Left;
fmin=Function(min);
x=Left;
for (i=1;i<n;i++)
 {
 x+=Interval;
 f=Function(x);
 if (f<fmin)
  {
  min=x;
  fmin=f;
  }
 }
*VHML_Result_X=min;
*VHML_Result_Y=fmin;
}