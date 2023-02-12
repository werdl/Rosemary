## Sprig
- Sprig is Rosemary's in-house package manager. It comes bundled with Rosemary, so you don't have to install it
- To use it, you need curl installed! It comes bundled with most systems, try to run ```curl``` to check if it is installed
<img id="pick"></img>
### Downloading packages
- Pick a package to install. There is a description of each at \<TBC>.\<TBC>/sprigs/\<name>
- Then run sprig
###### BASH
```bash
sprig pick <NAME OF PACKAGE>
```
###### POWERSHELL
```cmd
sprig pick <NAME OF PACKAGE>
```
- This will grab 2 files from the server: a .rsmy file, and a JSON manifest file
- To find out more about the package you just found, try running
###### BASH
```bash
sprig info <NAME OF PACKAGE>
```
###### POWERSHELL
```cmd
sprig info <NAME OF PACKAGE>
```
- You now have your first sprig installed!
<img id="delete"></img>
### Deleting packages
- Run this command to remove your chosen package:  
###### BASH
```bash
sprig cut <NAME OF PACKAGE>
```
###### POWERSHELL
```cmd
sprig cut <NAME OF PACKAGE>
```
- The package should now be deleted.
### Your packages
<img id="create"></img>
#### Creating
- You can fairly easily create your own package, with this command:
- `sprig build <NAME> <path/to/main.rsmy> <path/to/manifest.json> <path/to/passwd>`
- The Rosemary file is what you want your package to do, including any functions or classes you want
- The JSON file should be in this form:
```json
{
    "auths":[
        {"name":"werdl","org":"gonerogue"},
        {"name":"bot","org":null}
    ],
    "name":"example",
    "desc":"sprig example package",
    "version":"v0.0",
    "dependancy":null
}
```
- Put your info in where needed
- The passwd file is a one-line file containing the password to edit this Sprig
- If a Sprig of this name already exists, ensure you have a unique name
<img id="grow"></img>
#### Updating and contributing
- If you want to push the latest version of your code, you will need to run this command
###### BASH
```bash
sprig grow <NAME> <path/to/manifest.json> <path/to/main.rsmy> passwd
```
###### POWERSHELL
```cmd
sprig grow <NAME> <path/to/manifest.json> <path/to/main.rsmy> passwd
```
- The manifest and .rsmy file is the same as above, however you also need to provide a passwd field
- This needs to match what is in the passwd file uploaded earlier, or the command will fail to build
- You can give this to anyone who needs to work on the file
- By this process, you and others can contribute to the same projects
