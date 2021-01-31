#include "datanode.h"

datanode::datanode(size_t _size){
	size = _size;
	child = new datanode[size];
}
datanode::~datanode(){
	delete child;
}
size_t datanode::size(){
	return size;
}
datanode* datanode::append(){
	size++;
	datanode* holder = new datanode[size];
	delete child;
	child = holder;
	return (datanode*)(child+size-1);
}
datanode* datanode::getElement(size_t num){
	if(num < size){
		return (datanode*)(child + num);
	}
	return nullptr;
}
