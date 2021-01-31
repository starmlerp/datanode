#ifndef _DATANODE_H_
#define _DATANODE_H_
#include <string>

namespace adn{
	class node{
		private:
		size_t size=0;
		datanode* child=nullptr; //store the children instances
		public:
		std::string line;//the component defining the node,
		datanode(size_t _size);
		~datanode();
		size_t size(); //get the number of children to this node
		datanode* append();//since the children of the datanode are stored as contiguous array, it is reccomended to avoid usage of this function, since its memory and processor expensive
		datanode* getElement(size_t num);
	};
}
#endif
