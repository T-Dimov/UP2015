#Домашно №5

Решенията на задачите се предават по e-mail на следнят адрес:

ttassist@abv.bg

Решението на всяка задача трябва да бъде под формата на файл с окончание .cpp ако използвате CodeBlocks или архив на целите проекти ако използвате Visual Studio(всяка задача да бъде в отделен solution). Файловете се изпращат като attachment-и в mail-a. Освен решения на задачите самият mail трябва да съдържа име и факултен номер. Успех!

###Задача 0

Даден е едномерен масив от цели числа a0, a1, ..., an-1, (1 <= n < = 100). Да се напише програма, която построява нов масив b0, b1, ... bm-1, (1 <= m <= n), който се състои от уникалните елементи на масива a.

####Примери

```c++
5           // n
1 2 3 1 2   // a[n]
// -> 1 2 3

5           // n
5 7 9 42 42 // a[n]
// -> 5 7 9 42

5           // n
0 8 3 6 2   // a[n]
// -> 0 8 3 6 2
```

###Задача 1

Програма, която приема масив и стойност x. Да се изтрие всяко срящане на елемента x в масива. Ако x не принадлежи на масива, да се изведе подходящо съобщение.

```c++
1 3 2 5 2 4 1 2
2
//-> 1 3 5 4 1 

1 2 3 5 6 7
4
//-> "4 is not a member of the array"
```

###Задача 2

По въведен масив от числа, да се определи, дали редицата образувана от тези числа е нарастваща, намаляваща, съставена само от еднакви числа или нито едно от тези. 

```c++
1 2 3 4 5
//-> "The sequence is increasing"
5 4 3 2 1
//-> "The sequence is decreasing"
1 1 1 1 1 
//-> "The sequence is constant"
1 2 1 2 1
//-> "The sequence is not monotonic"
```

###Задача 3
По въведен масив от числа, намира най-дългатата, намаляваща подредица. (Ако са няколко с еднаква дължина връща първата).

```c++
1 2 3 4 5 6 7 8 
//-> 1
3 2 1 4 5 2 4 3 1
//-> 3 2 1
5 7 8 4 4 5 2 1
//-> 5 2 1

```

####Успех!!!
