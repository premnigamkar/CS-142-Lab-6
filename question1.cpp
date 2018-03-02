#include <iostream>
using namespace std;

//1711096



class Node
{  
   public:
   int data;
   Node* next;
   Node()
   {
	   data=0;
	   next=NULL;
   }
};
class SLL
{
   public:
   Node* head;
   Node* tail;
   int size;

   SLL()
   {
	   size=0;
	   head=NULL;
	   tail=NULL;
   }
   void insert(int n);
   void deletelement();
   int countItems();
   void display();
};


   
   //Adds a new element to the linked list.
   void SLL::insert(int n)
   {
      
      Node *tmp=new Node;
      tmp->data=n;
      tmp->next=NULL;
      if(head==NULL)                          
      // Steps to perform when the list is empty.
      {
         head=tmp;
         
      }
      else
      {
         tail->next=tmp;
        
      }
      tail=tmp;
      size++;
   }
	
	
	
  
	
//Deletes the element at the end of the list 
   void SLL::deletelement()
   {
                Node* traverse = head;
		//goes to the 2nd last element
	        int count=0;
		while(count<size-2)
		{
			traverse = traverse->next;
			count++;
		}
		
		tail = traverse;
		traverse->next = NULL;
		size--;

   }
	
	
	
  
	   

   //Returns the number of items in the linked list. 
   int SLL::countItems()
   {
      //using size variable
	  int s=size;
	   return s; 
   }
   
   
   
	
	
//Displays all the elements in the linked list. Format should be followed as “1 -> 2 -> 3 -> 4 -> NULL” for a linked list holding integers in the order 1,2,3,4. 
void SLL::display()
   {
    if(head==NULL)
      cout << "\n \nNULL \n \nThe List is empty";             // Steps to perform when the list is empty.
    else
    {
      Node *temp = head;
      cout<<"\n \n";
      while(temp != NULL)
      {
       cout << temp->data;
       cout<<"  -->  ";
       temp = temp->next;
      }
      cout<<"NULL \n";
     }
    }
class array
{
    public:
    int *arr;
    int len;
    array()
    {
        len=1;
        arr=new int[len];
    }
};


//function to search a sorted array via binarysearch

int binarySearch(int *L,int x, int first, int last)
{
   if (last >= first)  
    {
      int middle = (first + last) / 2;

      if (x == L[middle])
        return middle;
      else if (x < L[middle])
        return binarySearch(L, x, first, middle - 1);
      else 
        return binarySearch(L, x, middle + 1, last);
    }
  return -1;    // failed to find key
}



//this function implements binaryserch of linked list through array
int binSrcLL(SLL ll, int key)
{
    array a;
    a.len=ll.countItems();
    Node* n=ll.head;
    for(int i=0;i<a.len;i++)
    {
     a.arr[i]=n->data;
     n=n->next;
    }
    int p=binarySearch(a.arr,key,0,a.len-1);
    return p;
}
int main()
{
    cout<<"\nEnter the number of array elements: ";
    int n;
    cin>>n;
    array Arr;
    Arr.len=n;
    cout<<"\nInput the array in an ascending order: ";
    for(int i=0;i<n;i++)
    {
     cin>>Arr.arr[i];
    }
    //sortArray(Arr.arr);
    cout<<"\nEnter the element to be searched: ";
    int key;
    cin>>key;
    int pos=binarySearch(A.arr, key, 0, n-1);
    if(pos==-1)
    {
        cout<<"\nElement not found !";
    }
    else
    {
        cout<<"\nElement found at position: "<<pos+1;
    }
    
    
    //TEST CODE FOR LINKED LIST
    
    SLL l1;
    l1.insert(67);
    l1.insert(876);
    l1.insert(9809);
    l1.insert(733);
    l1.insert(628);
    //l1.sort()
	
    cout<<"\n \nEXECUTING TEST CODE FOR LINKED LIST";    
   
    int pos2=binSrcLL(l1, 733);
        if(pos2==-1)
    {
        cout<<"\nElement not found !";
    }
    else
    {
        cout<<"\nElement found at position: "<<pos2+1;
    }
    //Let the key be 733
	
int pos2=binSrcLL(l1, 51);
        if(pos2==-1)
    {
        cout<<"\nElement not found !";
    }
    else
    {
        cout<<"\nElement found at position: "<<pos2+1;
    }
    //Let the key be 51
    
    return 0;
}
