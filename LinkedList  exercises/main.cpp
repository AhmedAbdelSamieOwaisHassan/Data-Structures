

#include <iostream>
#include <string>
#include "List.h"
using namespace std;

int main()
{

	cout<<"\n Ahmed Abd Samie Owais Hassan ,  ID _ 202200877"<<endl;
	
	cout<<" \n ============= \n";
		List L ,L1;
		char data;
		int node1,node2,node3,key;
    
if(!L.listIsEmpty()){
	cout<<"List is empty \n";
}else{
			cout<<"enter your data in the List \n";
			cin>>node1;
			cout<<"enter your data in the List \n";
			cin>>node2;
			cout<<"enter your data in the List \n";
			cin>>node3;
			cin>>data;
	cout<<"------- \n";
		    L.insertFirst('r',1);
			L.insertFirst(57,'d');
			L.insertFirst(50,'e');
			L.insertFirst(50,'m');
			L.insertFirst(2,'h');
			L.insertFirst(3,'A');
	cout<<"List : "<<node1<<"-> "<<node2<<" ->"<<node3<<"\n";
//	L.insertEnd(key,data);
//	L.insertFirst(data,key);
	cout<<" Cursor Operations"<<endl;
			L.toFirst();
			char d;
			int k;
	//	L.retrieveData(d,k);
	//	cout<<"\n  key  "<<k <<" -> "<<" data "<<" -> "<<d;
	//	L.advance();
	//	L.retrieveData(d,k);
	//	cout<<"\n  key  "<<k <<" -> "<<" data "<<" -> "<<d<<endl;
	//		L.advance();
	//	L.retrieveData(d,k);
	//	
	//	cout<<"\n  key  "<<k <<" -> "<<" data "<<" -> "<<d;
	//	L.advance();
	//	L.retrieveData(d,k);
	//	cout<<"\n  key  "<<k <<" -> "<<" data "<<" -> "<<d<<endl;
	//		L.advance();
	//			L.retrieveData(d,k);
	//	cout<<"\n  key  "<<k <<" -> "<<" data "<<" -> "<<d<<endl;
	//		L.advance();
	
	for(int i = 0; i < 5; i++) {
	    L.retrieveData(d, k);
	    cout << "Key: " << k << "-> Data: " << d << endl;
	    if(!L.atEnd()) L.advance();
	}
		L.deleteFirst();
		L.traverse();
//	....

    
	//Search my data
	if(L.search('e'))
	{
		cout<<" Found "<<endl;
	}
	else
	{
		cout<<"Not Found "<<endl;
	}
	int del;
	cout<<"enter in the  deleteNode \n";
		cin>>del;
		L.deleteNode();
//		L.~List();
			L.traverse();
			 L.insertFirst('r',1);
			L.insertFirst(57,'d');
			L.insertFirst(50,'e');
			L.insertFirst(50,'m');
			L.insertFirst(2,'h');
			L.insertFirst(3,'A');
			L.insertBefore(1,'B');
			L.insertEnd(12,'E');
			int newnode,End;
		cout<<"Enter item and new value to insertEnd \n ";
		
		cin>>newnode;
		cin>>End;
			L.insertEnd(newnode,End);
		
		int item,newValue;
		cout<<"Enter item and new value to insertBefore \n ";
			cin>>item;
			cin>>newValue;
	  		  L1.insertBefore(item,newValue);
	   cout<<L.search(2);
	   cout << "Size: " << L.listSize() << endl;
		cout << "\nDisplay Recursive \n";
            L.DispalyList();
			L.traverse();
		
			 cout << " Sorted List \n";
		    L.insertEnd(10, 'A');
		    L.insertEnd(20, 'H');
		    L.insertEnd(30, 'M');
		    L.insertEnd(40, 'E');
		    L.insertEnd(40, 'D');
    
    cout << "Recursive Size List : " << L.Recursive_List_Size() << endl;
    
    L.deleteFirst();
    L.deleteFirst();
   cout << " Size:  " << L.listSize() << endl;
   
    L.traverse();
      
}

		
	return 0;
}
