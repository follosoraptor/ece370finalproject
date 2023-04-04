#include <iostream>
#include <string>
using namespace std;

// QUESTION 1:

//class Student {
//public:
//	string ID_no;
//	string name;
//	int number;
//
//	void assignName(string temp)
//	{
//		name = temp;
//		cout << "Student name: " << name << endl;
//	}
//
//	void assignID(string temp)
//	{
//		ID_no = temp;
//		cout << "Student ID: " << ID_no << endl;
//	}
//};
//
//int main()
//{
//	Student me;
//	Student notMe;
//
//	me.assignName("Izzy Folloso");
//	me.assignID("0242");
//	notMe.assignName("Tom");
//	notMe.assignID("25845");
//
//	return 0;
//}

// QUESTION 2:
//class Triangle {
//public:
//	float perimeter, area, s;
//	float getArea(float sideA, float sideB, float sideC)
//	{
//		s = (sideA + sideB + sideC) / 2;
//		area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
//		cout << "This is the area of the triangle: " << area << endl;
//		return area;
//	}
//	float getPerimeter(float sideA, float sideB, float sideC)
//	{
//		perimeter = sideA + sideB + sideC;
//		cout << "This is the area of the triangle: " << perimeter << endl;
//		return perimeter;
//	}
//};
//
//int main()
//{
//	Triangle someTriangle;
//	someTriangle.getArea(8, 7, 5.3);
//	someTriangle.getPerimeter(8, 7, 5.3);
//}

//QUESTION 3
//class Triangle {
//public:
//	float perimeter, area, s;
//	float getAttributes(float sideA, float sideB, float sideC)
//	{
//		perimeter = sideA + sideB + sideC;
//		s = (sideA + sideB + sideC) / 2;
//		area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
//		cout << "The perimeter is: " << perimeter << endl;
//		cout << "The area is: " << area << endl;
//		return 0;
//	}
//};
//
//int main()
//{
//	Triangle secondTriangle;
//	secondTriangle.getAttributes(10.2, 5.6, 8.6);
//}

//QUESTION 6
//int main()
//{
//	int x, y;
//	cout << "Enter a number to be cubed: ";
//	cin >> x;
//	y = x * x * x;
//	cout << endl << "The cubed number is: " << y;
//}

struct Node {
	Node * head;
	Node * next;
	char c;
	int count;
	int val;
};

void put(Node* n, int x) {

	Node * y = NULL;
	y = new Node();
	y->val = x;

	Node* temp = n;

	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = y;

}

void print(Node* n) {
	if (n == NULL) {
		return;
	}
	cout << n->val << endl;
	return print(n->next);
}

double FindAvg(Node* n) {
	Node * temp = n;
	double sum = 0;
	double c = 0;
	while (temp != NULL) {
		c++;
		sum += temp->val;
		temp = temp->next;
	}
	return sum / c;
}

void SquareVals(Node* n) {
	Node * temp = n;
	while (temp != NULL) {
		temp->val *= temp->val;
		temp = temp->next;
	}
}

Node* find(Node* current, int target) {

	if (current->next == NULL) {
		return NULL;
	}

	if (current->next->val == target) {
		return current;
	}

	return find(current->next, target);
}

bool removeNode(Node* head, char target) {
	Node * x = find(head, target);
	if (x == NULL) {
		return false;
	}
	Node * y = x->next;
	Node * z = y->next;


	x->next = z;

	return true;


}

int main() {
	Node * head = NULL;
	head = new Node();

	head->val = 1;

	put(head, 12);
	put(head, 3);
	put(head, 7);
	put(head, 8);
	put(head, 102);

	print(head);

	cout << "Q1: " << endl;
	cout << FindAvg(head) << endl;

	SquareVals(head);
	cout << "Q2: " << endl;
	print(head);

	cout << removeNode(head, 64) << endl;
	cout << removeNode(head, 49) << endl;
	cout << removeNode(head, 144) << endl;
	cout << "Q3: " << endl;
	print(head);



	char myChars[10] = { 'a','b','c','c','c','c','b','b','a','r' };
	char index[10];
	int count[10];
	cout << index[1];
	int len = sizeof(myChars) / sizeof(myChars[0]);

	for (int i = 0; i < len; i++) {
		int indexfunction = (int)myChars[i] % len;
		if (index[indexfunction] == '')

	}
}

	


