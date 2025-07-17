# Introduction
This is a repository for documentation of various programming languages and their libraries.

The goal of this repository is not to provide a complete tutorial for each language for complete beginners, instead aims to provide a complete reference for the the syntax every language to make sure you're not missing any feature of the language, even the one you use only 1% of the time. 


# Structure of the repository
The structure of the repository is as follows:
- each language has its own directory named after the language.
- withing each language directory, there are 2 subdirectories :
  - `Core` : which contains the documentation of the core language features, basically the syntax of the language. Is has at least these files :
	- `index.md` : which contains a list of all the core features of the language, structured in a way that is easy to navigate, each section may have subsections related to that feature.
	- `syntax.<ext>` : which contains an example of every syntax feature of the language with a short comment explaining it. The features are listed in the same order as in `index.md` for easy navigation. <ext> is the same extension as the language files, for example `syntax.py` for Python.
  - `Libraries` : which contains the documentation of the libraries of the language, it is composed of the following directories :
	- `Builtin` : which contains the documentation of the builtin libraries of the language
	- `3rd Party` : which contains the documentation of some 3rd party libraries that must be installed separately. \
	The files in both the previous directories have the same extension as the language files, and contain fully working code that can be copy-pasted.
  