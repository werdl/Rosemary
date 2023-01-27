## Style
#### The main language is C++ and please ensure that your code follows these guidelines:
##### Indentation
```cpp
if (x==y) {
   cout << "good" << endl;
}
```
###### NOT
```cpp
if (x==y) {
cout << "bad" << endl;
}
```
###### Comments
- Imagine you need to make this code understandable by somebody who doesn't know c++
- But don't put them everywhere!
```cpp
int x = 1;
cout << x << endl;
my_function(x,09); //Call my_function with x as the repeats and 09 as the max time
```
###### NOT
```cpp
int x = 1; // define integer x as 1
cout << x << endl; // print x to std with a \\n character
my_function(x,09); //my_func call
```
