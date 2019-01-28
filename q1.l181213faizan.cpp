#include<iostream>
using namespace std;
#include<string>
#include"gitHubUser.h"
using namespace std;
void inputFromUser(githubuser* arr, int size);
bool Comparison(githubuser a,githubuser b);
int main()
{
	int size;
	cout<<"enter size of array";
	cin>>size;
	githubuser *arr=new githubuser[size+1];
    githubuser n1;
	githubuser n2;
	cout<<"for first user"<<endl;
	cout<<"enter firstname";
	cin>>n1.firstname;
	cout<<"enter username";
	cin>>n1.username;
	cout<<"enter password";
	cin>>n1.password;
	cout<<"enter email";
	cin>>n1.email;
	cout<<"foldercount";
	cin>>n1.foldercount;
	cout<<"for second user"<<endl;
	cout<<"enter firstname";
	cin>>n2.firstname;
	cout<<"enter username";
	cin>>n2.username;
	cout<<"enter password";
	cin>>n2.password;
	cout<<"enter email";
	cin>>n2.email;
	cout<<"enter no. of folder";
	cin>>n2.foldercount;

	if (Comparison(n1,n2))
	{
	cout<<"both users are same";
	}
	else
	cout<<"user are different";

	
	inputFromUser(arr,size);
	system("pause");
	return 0;

}
bool Comparison(githubuser a,githubuser b)
{
bool flag=0;
if(a.firstname==b.firstname && a.username==b.username && a.password==b.password && a.email==b.email && a.foldercount==b.foldercount)
{
flag=1;
}

return flag;
}
void inputFromUser(githubuser* arr, int size)
{
	bool flag=1;
	for(int i=0;i<size;i++)
	{
a:
		cout<<"enter first name of"<<i+1<<endl;
		cin>>arr[i].firstname;
		cout<<"enter user"<<i+1<<"name"<<endl;
		cin>>arr[i].username;
		for(int j=0;j<i;j++)
		{
			if(arr[j].username==arr[i].username)
			{
				cout<<"Already Exists\n";
				goto a;
			}
		}
		cout<<"enter password";
		cin>>arr[i].password;
		cout<<"enter email";
		cin>>arr[i].email;
		cout<<"enter folder count";
		cin>>arr[i].foldercount;

	}
	cout<<"enter user"<<i+1<<"name"<<endl;
	cin>>arr[size].username;
	for(int j=0;j<size;j++)
	{

		if(arr[size].username==arr[j].username)
		{
			cout<<"This userName already exists";
			cout<<" first name of"<<i+1<<endl;
			cout<<arr[j].firstname;
			cout<<" username"<<endl;
			cout<<arr[j].username;
cout<<" password";
			cout<<arr[j].password;
			cout<<" email";
			cout<<arr[j].email;
			cout<<"folder count";
			cout<<arr[j].foldercount;
			flag=0;
		}
		if(flag==0)
			break;
	}
	delete[]arr;
}

