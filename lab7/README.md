# Отчет по лабораторной работе №2 по курсу "Фундументальня информатика" 
<b>Студент группы:</b> <ins>М80-108Б-22 Шелаев Серафим Ильич, номер по списку 25</ins>  
<b>Контакты e mail:</b> <ins>serafimshelaev@mail.ru</ins>  
<b>Работа выполнена:</b> «29» <ins>октября</ins> <ins>2022</ins> г.
<b>Преподаватель:</b> <ins>асп. каф. 806 Сахарин Никита Александрович</ins>

<b>Входной контроль знаний с оценкой:</b> <ins>4 (хорошо)</ins>

<b>Отчет сдан</b> «29» <ins>октября</ins> <ins>2022</ins> г., <b>итоговая оценка</b> <ins>4 (хорошо)</ins>                                                          

<b>Подпись преподавателя:</b> ________________
## 1. Тема
Программирование в алгоритмической модели Маркова  
## 2. Цель работы
Составить программу по условию задачи  
## 3. Задание (вариант № 34)
Составить алгоритм, восстанавливающий целое число в шестнадцетиричной  позиционной системе счисления по его обратному коду  
## 4. Оборудование:
ноутбук  Asus Vivobook 15(1920x1080, Intel Core i5 2.4 ГГц, RAM 16 ГБ, SSD 512 ГБ, Windows 11 Home)
## 5. Программное обеспечение:
<b>Операционная система семейства:</b> VirtualBox 6.1.38 - Ubuntu 22.04.01 LTS<br/>
<b>Интерпретатор команд:</b> bash версия 4.4.19<br/>
<b>Система программирования:</b> не использовалась версия —<br/>

<b>Местонахождение и имена файлов программ и данных на домашнем компьютере:</b> /home/serafim<br/>
## 6. Идея, метод, алгоритм решения задачи (в формах: словесной, псевдокода, графической [блок-схема, диаграмма, рисунок, таблица] или формальные спецификации с пред- и постусловиями)
Сначала определяем знак числа по первому биту, если число отрицательно (первый бит 1)спереди пишем 1 и  заменяем все нули на еденицы и все еденицы на нули. Затем с конца по 4 цыфры переводим
число в шестнацетиричную систему счисления.

## 7. Сценарий выполнения работы [план работы, первоначальный текст программы в черновике (можно на отдельном листе) и тесты либо соображения по тестированию]. 
Тесты:  
00000 -> 0    
0101 -> 5  
1010 -> -5  
1000 -> -7  
Пункты 1-7 отчета составляются сторого до начала лабораторной работы.
Допущен к выполнению работы.  
<b>Подпись преподавателя</b> ________________
## 8. Распечатка протокола 
```
*0->+00000#
*1->-0000?


#1->1#
#0->0#
#->!


?0->1?
?1->0?

?->!

0000!->!0

0001!->!1

0010!->!2


0011!->!3


0100!->!4


0101!->!5


0110!->!6


0111!->!7


1000!->!8


1001!->!9


1010!->!A


1011!->!B



1100!->!C


1101!->!D


1110!->!E

1111!->!F



-0!->-;
-00!->-;
-000!->-;
-0000!->-;

-!->-;



+0!->;
+00!->;
+000!->;
+0000!->;

+!->;

;00->;0

;01->.1
;02->.2
;03->.3
;04->.4
;05->.5
;06->.6
;07->.7
;08->.8
;09->.9
;0A->.A
;0B->.B
;0C->.C
;0D->.D
;0E->.E
;0F->.F

;->. 











*-># 
 ->*
```
## 9. Дневник отладки должен содержать дату и время сеансов отладки и основные события (ошибки в сценарии и программе, нестандартные ситуации) и краткие комментарии к ним. В дневнике отладки приводятся сведения об использовании других ЭВМ, существенном участии преподавателя и других лиц в написании и отладке программы.

| № |  Лаб. или дом. | Дата | Время | Событие | Действие по исправлению | Примечание |
| ------ | ------ | ------ | ------ | ------ | ------ | ------ |
| 1 | дом. | 29.10.22 | 13:00 | Выполнение лабораторной работы | - | - |
## 10. Замечания автора по существу работы — Написание команд для отработки навыков работы в ОС UNIX.
```
```
## 11. Выводы

  Были приобретены навыки пользывания нормальными алгоритмами Маркова и работаты с утилитолой nam.  
Недочёты при выполнении задания могут быть устранены следующим образом: —

<b>Подпись студента:</b> ____________________



