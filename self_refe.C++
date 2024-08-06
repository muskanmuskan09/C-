#include <iostream>
using namespace std;

struct node {
	int data1;
	int data2;
	struct node* link;
};

int main()
{
	struct node ob1; // Node1

	// Initialization
	ob1.link = NULL;
	ob1.data1 = 20;
	ob1.data2 = 50;

	struct node ob2; // Node2

	// Initialization
	ob2.link = NULL;
	ob2.data1 = 50;
	ob2.data2 = 70;

	// Linking ob1 and ob2
	ob1.link = &ob2;
 
	// Accessing data members of ob2 using ob1
    cout<< ob1.link->data1;
	cout<< ob1.link->data2;
	return 0;
}
