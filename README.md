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
## Latest versions
- The latest version of the software will be compiled for Unix on amd64
- Windows and potentially FreeBSD versions will be released with major updates
## Documentation
- This can be found in the `docs` folder
## Installation
#### Windows
- Run this installer: [`installer.exe`](https://github.com/TheRosemaryProject/Rosemary/releases/download/v0.01-alpha/installer.exe)
- `curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/install.bat -o install.bat;.\install`
#### Unix based and OS X
- `curl https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/install.sh > install.sh;chmod +x install.sh;sh install.sh`
## Update
- Just run `rsmy --update`
## Syntax Highlighting
### Notepad++
<img src="https://user-images.githubusercontent.com/116349156/218162627-e65864e7-f10c-470d-8b42-9c8c223a0f3b.png" height=500 ></img>
<img src="https://user-images.githubusercontent.com/116349156/218162654-0a1f3c00-b189-4aae-97f8-c2f2b7caa467.png" height=500 ></img>
- To install, just import the following file into your user-defined langs:
- `https://raw.githubusercontent.com/TheRosemaryProject/Rosemary/main/npp-extension.xml`
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
- Sprig Package Manager ✅ find it in src\sprig
- FTP deployment ✅
## Contribute
- git clone this repo
- work on rsmy-dev.cpp
- commit your changes to rsmy.exe
- commit
- PR
- Or make an issue


<a href="https://github.com/TheRosemaryProject/Rosemary/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=TheRosemaryProject/Rosemary" />
</a>

<!-- Made with [contrib.rocks](https://contrib.rocks). -->
