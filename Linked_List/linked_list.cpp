#include <iostream>

struct node{
	int val;
	node* parent;
};

int main(){
	node n1;
	n1.val = 0;
	n1.parent = NULL;
	node* prev = &n1;
	node* n;
	for(int i=1; i<10; i++){
		n = new node;
		n->val = i;
		n->parent = prev;
		prev = n;
	}


	while(true){
		std::cout<<prev->val<<std::endl;
		prev = prev->parent;
		if (prev == NULL)
			break;
	}
}