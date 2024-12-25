# zz
TAP like micro test library

https://testanything.org/

## usage
Example zz_1.c zz_2.c .. files are for testcases
add your zz_#.c file for new testcase.
zz.c is the main.c for calling test cases

## functions

### `void ok(int expr, char *msg)`
this is like assert() functions in c except it doesn't exit the main when expression is false (0).
It prints something like

`ok 1 - Example msg here`

and when expression is false

`not ok 1 - Example`

### `int is(char *str1, char *st2)`
compares two strings and return true (1) if
both are equal and false (0) if not. If both
strs are NULL return true (1) and either one is NULL
returns false (0)

### make addtest
Will add an empty testcase.
in main.c zz_1() function map to zz_1.c file

### todo
Add a rule to automate adding test functions to zz.c