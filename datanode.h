#ifndef _DATANODE_H_
#define _DATANODE_H_

class datanode{
	private:
		datanode* parent;
		size_t data; // number of children to this node, 0 if its an end node that has data
	public:
		datanode(const datanode* inparent = nullptr);//when initialized, a pointer to parent node must be passed
		~datanode();
		void* child; //store the children instances
		size_t size(); //get the number of children to this node
		datanode* append();
		void remove(datanode* target);
};
#endif
