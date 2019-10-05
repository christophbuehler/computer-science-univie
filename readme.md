# Computer Science at the University of Vienna
Tools for easy note taking and coding during lectures with VSCode.

## Configure on Windows

### VSCode Extensions
Make sure to install all the extensions in .vscode/extensions.json. VSCode should prompt you to do this.

### LaTeX
Will allow you to preview LaTeX files in VSCode with CTRL+ALT+V.

Setup:
- Strawberry, the free Perl for windows:\
http://strawberryperl.com/
- Add Strawberry to Path (C:\Strawberry\perl\bin)
- Texmaker, the LaTeX editor (optional):\
https://latex.tugraz.at/programme/texmaker
- MiKTeX:\
https://miktex.org/download
- Install all the updates from MiKTeX Console
- To use TikZ:\
https://tex.stackexchange.com/questions/161665/how-to-install-pgf-tikz-3-0-in-miktex
- Reload VSCode

### C++ (MingGW)
Required for running C++ code within VSCode.

Setup:
- The MingGW installer:\
https://osdn.net/projects/mingw/releases/
- Install the GNU C++ Compiler
- Make sure the installation folder is correct (C:\MinGW)