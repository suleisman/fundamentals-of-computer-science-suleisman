# Отчет по лабораторной работе №2 по курсу "Фундументальня информатика" 
<b>Студент группы:</b> <ins>М80-108Б-22 Шелаев Серафим Ильич, номер по списку 25</ins>  
<b>Контакты e mail:</b> <ins>serafimshelaev@mail.ru</ins>  
<b>Работа выполнена:</b> «3» <ins>декабря</ins> <ins>2022</ins> г.
<b>Преподаватель:</b> <ins>асп. каф. 806 Сахарин Никита Александрович</ins>

<b>Входной контроль знаний с оценкой:</b> <ins> 3(удовлетворительно)</ins>

<b>Отчет сдан</b> «3» <ins>декабря</ins> <ins>2022</ins> г., <b>итоговая оценка</b> <ins> 3(удовлитворительно)</ins>                                                          

<b>Подпись преподавателя:</b> ________________
## 1. Тема
Обработка последовательности литер входного текстового файла. Простейшие приёмы лексического анализа. Диаграммы состояний переходов.
## 2. Цель работы
Составить программу на языке Си, выполняющую анализ и обработку вводимого текста.
## 3. Задание (вариант № 26)
Выделить предпоследнее десятичное число и вычислить сумму его цифр.
## 4. Оборудование:
ноутбук  Asus Vivobook 15(1920x1080, Intel Core i5 2.4 ГГц, RAM 16 ГБ, SSD 512 ГБ, Windows 11 Home)
## 5. Программное обеспечение:
<b>Операционная система семейства:</b> Microsoft Windows 11<br/> 
<b>Компилятор:</b> GNU Compiler Collection<br/>
<b>Текстовый редактор:</b> Visual Studio Code версия 1.73.0<br/>
## 6. Идея, метод, алгоритм решения задачи (в формах: словесной, псевдокода, графической [блок-схема, диаграмма, рисунок, таблица] или формальные спецификации с пред- и постусловиями)
Храним сумму цифр последнего и предпоследнего десятичного числа в строке и в зависимости от этого выводим число.

 
## 7. Сценарий выполнения работы [план работы, первоначальный текст программы в черновике (можно на отдельном листе) и тесты либо соображения по тестированию]. 
Тесты:
1 &^*&%35465678 87087787^$#$ 4654 a45 1q  
11 22 33  
1 &^*&%35465678 87087787^$#$ 4654 a45 1  

```
#include <stdio.h>
#include <stdlib.h>

enum State {
    INSIDE,
    OUTSIDE
};

enum PREF {
    Y,
    N
};

int process();

int main (void) {
    printf("%d\n", f());
    return 0;
}

int process() {
    enum State state = INSIDE;
    enum PREF pref = Y;
   
    int i = 0;
    int sum = 0;
    int a = 0;
    int b = 0;
   
    for(char c = getchar(); c != EOF; c = getchar()) {
        if(c != ' ') {
            if ((c > 47) && (c < 58)) {
                int p_1 = c - 48;
                sum = sum + p_1;
            } else if (c != 32) {
                        pref = N;
                        sum = 0;
                    }    
               
        }
            else if (pref == Y)  { 
                switch (state) {
                    case INSIDE:
                        if ((c == ' ') || (c == '\n')) {
                            a = sum;                        
                            sum = 0;
                            state = OUTSIDE;
                            break;
                        }
                    case OUTSIDE:
                        if ((c == ' ') || (c == '\n')) {        
                            b = sum;
                            sum = 0;
                            state = INSIDE;
                            break;
                        }
                }
                 } else { 
                      sum = 0;
                      pref = Y; 
            }  
    }
    
    if ((sum > 0) && (pref == Y)) {
        switch (state) {
            case INSIDE:
                a = sum;
                sum = 0;
                state = OUTSIDE;
                break;
            case OUTSIDE:
                b = sum;
                sum = 0;
                state = INSIDE;
                break;
        }       
    
    }

        if (state == INSIDE) {
            return a;
        }
        else {
            return  b;
        }
}

```



Пункты 1-7 отчета составляются сторого до начала лабораторной работы.
Допущен к выполнению работы.  
<b>Подпись преподавателя</b> ________________
## 8. Распечатка протокола 
```
serafim@serafim-VirtualBox:~$ cat test.txt
1 &^*&%35465678 87087787^$#$ 4654 a45 1q 
serafim@serafim-VirtualBox:~$ gcc -std=c18 lab11.c
serafim@serafim-VirtualBox:~$ ./a.out < test.txt
1
serafim@serafim-VirtualBox:~$ cat test.txt
11 22 33
serafim@serafim-VirtualBox:~$ gcc -std=c18 lab11.c
serafim@serafim-VirtualBox:~$ ./a.out < test.txt
4

```
## 9. Дневник отладки должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.

| № |  Лаб. или дом. | Дата | Время | Событие | Действие по исправлению | Примечание |
| ------ | ------ | ------ | ------ | ------ | ------ | ------ |
| 1 | дом. | 03.12.22 | 13:00 | Выполнение лабораторной работы | - | - |
## 10. Замечания автора по существу работы — Написание команд для отработки навыков работы в ОС UNIX.
```
```
## 11. Выводы
Была написана программа на языке на Си, выполняющая анализ и обработку текста. В результате выполнения работы, были приобретены навыки для работы с текстовыми входными данными и машинами состояний.  
Недочёты при выполнении задания могут быть устранены следующим образом: —

<b>Подпись студента:</b> ____________________




