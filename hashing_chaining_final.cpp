#include<iostream>
#define SIZE 10
using namespace std;
struct Pair
{
	int value;
	Pair *next;
};
Pair *key[SIZE];

int display()
{
	Pair *ptr;
	cout<<"\n\t Key \t Value \n";
	for(int i=0;i<SIZE;i++)
	{
		ptr=key[i];
		if(ptr==NULL)
			continue;
		cout<<"\n\t "<<(ptr->value)%SIZE;
		while(ptr!=NULL)
		{
			cout<<" \t "<<ptr->value;
			ptr=ptr->next;
		}
	}
	return 0;
}
int search(int search_val)
{
	Pair *ptr;
	int d=search_val%SIZE;
	ptr=key[d];
	while(ptr!=NULL)
	{
		if(ptr->value==search_val)
			{
				cout<<"\n\t Found "<<search_val;
				return 0;
			}
		ptr=ptr->next;
	}
	cout<<"\n\t Value not found ";
	return 0;
}
int insert(int data)
{
	int k=data%SIZE;
	Pair *node=new Pair;
	node->value=data;
	node->next=NULL;
	if(key[k]==NULL)
	{
		key[k]=node;
		return 0;
	}
	Pair *ptr;
	ptr=key[k];
	while(ptr->next!=NULL)
		ptr=ptr->next;
	ptr->next=node;

}

int main()
{
	int i,val;
	//Pair *key[SIZE];
	for(i=0;i<SIZE;i++)
		key[i]=NULL;
	cout<<"\n\t Enter the elements \n\t";
	for(i=0;i<SIZE;i++)
	{
		cin>>val;
		insert(val);
	}
	display();
	cout<<"\n\t Enter the value to search ";
	cin>>val;
	search(val);
	cout<<"\n\t Insert new value ";
	cin>>val;
	insert(val);
	display();
	return 0;
}
