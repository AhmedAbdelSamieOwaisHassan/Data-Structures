#include <iostream>
#include"List.h"
using namespace std;
using std::string;
// Member Functions
// Constructor
List::List()
{
	head=cursor=prev = NULL;
}

//  Destructor
List::~List()
{
	makeListEmpty();
}

bool List::listIsEmpty() const
{
	return (head == NULL);
}

bool List::curIsEmpty() const
{
	return (cursor == NULL);
}

void List::toFirst()
{
	cursor = head;  prev = NULL;
}

bool List::atFirst() const
{
	if(!listIsEmpty())
	{
		if(curIsEmpty())
		return true;
		else
		return false;
	}
	return (cursor == head);
}

void List::advance()
{
	prev = cursor;
	cursor = cursor->next;
}

void List::toEnd()
{
	toFirst();
	    if (!listIsEmpty())
	    {
	    		while ( cursor->next != NULL)
		       advance();
		}
	

}

bool List::atEnd() const
{
		if ( listIsEmpty()) 
	{
		if (curIsEmpty())
		return true;
		else
		return false;
	};
			
		return (cursor->next == NULL);	
			
}

int List::listSize() 
{
	node *p;
	int count=0;
	toFirst();
if (!listIsEmpty()) 
{
	p=cursor;
	while(p!=NULL){
		count++;
		p=p->next;
	}
}
return count;
}

void List::updateData( char d)
{
	cursor->data = d;
}

void List::retrieveData(char &d, int &k) const
{
	d = cursor->data; 
	k = cursor ->key;
}

void List::retrieveKey(int &k) const
{
	k = cursor->key; 
}

void List::insertFirst(const int &k, const char &d)
{
	

	//...................
	node *p = new node;
	p->key = k;
    p->data = d;
	p->next = head;
	head = p;
	cursor = head;
	prev = NULL;
	//..................
//	node*newnode;
//	node*last;
//	newnode=new node;
//	newnode->length=k;
//	if(head==NULL)
//	{
//		head =newnode;
//		newnode->next=NULL;
//	}
//	else
//	{
//		last=head;
//		while(last->next!=NULL)
//		{
//			last=last->next;
//		}
//		last->next=newnode;
//		newnode->next =NULL;
//	}
//...
//   node *p =new node;
//   p->key =k ;
//   p->data = d;
//   if(head ==0)
//   {
//   	head =cursor=prev= p;
//   	p->next=NULL;
//   }
//   else 
//   {
//   	p->next =head;
//   	head =p;
//   }
//   head++;

}


void List::insertAfter( const int &k, const char &d)
{
//	1-A
	node * newnode = new node; 
	newnode->data = d; 
	newnode->next = head; 
	head = newnode;

//   2-A .........................
//		node *pnew;
//	pnew = new node;
//	pnew->key = k; pnew->data = d;
//	pnew->next = cursor->next;
// 	cursor->next = pnew;
// 	prev = cursor;
// 	cursor = pnew;
//......................

//3-A
//=======To Do list==============
//	    int curr = 1;
//node *newnode = new node;
//newnode->data = d;
//newnode->key=k;
////newnode ->next = NULL;
//if( head == NULL){// list is empty
//
//head = newnode;
//}
//else if (d == 1){ // first position to be head node
//newnode->next = head;
//head = newnode;
//}
//else
//{
//node *temp = head;
//while (curr < d-1){
//curr++;
//temp=temp->next;
//}
//newnode->next = temp->next;
//temp->next = newnode;
//}
//=============
}

void List::insertBefore(const int &item, const char &d )
{
//	  	node *p= new node;
//		p = new node;
//		p->key = k;
//	    p->data = d;
//		p->next = cursor;
//	    prev->next = p;
//		cursor = p;


if(!listIsEmpty()){
	node * p = new node;
p->data=d;
node *temp=head;
while(temp!=NULL && temp->next->data!=item)
{
	temp=temp->next;
}
p->next=temp->next;
temp->next =p ;
head = p;
}
else{
	cout<<"Sory , item NOT Found \n";
}

}

void List::insertEnd(const int &k, const char &d )
{
if (listIsEmpty()) insertFirst(k,d);
	else {toEnd(); insertAfter(k,d); }
//node *p = new node;
//   p->key = k;
//	p->data = d;
//if(head == NULL) //List is Empty
//{
//head = p;
//}
//else  // List is not Empty
//{
//node *q=head;
//
//while (q->next !=NULL)
//{
//q = q->next;
//}
//q->next= p;
//
//}
}


void List::deleteNode()
{
	node *p =new node;
   	if(! curIsEmpty())
	{		
		if (atFirst()) 	
   		{	p = cursor;
			cursor = cursor->next;
			head = cursor;
      		delete p;
      		//p= head;
      		//head = head->next;
      		//cursor = head;
      		//delete p;
		}

		else 	
   		{	p = cursor;
			cursor = cursor->next;
			prev->next = cursor;
			delete p;
		}
   }
}

void List::deleteFirst()
{
	if(listIsEmpty() || head==NULL)
	cout<<"Linked List is Empty ! \n";
	else
	{
	node *temp = head;
	
	head = head->next;
	delete temp;
	}
}

void List::deleteEnd()
{
	if(! listIsEmpty())
	 {
	   toEnd();
	   deleteNode();
	  }
}

void List::makeListEmpty()
{
	 if (!listIsEmpty()) {
        toFirst();
        while (!listIsEmpty()) {            
            node *p;
            p = cursor;
            cursor = cursor->next;
            delete p;
			
			}
		
			
		}	else deleteNode();
}

bool List::search(const int &k)
{
	node *S = head;
int pos=0;
while (S != NULL)
{
if (S->data == k)
return pos;
pos++;
S= S-> next;
}
return -1;
}

void List::orderInsert(const char &d, const int &k)
{
	toFirst();
	while ((cursor != NULL) && (k > cursor->key))
		advance();
	if (prev == NULL)  insertFirst(k,d);
		else insertBefore(k,d);
}

void List::traverse()
{
toFirst();
	while (! curIsEmpty())
	{
		cout << cursor->data << endl;
		advance();
	}
//	if(head == NULL)
//{
//cout<<"Empty List \n";
//}
//node * Temp = head;
////cout<<"Elements in Linked List\n";
//while(Temp != NULL)
//{
// cout<<Temp->data<<" "; 
//Temp = Temp->next;
//}
//cout<<endl;



}


//exercises
void List::reverse(){
	node *head, *cursor, *prev,*next;
	prev=NULL;
	cursor=head;
	next=cursor->next;
	while (next!=NULL || cursor!=NULL)
	{
		next=cursor=prev;
		cursor->next=prev;
		prev=cursor; 
		cursor=next;
	}
	head=prev;
}
//list size recursive
int List :: Recursive_List_Size( ) 

{ 
return List_Size2(head);
 } 
 
 
 int List :: List_Size2( node *h) 
{ 
if (h == NULL) return 0; 
else
 return 1 + List_Size2(h->next); 
}

//display list recursive

int List :: DispalyList( ) 
{ 
return Display(head); 
} 

int List:: Display( node *h) 
{ 
if (h == NULL) {
	return 0;
}else {
	cout << h->key << " " << h->data << endl; 
Display(h->next); 
}

} 

bool List::Sortedlist()
{
    if(listIsEmpty() || head->next == NULL)
        return true;
    
    node *CUR = head;
    
    while(CUR->next != NULL)
    {

        if(CUR->data > CUR->next->data)
            return false;
        
        CUR = CUR->next;
    }
    
    return true;
}
