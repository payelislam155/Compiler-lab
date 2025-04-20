#include <stddef.h> // For using sizeof and NULL
const char OPERATORS[] = {
'+',
'-',
→
'|',
'^',
'~',
'?',
':',
'*',
'[',
'/',
'%',
']',
'(',
4
5
6
7
'=',
')',
'<',
'>',
'!',
'{',
'}',
',',
'&',
';',
'.',
'#'};
int isOperator(const char ch) {
// Get the number of operators in the array
size_t operatorCount = sizeof(OPERATORS) / sizeof(OPERATORS[0]);
1
1.5. OUTPUT 2
8
9 //Loopthroughtheoperatorarrayandcheckifthecharactermatches
10 for (size_t i=0;i<operatorCount;i++){
11 if(OPERATORS[i]==ch){
12 return1;//chisanoperator
13 }
14 }
15 return0;//chisnotanoperator
16 }
mainfunction:
1 #include<stdio.h>
2 #include"operator-check.c"
3
4 intmain(void){
5 char testChar;
6
7 // Prompttheusertoenteracharacter
8 printf("Enteracharacter:");
9 scanf("%c",&testChar); //Addedaspacebefore%ctoskipanywhitespace
characters →
10
11 //Checkifthecharacteris anoperator
12 if(isOperator(testChar)){
13 printf("'%c'isanoperator.\n",testChar);
14 } else {
15 printf("'%c'isnotanoperator.\n",testChar);
16 }
17
18 return0;
19 }