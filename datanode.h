#ifndef _DATANODE_H_
#define _DATANODE_H_
#include <string>

namespace adn{
	class node{
		private:
		datanode* child=nullptr; //store the children instances
		public:
		std::string line;//the component defining the node,
		datanode();//when initialized, a pointer to parent node must be passed
		~datanode();

		size_t size(); //get the number of children to this node
		datanode* append();//append elements to the end of the node
		datanode* getElement(size_t num);
		void remove(datanode* target);
		parser parseNode();
	};
	class parser{
		std::string specifier;
		std::string complement;
	};
}
#endif
