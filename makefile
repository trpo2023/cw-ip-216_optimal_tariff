.PHONY: clean all 
all: bin/Work

bin/Work: build/radioButton.o build/logic.o 
	g++ -std=c++11 -Wall -Werror build/src/radioButton.o build/src/logic.o -o bin/Work -lsfml-graphics -lsfml-window -lsfml-system
	
build/radioButton.o: src/radioButton.cpp	
	g++ -std=c++11 -Wall -Werror -c src/radioButton.cpp -o build/src/radioButton.o -lsfml-graphics -lsfml-window -lsfml-system
	
build/logic.o: build/radioButton.o src/logic.cpp 
	g++ -std=c++11 -Wall -Werror -c src/logic.cpp -o build/src/logic.o  
	
clean:
	rm -rf build/src/*.o bin/Work
