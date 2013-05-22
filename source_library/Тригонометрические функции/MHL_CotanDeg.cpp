double MHL_CotanDeg(double x)
{
/*
Функция возвращает котангенс угла в градусах.
Входные параметры:
 x - угол в градусах.
Возвращаемое значение:
 Котангенс угла.
*/
return 1./tan(MHL_DegToRad(x));
}