# Homework-7
# Условие задачи
Составить программу, которая в зависимости от даты (ввести одним
числом ddmm, где dd- чиcло, mm месяц) выводит на экран соотвествующий
знак Зодиака

# 1. Алгоритм и блок-схема.
Алгоритм
1. **Начало.**

2. Подключить необходимые библиотеки `stdio.h` и `locale.h`.

3. Настроить локаль для вывода текста на русском языке с помощью `setlocale(LC_ALL, "RU")`.

4. Объявить целочисленную переменную `date` для хранения введённой даты.

5. Вывести приглашение к вводу даты в формате ДДММ.

6. Считать введённую дату с помощью `scanf_s()`.

7. Проверить успешность ввода:
   - если ввод некорректен, вывести сообщение «Ошибка ввода» и завершить программу с кодом `1`;
   - если ввод успешен, перейти к следующему шагу.

8. Вычислить день и месяц:
   - `dd = date / 100` — день месяца;
   - `mm = date % 100` — номер месяца.

9. Определить месяц по значению переменной `mm` с помощью оператора `switch`.

10. В зависимости от месяца проверить день рождения и определить знак зодиака:
    - **Январь:** если `dd >= 21` — Водолей, иначе — Козерог.
    - **Февраль:** если `dd >= 19` — Рыбы, иначе — Водолей.
    - **Март:** если `dd >= 21` — Овен, иначе — Рыбы.
    - **Апрель:** если `dd >= 21` — Телец, иначе — Овен.
    - **Май:** если `dd >= 21` — Близнецы, иначе — Телец.
    - **Июнь:** если `dd >= 22` — Рак, иначе — Близнецы.
    - **Июль:** если `dd >= 23` — Лев, иначе — Рак.
    - **Август:** если `dd >= 24` — Дева, иначе — Лев.
    - **Сентябрь:** если `dd >= 24` — Весы, иначе — Дева.
    - **Октябрь:** если `dd >= 24` — Скорпион, иначе — Весы.
    - **Ноябрь:** если `dd >= 23` — Стрелец, иначе — Скорпион.
    - **Декабрь:** если `dd >= 22` — Козерог, иначе — Стрелец.

11. Если номер месяца не соответствует значениям от 1 до 12, вывести сообщение «Введен некорректный месяц!».

12. Завершить выполнение программы.

13. **Конец.**
# Блок-схема
<img width="1315" height="561" alt="Снимок экрана 2026-10-12 120255" src="https://github.com/user-attachments/assets/964757c0-50ef-4f3c-9b2e-20e93ab2d72f" />#
https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=dz7.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20id%3D%22zodiac-staircase%22%20name%3D%22%D0%91%D0%BB%D0%BE%D0%BA-%D1%81%D1%85%D0%B5%D0%BC%D0%B0%22%3E7V1dj6M4Fv01kaYfRuKb8Fipj96HHWmlftjHiKowSboBRxQ13bW%2Ffm0C2Bg6RW5s7DJUJIoQSOCey%2FE5YK5X7n3262sRnw5%2FoV2Srhxr92vlPqwcx%2FF8B%2F8jS97PS2zXXZ%2BX7Ivjrl5GF3w7%2Fi%2BpF1r10rfjLnntrFgilJbHU3fhC8rz5KXsLIuLAv3srvY3Sru%2Feor3SW%2FBt5c47S%2F973FXHpoDsyz6wb%2BS4%2F7Q%2FLTl1588xy8%2F9gV6y%2BsfTMlKf%2B7i4scfK8d9qv5Wzn07%2F%2BW8WRY3P1J%2Fz%2Bsh3qGfzCL3ceXeFwiV57ns132Skqg38Txv9%2FSbT9sDKpK8HLPBaxkXZX%2Bj%2Bntey%2FcmVHgzjAp%2Bs%2Fl5OJbJt1P8Qj75iTMDLzuUWYrf2Xj2tSzQj%2BQepajAS7pxCau%2Fc1ys6u8L3uLvY5oOrz8UR7w%2Byss6l2yvfj%2B8%2Ffk36t97Ii%2By%2FfnY%2FonTt%2FrYVg%2FWKnog0421wgexDpt5PN1U08d6o6Qok19MjOqofk1QlpTFO17lwOSL7583%2B0mTy3Zr5Otvad7Wp1CTF3Gd2fv2iymIeKbGcRjTY356G4UpTr4TmcVrxWmapGhfxBkO0CkpjvhXk4L%2F7D%2F0A73SwB6fBu3vDadBNd04Nehk6hGGi8tk5QQpDuXmucBzezL3R5UsXrMunj%2BnzD2TSuQ3qi%2F2mOn9efoFlFTe%2Btqksi0BWYUDhWdHZFVxQNnz2%2BvMUoTPjQp8t5ra1TpP1dSvlqybeTx9WLlPoDwIriYXO%2FRvz4PneDdDgrGEZc8jkwHn6Tk%2F7mrSONPFZijJ6hUgnDGQK043V%2ByISxacvTcny%2BspPc4sU4TwzG5H8oDM1k2PRULuWBWT81STZf2V%2FWZlQarFv6xaAgHEkuSjmhegEKVYTyY4PyCCO%2BbcfmAah0AYaNwZjlfqwhaFAnRBUkOU7Hpeqw8jeitemjOeOg8WXfwt3%2Bq3qCgPaI%2FyOH2kSzeV6UrIjxNOpuv8G6FTjfz3pCzfa8DitxJ18wLn2R3xjvjtc4pefpwXPR3T3yaOX%2F21nzRW0W6hxYeyT8qe%2BmYRHwSwSNK4PP7TjdtNYDgwMJidNgoMRrQqAMOFgcHstFFgdJXjsP%2F2G9M0DULeghCLECPXeHgY9TkFMD4MmG6KaY1NVzjUMHHCoY%2FZtdKjki71cZ%2F3Abe6rKnpJ0Grw6ZnzAzv7eEC0vO4yMDoeRt6cWBIDloXNbzrCxCDu%2Fj9k8AXkZdE7%2FborNbR6o74MAeO4sClvssoep4AJ%2FaevI5C8VOa9pC8bri8E5HXRxcH2Ss2j8xthPMlvwiUDG4%2FGSLe4HVywXcF5EKOzE0FyVf6WIMfMurWYpa7klLBtiXkQiUPtxnU8FNxqbUwu1Y0s6JFgWTaUra%2BFhF2z42ChMoQtTYG78cN8NCj0BocmJHpg0YDpR60ttVbMLuIWRsnHa7mVHTmjFErQPsh6h6CaJfoSHSJbY%2BUxiaGjpBTbDY49eygHUm0gzxcXhDeDhdm5lFwTWcCRCEsTOzfnXv7bJob%2BtW8JJfHS3tfAMQ5WhAe1e1HjbN3LQmYZ2CVY6xxYCWEFpJmS7kXBJJjIEhUPag3CnB46FEYBQ4NiHpw2kZtwabbyGtBbYSe3DGiwwQXwLg1V6Jb82zOrUWekFNpNjhNe%2FOOh8tbR7fDhRl4FFxz1vKPTO%2Fqphu%2BHOXu8co9FABxjhaEtfHjXiQB4QysXYyV%2Faxg0ELAbCnTgkByDQSJagX18h8ODz0Ko8ChAVEPTtuELdh0m3QtqI3QkzdGYpig%2BRlv5kn0ZoHFiX07EHIqzQanab0ZD5dvCzixMAOPgmvOyp11ZRuG%2FGDPxX2s331OvweWAKBz9PlxfiAvEzx4sJaAcAZWMMaKf1Y2aCFjtpRvQSB5BoJEFYN6EwCHhx6FUeDQgKgHp23CFmy6TboW1EboyR8jMaZT%2FoN6QbRD8yU6tJArgeI10uLGU0kznExxaDxcviugYg1m4FFwaa3cJd89sxlvtmYeb%2BpWMZF5zyXkFb0jAPocLchr5s3XoQScM7CyMdYUsHJCC3mzpTwMAsk3ECSqJNSbAzg89CiMAocGRD04bUO2YNNt2LWgNkJPwRihYYIjYJxbING5RWv%2BsScxxUxmg1PfucEfKvzYufFw%2Bb6YqiWj4JqzfreYwuZ3IHQ%2F1uwRr9lFlKTJ0YKt9q7ctgIJ0GdgOWOsE2A1hBaaZkvJFwRSYCBIVD6odwRweOhRGAUODYh6cNq2bcGm29ZrQW2EnsIx2sMEG8DYtVCiXbPtkPNrzfX8G8%2Bl2QDV92vwxwo%2F9ms9vPxQTFmRUXhpLeo35CVP1LPFJRwQvGNqBfKyXUTRmBx9fnANcOO240sANwNrFmPlPisUtBAuW8qvIJBCA0GiEkG97IfDQ4%2FCKHBoQNSD07ZeCzbd1lwLaiP0tB6jLkyQ%2BownW8v0ZG7AaXxLTO2Q2QDV92TwxwlHeLIeXpGY4iGj8JqxbK9bo8aTtS2TDPHu8uJdRIGYHC0Q62C7PU8CuBlYuRgr%2Blm5oIV82VKWBYG0NhAkKhTUi384PPQojAKHBkQ9OG3rtWDTbc21oDZCT9EYdWGC4GecGbym%2Bwhn5nPj9vqOmMohswFqYmfG4xWIOLUwB4%2FCa86y3WEoT27RP9vnxHsoojxMjhaI9THfgSsB4gysX4yV%2Fqxo0ELEbCnXgkCKDASJygX1FgAODz0Ko8ChAVEPTtuGLdh023QtqK0auMUaIzJM0P3sSNqWTIcWepxD88RUDpkPVBNbNB6wwBNTO2QcYFoLeLk9Gu%2Fsurvbw3kArXY85CfmwaVHqeUA7ZAX9iIKx%2BTIAOzN8edrRwLGGVjcGOsLOopCC4mzZWgYNrCdZSBOjJhQ7xFuQIg5DqPwYUKiHh%2Fali3w8K27FhxX0dQFRMzyBqyNs2XauMjlH3MSU0ZEN6gGJf5nfC6NBywIxBQSGQeY1lI%2BIi%2BpNq4iPGrgpqsKaEe8uBdRPwZT%2FOdHXfITa%2BrNO24CJGCfwRWPuZahozK0kD1bhpphOPVP58%2BPEyMw1FuHGxBijsMofJiQqMeHtnILPHy7rwXHVTTljBEiplk7R6K1c2yHf1rKEXJCzQeqaUtE9gAL1mJKjowDbMYiP7pjZHzIUKDFLHdBuI%2BQ9zYv70VUmsEUv6CusaHHrk4C6hlc65hrFjr6QgvBs2VIGYaTYyBOjLRQbxpuQIg5DqPwYUKiHh%2Favi3w8C2%2BDhz3HO8qptJLg3S1Qi1HOK2ghTahmPUvPnNq5a5RMefC11UPIzIfrZwgxTHfPBd4bk%2FmquX3vR5JTzcoHW%2FA1zic1HFtztfYAsqsZHAGMLcJ7Z51OvDAd3TMr7rHhDc%2Fnl4T7vSvl4JP%2FBzlCXdu14sQ%2FoZj%2BV5D2g8c5KSw%2B%2BdE54xo6hHW58NaxD337%2B9A4U%2Ba9ZtPheEUr0N8W04zGcThMkX65sCoYnZagnqBE666ODEHTnB8KaQAbCIxKdzePkrO3wG1OxUpAKOaoyWol0jBXUihSwqeJ4UUXDApuLrnrzsIzCSkAIxqjpagXiIFbyEFzj24UkgBOEAwJoXbhweWnL%2BeOlIARrUdr3kJ6iApXDVs%2BRxIYe1IIQXgMHR0aGB983dggNypSAEY1XZUwCWog6Rw1XiZcyAF27KlsAJwIBQ6Ap2%2BCTwwDttUrACMajsuzRLUQVa4akymWbACGelOAisAi3DTMVD0TeCBkUCmYgVgVNua6EtQB1nhqvEAZsEKbiSFFYClH2n9bX0TeKAK9VSsAIxqW4lzCeogK1xVi3YWrOCvpbACsKYQrfqobwIP1D6cihWAUW1LPC1BHe6%2FdFWVs1nQQvu0guAuTMAn0plSQvrm8FA5namYARpYWiRgietvyGHp3ciTQySpf%2BMNHRz174ynsosjvI%2FjEtfL5OAs5MB1c7Tl9HOEPgvAPNSkcRI7g%2BBMQw7AwNLHM5a4Dj0e9ZoAWZfpuq1vZJUGFpixzH7rG1hlXfFIYIE9HJn91jewyrozkcACe4kx%2B61vYJV1CSGBBfa0YfZb38Aqu6tOAgvsrMDst76BVXZjkgQWeL%2BX2W99A6vs3g4JLPCWGbPf%2BgZW2eVxEljgXQdmv%2FUNrLpri5VDAF61Zfdc49gquzRTxfYW%2B6W9%2F1LrbLf4kG6IriwT1lRcuFQTpI40V6NjTNjbY1YR83PZB3jcu4UjjKqJMR0u%2BG2BUMl89rWIT4e%2F0C4ha%2Fwf%3C%2Fdiagram%3E%3C%2Fmxfile%3E

# 2. Реализация программы
```c
#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "RU");

    int date;

    printf("Введите дату в формате ддмм (например, 1306 для 13 июня): ");
    if (scanf_s("%d", &date) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    int dd = date / 100;
    int mm = date % 100; 

    switch (mm) {
    case 1: 
        switch (dd >= 21) {
        case 0: printf("Козерог\n"); break;
        case 1: printf("Водолей\n"); break;
        }
        break;
    case 2: 
        switch (dd >= 19) {
        case 0: printf("Водолей\n"); break;
        case 1: printf("Рыбы\n"); break;
        }
        break;
    case 3: 
        switch (dd >= 21) {
        case 0: printf("Рыбы\n"); break;
        case 1: printf("Овен\n"); break;
        }
        break;
    case 4: 
        switch (dd >= 21) {
        case 0: printf("Овен\n"); break;
        case 1: printf("Телец\n"); break;
        }
        break;
    case 5: 
        switch (dd >= 21) {
        case 0: printf("Телец\n"); break;
        case 1: printf("Близнецы\n"); break;
        }
        break;
    case 6: 
        switch (dd >= 22) {
        case 0: printf("Близнецы\n"); break;
        case 1: printf("Рак\n"); break;
        }
        break;
    case 7: 
        switch (dd >= 23) {
        case 0: printf("Рак\n"); break;
        case 1: printf("Лев\n"); break;
        }
        break;
    case 8: 
        switch (dd >= 24) {
        case 0: printf("Лев\n"); break;
        case 1: printf("Дева\n"); break;
        }
        break;
    case 9:
        switch (dd >= 24) {
        case 0: printf("Дева\n"); break;
        case 1: printf("Весы\n"); break;
        }
        break;
    case 10: 
        switch (dd >= 24) {
        case 0: printf("Весы\n"); break;
        case 1: printf("Скорпион\n"); break;
        }
        break;
    case 11:
        switch (dd >= 23) {
        case 0: printf("Скорпион\n"); break;
        case 1: printf("Стрелец\n"); break;
        }
        break;
    case 12: 
        switch (dd >= 22) {
        case 0: printf("Стрелец\n"); break;
        case 1: printf("Козерог\n"); break;
        }
        break;
    default:
        printf("Введен некорректный месяц!\n");
        break;
    }

    return 0;
}
```

# 3. Результат работы программы.
1. Введите дату в формате ддмм (например, 1306 для 13 июня): 0701
Козерог
2. Введите дату в формате ддмм (например, 1306 для 13 июня): 0502
Водолей
3. Введите дату в формате ддмм (например, 1306 для 13 июня): 0503
Рыбы
4. Введите дату в формате ддмм (например, 1306 для 13 июня): 0104
Овен
5. Введите дату в формате ддмм (например, 1306 для 13 июня): 0905
Телец
6. Введите дату в формате ддмм (например, 1306 для 13 июня): 1206
Близнецы
7. Введите дату в формате ддмм (например, 1306 для 13 июня): 0507
Рак
8. Введите дату в формате ддмм (например, 1306 для 13 июня): 0508
Лев
9. Введите дату в формате ддмм (например, 1306 для 13 июня): 0109
Дева
10. Введите дату в формате ддмм (например, 1306 для 13 июня): 1010
Весы
11. Введите дату в формате ддмм (например, 1306 для 13 июня): 1111
Скорпион
12. Введите дату в формате ддмм (например, 1306 для 13 июня): 0712
Стрелец

# 4. Информация о разработчике
Работу делал студент бИЦТ-261 Есин А. А.
