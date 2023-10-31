main:
	g++ -std=c++0x main.cpp && ./a.out

custom:
	g++ -std=c++0x $(file) && ./a.out

temp:
	cp ./template.cpp $(to)
