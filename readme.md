# Introduction
This is a repository for documentation of various programming languages and their libraries, as well as documentation for software that uses languages to interact with.

The goal of this repository is not to provide a complete tutorial for each language for complete beginners, instead aims to provide a complete reference for the syntax of languages to make sure you're not missing any feature of the language, even the one you use it only 1% of the time, and libraries for those languages and softwares in general.


# Structure of the repository
The repository is divided into 2 folders :
- `Programming Languages` : which contains the documentation of the programming languages, each language has its own directory named after the language, withing each language directory, there are 2 subdirectories :
  - `Core` : which contains the documentation of the core language features, basically the syntax of the language. Is has at least one file :
	- `syntax.<ext>` : which contains an example of every syntax feature of the language with a short comment explaining it. <ext> is the same extension as the language files, for example `syntax.py` for Python. The features listed in sections with title comments.
  - `Libraries` : which contains the documentation of the libraries of the language, it is composed of the following directories :
	- `Builtin` : which contains the documentation of the builtin libraries of the language
	- `3rd Party` : which contains the documentation of some 3rd party libraries that must be installed separately. \
	The files in both the previous directories have the same extension as the language files, and contain fully working code that can be copy-pasted.
- `Software` : which contains documentation for software that has text interface like command line tools (.e.g., `git`) or other software that can be interacted with through a programming language, each software has its own directory named after the software, and each one is structured differently depending on the software.