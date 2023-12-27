# C ,C++LOOPS

we use loop to execute a task end or definite number of time .

We CAnt’t use break and continue without Loop

- **WHILE LOOP**
    
    *Structure :* 
    
    **initialization
    while(condition){
    Printf(””) ;
    increment/decrement
    }**
    
    <aside>
    💡 the difference beetween in for loop and while loop is in their structure, in **For loop 3 of the conditions were in same () bracket.** but in While Loop they’ll be in different position
    
    </aside>
    
    example :
    
    > int main ()
    {
    int a ;
    **a = 10;
    while(a<=20) {
    printf("hi\n");
    a++;
    }**
    return 0 ;
    }
    > 
    
    **to make an infinite loop in whille loop just put 1 or any other positive number** 
    
- **Break and Continue**
    
    To stop any condition/loop we use BREAK,/  loop er baire ja thakbe tai print korbe
    CONTINUE thakle er nicher kaj gula korbe na,abar loop e jabe.
    
    > ***EXAMPLE :***
    > 
    > 
    > [1] 
    > ***#include<stdio.h>
    > int main () {
    > int a ;
    > for(a=1 ; a<=10 ; a++){
    > if(a%2==0)
    > break;
    > printf("%d\n");***
    > 
    > ***}***
    > 
    > ***return 0 ;
    > }
    >  [2]***
    > 
    > ***#include<stdio.h>
    > int main () {
    > int a ;
    > for(a=1 ; a<=10 ; a++){
    > if(a%2==0)
    > continue;
    > printf("%d\n");
    > }***
    > 
    > ***return 0 ;
    > }***
    > 
    
    [https://www.youtube.com/watch?v=UQVM-empou4&t=11s](https://www.youtube.com/watch?v=UQVM-empou4&t=11s)
    
    [https://youtu.be/7qcuZAvtt0k](https://youtu.be/7qcuZAvtt0k)
    

- **FOR LOOP**
    
    *Structure:*
    
    f**or(initialization  ;  condition ;  quantity) { printf(””)}**
    
    > ***Example :***
    > 
    > 
    > `#include<stdio.h>
    > int main ()
    > {
    > int a ;
    > **for(a=2 ; a<=100; a=a+2)**
    > { printf("%d\n",a); }
    > return 0;
    > }`
    > 
    
- **NESTED LOOP**
    
    (*if one loop stays in another loop is called Nested loop)*
    
    > **Structure :**
    
    ***int i , j
    for(i = 1 ; i ≤3 ; i++){
    printf(”this is OUTER LOOP”);
    
    for(j = 1 ; j ≤ 2 ; j++){
    printf(”THIS IS INNER LOOP”) ; }
    }***
    > 
    

- **Do while Loop**
    
    in for & while Loop first it checks the condition if its true then code runs but if the condition is false code doesnt run,
    but in DO WHILE LOOP even if the condition is false at least once code will run,as the condition  printf) is written before the loop 
    
    ***Structure :***
    
    **initialization
    do{
    printf(””) ;
    increment/decrement
    } while (Condition);**
    
    > EXAMPLE :
    > 
    > 
    > ***#include<stdio.h>
    > int main ()
    > {
    > int a ;
    > a = 10;
    > do {
    > printf("let me go\n");
    > a++;
    > }while(a<=20);
    > return 0 ;
    > }***
    > 
    
    [https://www.youtube.com/watch?v=U6SfSl3Nf-g&list=PLdl6zXgLsy3zwNjSMiYlOZOr20sykTfgo&index=14](https://www.youtube.com/watch?v=U6SfSl3Nf-g&list=PLdl6zXgLsy3zwNjSMiYlOZOr20sykTfgo&index=14)