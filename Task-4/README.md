# **\~VALUE OF PI\~**

#### AIM: 

>To find the value of PI upto 200 decimal places.

#### WHAT IS PI?

![pi-300x300](https://user-images.githubusercontent.com/75233364/101349620-a1377600-38b3-11eb-95fe-28fbb5ff2668.jpg)

-  π is usually known as a string of numbers starting from 3.14.
- It is a mathematical constant, originally defined as the ratio of a circle’s circumference to its diameter.
- This constant helps us understand our universe with greater clarity. 

#### HISTORY OF π

| Contributors    |Year     | Value of π     |
| --------------- | ------  |--------------- |
| Babylonians     | 1680 BC| 3.125          |
| Archimedes      | 287–212 BC|3.14084|
|Zu Chongzhi  | 429–501| 3.1416|
|Euler | 1737| 3.141|



#### ABOUT THE PROGRAM:

This program analyses  Dik T Winter’s 160 byte C program to find the value of π upto first 800 decimal points.

The original code is: 

```
int a=10000,b,c=2800,d,e,f[2801],g;
main()
{
    for(;b-c;)
       f[b++]=a/5;
    for(;d=0,g=c*2;c-=14;)
        printf("%.4d",e+d/a),e=d%a)
    for(b=c;d+=f[b]*a,f[b]=d%--g,d/=g--,--b;)
        d*=b;
}

```
According to  Beeler et al., the value of PI is given by: 

![Capture](https://user-images.githubusercontent.com/75233364/101364514-a9e67700-38c8-11eb-9b6d-581a7556ed62.PNG)

During the iteration of the 
***k***
 loop, the code is essentially computing the digits of the given expression. 
 
