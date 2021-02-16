#include "datanode.h"

datanode::datanode(size_t _nsize){
	nsize = _nsize;
	child = new datanode[nsize];
}
datanode::~datanode(){
	delete child;
}
size_t datanode::size(){
	return nsize;
}
datanode* datanode::append(){
	nsize++;
	datanode* holder = new datanode[nsize];
	delete child;
	child = holder;
	return (datanode*)(child+nsize-1);
}
datanode* datanode::getElement(size_t num){
	if(num < nsize){
		return (datanode*)(child + num);
	}
	return nullptr;
}
