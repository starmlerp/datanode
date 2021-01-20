#include "datanode.h"

datanode::datanode(){
	data = 0;
	parent = (datanode*)_parent;
}
datanode::~datanode(){
	delete child;
}
size_t datanode::size(){
	return data;
}
datanode* datanode::append(){
	return 0;
}
