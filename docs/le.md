# Logs and errors
<img id="logs"></img>
### Logs
- Whenever you run a file, Rosemary will log your command in `rsmy.log`
- You can use this for error checking and advanced debugging
- It will be logged in the following format:
```rcon
Call was <call> Success: <1 or 0> Debug info: <debuginfo> Any messages: <messages>
```
- Each entry will have a newline
<img id="errors"></img>
### Errors
- When you run a Rosemary file, there may be some errors.
- These will be logged to rsmy.log
- Common errors include:
`TypeError` Incorrect type supplied
`SyntaxError` Syntax is wrong
`CompileError` Your compiler isn't working
`RunTimeError` An error occurred on the fly
`KeyboardInterrupt` You pressed Ctrl+Shift+Esc to end the process
<img id="debug"></img>
### Debugging guide
`TypeError` You have supplied the wrong type, for example int to a string. Try changing your code, but dodgy input may be at fault.

`SyntaxError` You are missing something - check your brackets!

`CompileError` The compiler threw an error - try upgrading to the latest version.

`RunTimeError` Something caused by user error caused this. You may have provided bad input, or the wrong key combination.

`KeyboardInterrupt` Hardly an error. If this occurs without you pressing Ctrl+Shift+Esc, report a bug.

