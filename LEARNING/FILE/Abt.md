## fscanf()

```
int fscanf(FILE *stream, const char *format, ...);
```
- Stops at Whitespace

- `fscanf()` treats spaces, tabs, and newlines as *delimiters*.
    - A delimiter is a character or symbol that separates data into units
    - comma (,), full stop (.), colon :, semicolon ;, slash (/), question mark (?), asterisk (*), backslash , quotation marks ("'), and hashtag (#).
- For reading full lines, use `fgets()` instead.
- Returns Number of Successfully Read Items

- If you expect two values ("%s %d") but only one is found, *fscanf() returns 1, not 2*.
- EOF Handling
- When fscanf() fails to read expected data, it returns *EOF*, which can be used to stop reading.

---

## fgets()

```
char *fgets(char *str, int size, FILE *stream);
```

- Returns `str` (pointer to the string read).
- Returns `NULL` if the end of the file is reached or an error occurs.

- fgets(buffer, sizeof(buffer), fp) reads ***one line at a time***.
- If `fgets()` returns NULL, it means EOF (end of file) is reached.
- Each call to `fgets()` counts as a new line, so lineCount++ is used.
- The program prints the total number of lines after reading the file.

---
> **feof()** is used to detect *EOF*

## fprintf()

```
int fprintf(FILE *stream, const char *format, ...);
```
---

## fputs()

```
int fputs(const char *str, FILE *stream);
```
---
