#Упражнение за 3та седмица
##Оператор if
###Задача 0

Да се състави програма, която въвежда от клавиатурата трицифрено число n, което няма в записа си цифрата нула. Програмата да проверява дали числото е кратно на всяка своя цифра. Ако е кратно, да извежда "Yes" и сумата от цифрите на числото, в противен случай – "No" и произведението им.

####Пример
```C++
234
Yes 9

265
No 60
```

###Задача 1

Да се провери дали сумата от цифрите на въведено трицифрено число е двуцифрено число. Да се изведе подходящо съобщение за резултата.

####Пример
```C++
134
No

567
Yes
```

###Задача 2

Да се напише програма която извежда средното по големина от 3 въведни числа.

####Пример
```C++
3 5 2
3
```
###Задача 3

В равнината са дадени 3 прави с уравнения:
1) 3x-y+5=0
2) -5x-y+9=0 
3) (59/30)x -y + 134/60=0
Въведете координатите на точка и изведете на кои от тези прави лежи.

####Пример
```C++
2.5 6.5
The point is on lines: 
1 2
```
##Оператор switch
###Задача 4

Да се напише програма, която по въведено едноцифрено не отрицателно число въвежда всички едноцифрени числа по-големи от него с думи. Ако на входа получи число което не отговаря на изискванията да изведе съобщение за грешка. Използвайте switch.

####Пример
```C++
6
Seven Eight Nine
10
Not a valid number.
9
//Не извежда нищо
```

###Задача 5

Да се напише програма, която по въведено число извежда деня от седмицата, който съответства на това число. Ако няма такъв ден от седмицата да се изведе „No such day.“. (Забележка: използвайте switch).

####Пример
```C++
0
No such day
6
Saturday
```
###Задача 6

Да се напише програме, която по въведена дата – ден, месец, година - да провери дали датата е валидна.

####Пример
```C++
31 9 2015 
False
29 2 2015 
False
29 2 2004
True
4 13 2015
False
```