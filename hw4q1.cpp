#include <iostream>
#include "bintree4.h"
using namespace std;
using namespace main_savitch_10;



//
template <typename Item>
void heapify(binary_tree_node<Item>* input_node)
{
  if( input_node==nullptr) return;
   heapify(input_node->left());
   heapify(input_node->right());
   binary_tree_node<Item>* largest = input_node;

   if(input_node->left() && input_node->left()->data() > input_node->data())
      largest = input_node->left();
   if(input_node->right() && input_node->right()->data() > input_node->data())
      largest = input_node->right();

  if(largest != input_node)
  {
    swap(input_node, largest);
  }
    cout<<"It worked"<<endl;
}

template <typename Item>
void swap(binary_tree_node<Item>* n1, binary_tree_node<Item>* n2)
{
    binary_tree_node<Item>* temp = n1->left();
    n1->set_left(n2->left());
    n2->set_left(temp);

    temp = n1->right();
    n1->set_right(n2->right());
    n2->set_right(temp);
}



int main(){

cout<<" calling "<<endl;
 binary_tree_node<int> * randomTree = new binary_tree_node<int>();
// randomTree->set_data(100);
 binary_tree_node<int> * left = new binary_tree_node<int>();
// left->set_data(1000);
 binary_tree_node<int> * right = new binary_tree_node<int>();
// right->set_data (1);
int counter = 0;
while(counter < 10){
  //binary_tree_node<int> * randomTree = new binary_tree_node<int>();
  randomTree->set_data(100);
  //binary_tree_node<int> * left = new binary_tree_node<int>();
  left->set_data(1000);
  //binary_tree_node<int> * right = new binary_tree_node<int>();
  right->set_data (1);
  counter++;
}


randomTree->set_left (left);
randomTree->set_right(right);
heapify(randomTree);

print(randomTree, 2);



}
