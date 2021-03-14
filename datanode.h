#ifndef _DATANODE_H_
#define _DATANODE_H_
#include <string>


namespace adn{
	class datanode{
		private:
		size_t nsize=0;
		char* vname;
		void* content;
		public:
		datanode(size_t _nsize = 0);
		~datanode();
		size_t size(); //get the number of children to this node
		datanode* append();//since the children of the datanode are stored as contiguous array, it is reccomended to avoid usage of this function, since its memory and processor expensive
		datanode* getElement(size_t num);
	};
}
#endif
