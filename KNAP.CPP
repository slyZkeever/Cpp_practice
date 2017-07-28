#include<iostream.h>
#include<conio.h>

struct knapsac
{
    int o, p, w, pw;
};

void profit(struct knapsec bag[], int capacity)
{
    for(int i = 1; i< items; i++)
    {
	for(int j = 0; j< i; i++)
	{
	   if(bag[i].p > bag[j].p)
	   {

	   temp = bag[j].o;
	   bag[j].o = bag[i].o;
	   bag[i].o = temp;

		temp = bag[j].p;
		bag[j].p = bag[i].p;
		bag[i].p = temp;

		temp = bag[j].w;
		bag[j].w = bag[i].w;
		bag[i].w = temp;

		temp = bag[j].pw;
		bag[j].pw = bag[i].pw;
		bag[i].pw = temp;
	   }
	}
    }

    cout << "object  profit   Weight  P/W" << endl;
    for(int i =0; i< items && capacity >= 0; i++)
    {
	if(bag[i].w > capacity)
	{
	  bag[i].w = capacity
	  bag[i].p = (bag[i].p*capacity)/bag[i].w;
	}
	cout << bag[i].o << " "<<bag[i].p << " "<< bag[i].w << " "<< bag[i].pw << endl;
	capacity -= bag[i].w;

    }

}


void weight(struct knapsec bag[])
{
    for(int i = 1; i< items; i++)
    {
	for(int j = 0; j< i; j++)
	{
	   if(bag[i].w < bag[j].w)
	   {


	   temp = bag[j].o;
	   bag[j].o = bag[i].o;
	   bag[i].o = temp;

	   temp = bag[j].p;
	   bag[j].p = bag[i].p;
	   bag[i].p = temp;

	   temp = bag[j].w;
	   bag[j].w = bag[i].w;
	   bag[i].w = temp;

	   temp = bag[j].pw;
	   bag[j].pw = bag[i].pw;
	   bag[i].pw = temp;

	   }
	}
    }

    cout << "object  profit   Weight  P/W" << endl;
    for(int i =0; i< items && capacity >= 0; i++)
    {
	if(bag[i].w > capacity)
	{
	  bag[i].w = capacity
	  bag[i].p = (bag[i].p*capacity)/bag[i].w;
	}
	cout << bag[i].o << " "<<bag[i].p << " "<< bag[i].w << " "<< bag[i].pw << endl;
	capacity -= bag[i].w;

    }

}

void ratio(struct knapsec bag[])
{
    for(int i = i; i< items; i++)
    {
	for(int j = 0; j< i; i++)
	{
	   if(bag[i].pw > bag[j].pw)
	   {
	   temp = bag[j].p;
	   bag[j].p = bag[i].p;
	   bag[i].p = temp;

	   temp = bag[j].w;
	   bag[j].w = bag[i].w;
	   bag[i].w = temp;

	   temp = bag[j].pw;
	   bag[j].pw = bag[i].pw;
	   bag[i].pw = temp;

	   }
	}
    }
    cout << "object  profit   Weight  P/W" << endl;
    for(int i =0; i< items && capacity >= 0; i++)
    {
	if(bag[i].w > capacity)
	{
	  bag[i].w = capacity
	  bag[i].p = (bag[i].p*capacity)/bag[i].w;
	}
	cout << bag[i].o << " "<<bag[i].p << " "<< bag[i].w << " "<< bag[i].pw << endl;
	capacity -= bag[i].w;

    }

}
void main()
{
    int items, capacity;

    cout<< "capacity: ";
    cin>> capacity >> endl;

    cout<< "NO. of items: ";
    cin>> items;

    struct knapsac *bag =  new struct knapsac[items];

    cout << "object profit and weight: "<<endl;
    for(int i = 0; i<items; i++)
    {
	cin>> bag[i].o >> bag[i].p >> bag[i].w;
	bag[i].pw = bag[i].p/bag[i].w;

    }

    //functions here
    int choice;
    cout << "which one? " << endl;
    switch(choice)
 




    getch();
}

