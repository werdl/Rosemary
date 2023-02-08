<pre>
.______        ______        _______. _______ .___  ___.      ___      .______     ____    ____ 
|   _  \      /  __  \      /       ||   ____||   \/   |     /   \     |   _  \    \   \  /   / 
|  |_)  |    |  |  |  |    |   (----`|  |__   |  \  /  |    /  ^  \    |  |_)  |    \   \/   /  
|      /     |  |  |  |     \   \    |   __|  |  |\/|  |   /  /_\  \   |      /      \_    _/   
|  |\  \----.|  `--'  | .----)   |   |  |____ |  |  |  |  /  _____  \  |  |\  \----.   |  |     
| _| `._____| \______/  |_______/    |_______||__|  |__| /__/     \__\ | _| `._____|   |__|     
</pre>
                                                                                                
## Like Python, but with brackets. 
- Basically: strongly typed, mix of python perl and php syntax
- It uses {} rather than indentation, as I think it allows for more options.
- Check out syntax.txt which I guess is also the docs?
- Extension is .rsmy by default but to be honest it doesn't really matter.
- .rsmy - Rosemary file
- Error checking is pretty good right now, not
- I'll try and fix that.
## Installation
#### Windows
- `curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/install.bat > install.bat`
- `.\install`
#### Unix based and OS X
- `curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/install.sh > install.sh`
- `chmod +x install.sh`
- `.\install`
## Why use Rosemary?
- Powerful and yet simple, Rosemary is easy to learn
- If you're a JS, C family, PHP or Ruby developer, learning Rosemary is easy!
- Simple syntax, but with the power of C at your fingertips
- Speed
## Plans for the project
- Change from Python to C++ for performance ✅
- I'll write my own interpreter, I won't use
Bison or Flex or whatever
- Interpreted for the time being, not compiled cos I don't know enough assembly
- Latest executable is at SRC/rsmy.exe
- You can compile for MacOS if you like
- Provide a command line argument to execute a file, else a shell will boot
- Also strings don't need speech marks, 
Rosemary does that for you
- I'll try to implement error handling as best
as I can, but you have to be careful with syntax,
in case catch clause is missing
- If you want to help, great! Make a pull request
or an issue or whatever :)
- Enjoy
## Next Steps
- Tokenisation ✅
- Print ✅
- Variables ✅
- Operands ✅
- IF ELIF ELSE ❎ (I think I have a method I just need to implement it)
- WHILE FOR FOREACH ❎
- TRY CATCH ❎
- Sprig Package Manager ✅ [find it here](http://github.com/gonerogueproductions/Sprig)
- FTP deployment ✅
