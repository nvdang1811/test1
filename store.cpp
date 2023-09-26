#include <bits/stdc++.h>

typedef struct dict{
	char key[50];
	struct dict* left;
	struct dict* right;
}dict;

dict* root;

dict* make_Node(char key[]){
	dict* new_Node = (dict*)malloc(sizeof(dict));
	strcpy(new_Node->key, key);
	new_Node->left = NULL;
	new_node->right = NULL;
	
	return new_Node;
}

int Insert_Node(dict** root, char key[]){
	if ((*root == NULL)){
		dict* root = make_Node(key);
		return 1;
	}
	dict *tmp = *root;
	if Find_Name(key) return 0;
	
	if (strcmp(tmp->key, key) > key){
		Insert_Node(&(tmp->left), key);
	}
	else{
		Insert_Node(&(tmp->right, key));
	}
	return 1;
}

dict* 
int main(){
	root = NULL; //Initiate empty tree	
}
