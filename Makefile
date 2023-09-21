LinkeStackall: main.o LinkeStack.o ../ChainNode/ChainNode.o ../Linkedlist/Linkedlist.o
	g++ main.o LinkeStack.o ../ChainNode/ChainNode.o ../Linkedlist/Linkedlist.o -o LinkeStack
main.o: main.cpp
	g++ -c main.cpp -o main.o
LinkeStack.o: LinkeStack.cpp
	g++ -c LinkeStack.cpp -o LinkeStack.o
../ChainNode/ChainNode.o: ../ChainNode/ChainNode.cpp
	g++ -c ../ChainNode/ChainNode.cpp -o ../ChainNode/ChainNode.o
../Linkedlist/Linkedlist.o: ../Linkedlist/Linkedlist.cpp
	g++ -c ../Linkedlist/Linkedlist.cpp -o ../Linkedlist/Linkedlist.o
clean:
	rm -f *.o ../ChainNode/ChainNode.o ../Linkedlist/Linkedlist.o LinkeStack
