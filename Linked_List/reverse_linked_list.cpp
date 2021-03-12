#include <iostream>


struct boom{
	int val;
	boom *child;
};

boom* reverse_ll(){
	boom *current;
	current = new boom;
	boom *something;
	boom *next;
	something = current;
	for(int i=10; i<21; i++){
		next = new boom;
		next->val = i; 
		current->val = i;
		current->child = next;
		current = next;
	}
	return something;
}



void print_reverse_ll(boom *prev){
	while(true){
		std::cout<<prev->val<<",";
		prev = prev->child;
		if(prev == NULL){
			// std::cout<<prev->val;
			break;			
		}		
	}

}
int main(){
	boom *k = reverse_ll();
	print_reverse_ll(k);
} 