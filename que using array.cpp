#include<iostream>
using namespace std;
const int size = 100;

class que{
	private:
		int arr[size];
		int front;
		int rear;
		
		public:
			que(){
				front = -1;
				rear = -1;
			}
			
			void enque(int val){
				if (rear > size - 1){
					cout<<"Que is full."<<endl;
					return;
				}
				else{
					arr[++rear] = val;
					cout<<"Enque item is: "<<arr[rear]<<endl;
					if(front = -1){
						front++;
					}
				}
			}
			
			int deque(){
				if (front == -1 || front > rear){
					cout<<"Que underflow! Cannot deque"<<endl;
					return -1;
				}
				
					int dequeItem = arr[front++];
					cout<<"Deque item: "<<dequeItem<<endl;
				
				if (front > rear){
					front -1;
					rear = -1;
				}
				
				return dequeItem;
			}
			
			void display(){
				if (isempty()){
					cout<<"Underflow! Que is empty"<<endl;
					return;
				}
				
				cout<<"Que is:"<<endl;
				for (int i = front; i<= rear; i++){
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}
			
			bool isempty(){
				if (front == -1 && rear == -1){
					return true;
				}
				else{
					return false;
				}
			}
			
};

int main(){
	que myque;
	myque.enque(10);
	myque.enque(20);
	myque.enque(30);
	myque.enque(40);
	myque.enque(50);
	
	myque.display();
	
	myque.deque();
	myque.deque();
	myque.display();
	
	return 0;
}
