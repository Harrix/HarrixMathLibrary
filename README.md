MathHarrixLibrary
===================

Версия v.3.10.

https://github.com/Harrix/MathHarrixLibrary

Сборник различных математических функций и шаблонов с открытым кодом на языке C++. Упор делается на алгоритмы искусственного интеллекта. Используется только C++.

Для справки по установке, использованию и всем функциям перейдите в папку **_library** и откройте файл **MathHarrixLibrary_Help.pdf**. Там же находятся файлы последней версии библиотеки.

Библиотека распространяется по лицензии Apache License, Version 2.0.

Структура папок на GitHub
--------------------------

В проекте https://github.com/Harrix/MathHarrixLibrary имеются следущие папки:

**_library** - непосредственно сама библиотека. В папке содержится последний билд библиотеки.

**demo** - папка с программой DemoMathHarrixLibrary.exe, демонстрирующей работу функций библиотеки.

**make** - папка с программой MakeMathHarrixLibrary.exe, которая формирует из исходников в папке source_library библиотеку и справку к ней.

**source_demo** - папка с исходным текстом программы DemoMathHarrixLibrary.exe.

**source_library** - папка с исходным текстом библиотеки, который потом собирается программой MakeMathHarrixLibrary.exe из папки make.

**source_make** - папка с исходным текстом MakeMathHarrixLibrary.exe и справки по ней.

**LICENSE.txt**, **NOTICE.txt** - файлы лицензии Apache License, Version 2.0.

**README.md** - непосредственно этот файл.

История проекта
---------------

**[-]** исправление

**[+]** добавление

**[*]** разное

**3.11.**

**[+]** Добавлены функции из раздела "Для тестовых функций", так что теперь теперь в библиотеке 236 функций.

**[-]** Исправлены мелкие неточности в документации.

**3.10.**

**[+]** Добавлены функции, так что теперь теперь в библиотеке 219 функций.

**3.9.**

**[-]** Исправлены названия тестовых функций.

**[+]** Добавлены различные функции, так что теперь теперь в библиотеке 217 функций.

**3.8.**

**[*]** В DemoMathHarrixLibrary.exe теперь используется jquery.

**[*]** Обновлены модуль QtHarrixLibrary.

**[*]** Теперь используется библиотека QtHarrixLibraryForQWebView.

**3.7.**

**[+]** Добавлены различные функции, так что теперь теперь в библиотеке 202 функций.

**[-]** Исправлена функция MHL_BellShapedKernelExp.

**[*]** В некоторые функции добавлены рисунки.

**3.6.**

**[+]** Добавлены различные функции, так что теперь теперь в библиотеке 192 функций.

**[*]** В DemoMathHarrixLibrary.exe теперь используется jsxgraph.

**[*]** В DemoMathHarrixLibrary.exe небольшие изменения по интерфейсу.

**[*]** В MakeMathHarrixLibrary.exe небольшие изменения по интерфейсу.

**3.5.**

**[+]** Добавлены различные функции, так что теперь теперь в библиотеке 188 функций.

**[*]** Добавлена функция void MHL_ShowText (QString TitleX) в DemoMathHarrixLibrary.exe.

**[*]** В MakeMathHarrixLibrary.exe небольшие изменения по интерфейсу.

**3.4.0**

**[*]** В тестовых функциях появилась подробная справка из проекта HarrixTestFunctions.

**[+]** В MakeMathHarrixLibrary.exe теперь выводится время, потраченное на сборку.

**[*]** Теперь число функций определяется по числу знаков ; в h файлах + две функции void MHL_SeedRandom(void) и double MHL_RandomNumber(void).

**3.3.0**

**[+]** Добавлено 33 функций (итого 172). Это без учета переопределенных функций и двух функций со случайными числами. Теперь библиотека повторяет по функциям (с исправлениями) вторую версию библиотеки MathHarrixLibrary v.2.0.1.

**[+]** В DemoMathHarrixLibrary.exe добавлен фильтр функций.

**3.2.0**

**[+]** Добавлено 86 функций (итого 139). Это без учета переопределенных функций и двух функций со случайными числами.

**[*]** В MathHarrixLibrary.h теперь подключается также #include <math.h>.

**[*]** Улучшен интерфейс MakeMathHarrixLibrary.exe.

**3.1.0**

**[+]** добавлено 53 функции

**3.0.0**

**[*]** Перенос на систему GitHub.

**[*]** Переход на среду программирования Qt.

**[*]** Переход на систему справки LaTeX.

**[*]** Написание всей справочной системы с нуля.

Контакты
---------------

С автором можно связаться по адресу sergienkoanton@mail.ru или  http://vk.com/harrix .

Сайт автора, где публикуются последние новости: http://blog.harrix.org, а проекты располагаются по адресу http://harrix.org .