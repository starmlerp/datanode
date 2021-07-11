#include "datanode.h"
	adn::datanode::datanode(size_t _nsize)
	{
		nsize = _nsize;
	        if(nsize)content = new adn::datanode[nsize];
	}
	adn::datanode::~datanode(){
		delete content;
	}
	size_t adn::datanode::size(){
		return nsize;
	}
	adn::datanode* adn::datanode::append(){
		nsize++;
		adn::datanode* holder = new datanode[nsize];
		delete content;
		content = holder;
		return (adn::datanode*)(content+nsize-1);
	}
	adn::datanode* adn::datanode::getElement(size_t num){
		if(num < nsize){
			return (adn::datanode*)(content + num);
		}
		return nullptr;
	}
