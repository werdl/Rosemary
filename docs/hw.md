## Hello World
<span id ="print"></span>
#### Print to STD
```rsmy
print hello, world
```
- You don't _need_ quotes, but you can use them and they will be stripped from the string
<span id ="var"></span >
#### Variables
- In Rosemary, you use a statically typed system
- We borrowed and simplified some C++ types
- To create a variable, use
```rsmy
int x = 3;
```
- Note the spaces, these are important.
- Now to view a variable and print to STD
```rsmy
$x
```
- Which will return 
```rcon
>>> $x
3
>>>
```
<span id ="types"></span>
#### Types
- List of types:
- int
- string
- float
- bool
