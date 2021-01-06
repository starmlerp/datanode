#include "datanode.h"

datanode::datanode(const datanode* inparent = nullptr){
	parent = inparent;
}
size_t datanode::size(){
	return data;
}
