//
// Created by Артур Лутфуллин on 27.11.2020.
//

#include "Pony.hpp"

void ponyOnTheHeap() {
	Pony *ponyHead = new Pony("PonyHead");
	ponyHead->ponyOnTheHeap();
	delete ponyHead;
}

void ponyOnTheStack() {
	Pony ponyHead("PonyHead");
	ponyHead.ponyOnTheStack();
}

int main(){
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
