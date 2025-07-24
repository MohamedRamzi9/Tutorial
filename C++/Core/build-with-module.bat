set main=%1
set module=%2
set hedears=D:\Programmig\C++\Libraries\headers
cls

del %main%.exe

g++ -std=c++26 -fmodules-ts -I %hedears% -c %module%.cpp -o %module%.o
g++ -std=c++26 -fmodules-ts -I %hedears% -o %main%.exe %main%.cpp %module%.o

%main%.exe

del %main%.exe
del %module%.o