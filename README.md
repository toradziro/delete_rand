Задание:
1. Создать два контейнера map и vector, заполнить их случайными числами от 1 до 9.
2. Удалить случайное количество цифр из каждого контейнера.
3. Оставить в каждом контейнере только те элементы, которые встречаются в каждом контейнере.

Моя реализация задания:
При старте программы она запрашивает количество элементов, которые должны быть добавлены в контейнеры.
Результат выполнения программы записывается в два файла _./result/map_ и _./result/vector_ в которых находится содержание каждого из контейнеров после всех преобразований. Результат преобразования на каждом шаге (лог) можно найти в файле _./result/logProg.log_

Также приложен _test.cpp_ файл, который проверяет валидность после исполнения программы - читает оба файла map и вектор, после чего проверяет, что в каждом из них встречаются только одинаковые цифры.

Команды, доступные для сборки и запуска программы:
```
make all       # или просто make собирает проект
make clean     # удаляет .o файлы
make fclean    # удаляет все .o файлы и также удаляет все executable файлы
make test      # собирает тест, который проверит валидность вывода программы
make free_logs # удалит содержимое файлов в директории ./result
./deleteRand   # после сборки запускает программу
./tester       # после сборки теста и запуска программы для проведет проверку валидности вывода программы
```