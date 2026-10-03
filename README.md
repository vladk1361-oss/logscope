# Logscope

Мой учебный проект на C++. Программа читает простой лог и считает, сколько там строк с ошибками и предупреждениями.

## Запуск

В терминале VS Code:

```powershell
cmake -S . -B build
cmake --build build
.\build\logscope.exe sample.log
```

## Что использовал

- `ifstream` для чтения файла;
- `string` для строк;
- `find` для поиска слов `ERROR` и `WARNING`;
- `while` для чтения файла по строкам.
