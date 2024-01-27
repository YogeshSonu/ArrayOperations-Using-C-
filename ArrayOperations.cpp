/*
	Name:        ARRAY ALL FUNCTIONS IN ONE PROGRAM
	Copyright: 
	Author:      YOGESH PUROHIT
	Date:        28/09/22 15:44
	Description: C++ PROGRAM
*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class ArrayFunctions
{
	public:
		int array[100];
		int size;
	ArrayFunctions()
	{
		size=10;
	}
	ArrayFunctions(int s)
	{
		size=s;
	} 
	void GetArraysize()
	{
		cout<<"\n\t\tThe Size of Given Array is :"<<size;
	}
	void InputArray()
	{
		cout<<"\n\nEnter "<<size <<" Elements of Array :";
		for(int i=0;i<size;i++)
		{
			cin>>array[i];
		}
	}
	void OutputArray()
	{
		cout<<"\n\tGiven Array is :\n";
		for(int i=0;i<size;i++)
		{
			cout<<array[i]<<"\t";
		}
	}
//Functions:

	// Function of Insert element in the Array..
	
	void InsertElement(int value,int loc)
	{
		int insertarray[100],insertsize;
		char insertchoice;
		insertsize=size;
		for(int i=0;i<insertsize;i++)
		{
			insertarray[i]=array[i];
		}
		if(loc==(insertsize+1))
		{
			insertsize=insertsize+1;
			for(int i=insertsize-1;i>=loc-1;i--)
			{
				insertarray[i+1]=insertarray[i];
			}
			insertarray[loc-1]=value;
			cout<<"\nElement Inserted in the Array Successfully";
			cout<<"\n\nArray after Insert a Element is :\n";
			for(int i=0;i<insertsize;i++)
			{
				cout<<insertarray[i]<<"\t";
			}
			cout<<"\n\nPress any Key to Continue......";
			getch();
			top:
				system("cls");
				cout<<"\n\nDo you Want to Save this Array as Original Array (y/n) :" ;
				insertchoice=toupper(getch());
				if(insertchoice=='Y')
				{
					size=insertsize;
					for(int i=0;i<size;i++)
					{
						array[i]=insertarray[i];
					}
					cout<<"\n\nArray is Saved as Original Array....";
				}
				else if(insertchoice=='N')
				{
					cout<<"\n\nArray is not Saved as Original Array.....";
				}
				else
				{
					cout<<"\n\nSorry You entered the wrong letter...\nPlease type y for Yes and n for No.....\n\nPress any key to Try Again!!!!!";
					getch();
					goto top;
				}

		}
		else if(loc<=insertsize)
		{
			for(int i=insertsize-1;i>=loc-1;i--)
			{
				insertarray[i+1]=insertarray[i];
			}
			insertarray[loc-1]=value;
			insertsize=insertsize+1;
			cout<<"\nElement Inserted in the Array Successfully";
			cout<<"\n\nArray after Insert a Element is :\n";
			for(int i=0;i<insertsize;i++)
			{
				cout<<insertarray[i]<<"\t";
			}
			cout<<"\n\nPress any Key to Continue......";
			getch();
			top1:
				system("cls");
				cout<<"\n\nDo you Want to Save this Array as Original Array (y/n) :" ;
				insertchoice=toupper(getch());
				if(insertchoice=='Y')
				{
					size=insertsize;
					for(int i=0;i<size;i++)
					{
						array[i]=insertarray[i];
					}
					cout<<"\n\nArray is Saved as Original Array....";
				}
				else if(insertchoice=='N')
				{
					cout<<"\n\nArray is not Saved as Original Array.....";
				}
				else
				{
					cout<<"\n\nSorry You entered the wrong letter...\nPlease type y for Yes and n for No.....\n\nPress any key to Try Again!!!!!";
					getch();
					goto top1;
				}
		}
		else
		{
			cout<<"\nError!!!! Array Size is "<<size;
		}
	}
	
	// Function of Delete element in the Array..
	
	void DeleteElement(int x,int count)
	{
		int deletearray[100],deletesize,deletechoice;
		int pos=-1;
		deletesize=size;
		for(int i=0;i<deletesize;i++)
		{
			deletearray[i]=array[i];
		}
		switch(count)
		{
			case 1:
				if(x>deletesize)
				{
					cout<<"\n\n\tError!!!! Array Size is "<<deletesize;					
				}
				else
				{
					for(int i=x-1;i<deletesize-1;i++)
					{
						 deletearray[i]=deletearray[i+1];
					}
					cout<<"\nElement Deleted in the Array Successfully.";
					deletesize=deletesize-1;
					cout<<"\n\nArray After Deletion of Element is :\n";
					for(int i=0;i<deletesize;i++)
					{
						cout<<deletearray[i]<<"\t";
					}
					cout<<"\n\nPress any Key to Continue......";
					getch();
					top:
						system("cls");
						cout<<"\n\nDo you Want to Save this Array as Original Array (y/n) :" ;
						deletechoice=toupper(getch());
						if(deletechoice=='Y')
						{
							size=deletesize;
							for(int i=0;i<size;i++)
							{
								array[i]=deletearray[i];
							}
							cout<<"\n\nArray is Saved as Original Array....";
						}
						else if(deletechoice=='N')
						{
							cout<<"\n\nArray is not Saved as Original Array.....";
						}
						else
						{
							cout<<"\n\nSorry You entered the wrong letter...\nPlease type y for Yes and n for No.....\n\nPress any key to Try Again!!!!!";
							getch();
							goto top;
						}	
				}
				break;
			case 0:
				for(int i=0;i<deletesize;i++)
				{
					if(deletearray[i]==x)
					{
						pos=i;
						break;
					}
				}
				if(pos!=-1)
				{
					for(int i=pos;i<deletesize-1;i++)
					{
						deletearray[i]=deletearray[i+1];
					}
					cout<<"\nElement Deleted in the Array Sucessfully.";
					deletesize=deletesize-1;
					cout<<"\n\nArray after Delete a Element is \n";
					for(int i=0;i<deletesize;i++)
					{
						cout<<deletearray[i]<<"\t";
					}
					cout<<"\n\nPress any Key to Continue......";
					getch();
					top1:
						system("cls");
						cout<<"\n\nDo you Want to Save this Array as Original Array (y/n) :" ;
						deletechoice=toupper(getch());
						if(deletechoice=='Y')
						{
							size=deletesize;
							for(int i=0;i<size;i++)
							{
								array[i]=deletearray[i];
							}
							cout<<"\n\nArray is Saved as Original Array....";
						}
						else if(deletechoice=='N')
						{
							cout<<"\n\nArray is not Saved as Original Array.....";
						}
						else
						{
							cout<<"\n\nSorry You entered the wrong letter...\nPlease type y for Yes and n for No.....\n\nPress any key to Try Again!!!!!";
							getch();
							goto top;
						}
				}
				else
				{
					cout<<"\n\n"<<x<<" is not found in the Array....";
				}
				break;				 
		}						 
	}
	
	// Function of Update element in the Array..
	
	void UpdateElement(int existvalue,int newvalue,int count)
	{
		int updatearray[100],updatesize,updatechoice;
		updatesize=size;
		for(int i=0;i<updatesize;i++)
		{
			updatearray[i]=array[i];
		}
		switch(count)
		{
			case 1:
				if(existvalue>updatesize)
				{
					cout<<"\nError!!!!Array Size is "<<updatesize;
				}
				else
				{
					for(int i=0;i<updatesize;i++)
					{
						if(i==existvalue)
						{
							updatearray[i-1]=newvalue;
						}
						if(existvalue==updatesize)
						{
							updatearray[updatesize-1]=newvalue;
						}
					}
					cout<<"\nElement Updated in the Array Successfully.";
					cout<<"\n\nArray After Update a Element is :\n";
					for(int i=0;i<updatesize;i++)
					{
						cout<<updatearray[i]<<"\t";
					}
					cout<<"\n\nPress any key to Continue......";
					getch();
					top:
						system("cls");
						cout<<"\n\nDo you Want to Save this Array as Original Array (y/n) :" ;
						updatechoice=toupper(getch());
						if(updatechoice=='Y')
						{
							size=updatesize;
							for(int i=0;i<size;i++)
							{
								array[i]=updatearray[i];
							}
							cout<<"\n\nArray is Saved as Original Array....";
						}
						else if(updatechoice=='N')
						{
							cout<<"\n\nArray is not Saved as Original Array.....";
						}
						else
						{
							cout<<"\n\nSorry You entered the wrong letter...\nPlease type y for Yes and n for No.....\n\nPress any key to Try Again!!!!!";
							getch();
							goto top;
						}
				}
				break;
			case 0:
				int val=0;
				for(int i=0;i<updatesize;i++)
				{
					if(updatearray[i]==existvalue)
					{
						updatearray[i]=newvalue;
						val=1;
					}
				}
				if(val==0)
				{
					cout<<"\n\n "<<existvalue<<" is not found in the array..";
				}
				else if(val==1)
				{
					cout<<"\nElement Updated in the Array Successfully.";
					cout<<"\n\nArray after Update a Element is :\n";
					for(int i=0;i<updatesize;i++)
					{
						cout<<updatearray[i]<<"\t";
					}
					cout<<"\n\nPress any key to Continue......";
					getch();
					top1:
						system("cls");
						cout<<"\n\nDo you Want to Save this Array as Original Array (y/n) :" ;
						updatechoice=toupper(getch());
						if(updatechoice=='Y')
						{
							size=updatesize;
							for(int i=0;i<size;i++)
							{
								array[i]=updatearray[i];
							}
							cout<<"\n\nArray is Saved as Original Array....";
						}
						else if(updatechoice=='N')
						{
							cout<<"\n\nArray is not Saved as Original Array.....";
						}
						else
						{
							cout<<"\n\nSorry You entered the wrong letter...\nPlease type y for Yes and n for No.....\n\nPress any key to Try Again!!!!!";
							getch();
							goto top1;
						}	
				}
				break;                           
		}		
	}
	
	// Function of Search element in the Array..
	
	void Searching(int value,int count)
	{
		int searcharray[100],searchchoice,loc[50],pos=0,temp=0;
		switch(count)
		{
			case 1:
				for(int i=0;i<size;i++)
				{
					if(array[i]==value)
					{
						loc[i]=array[i];
						pos++;
					}
					if(i==size-1)
					{
						if(array[i]!=value)
						{
							loc[i]=0;
						}
					}
				}
				cout<<"\nGiven Array is :\n";
				for(int i=0;i<size;i++)
				{
					cout<<array[i]<<"\t";
				}
				if(pos==0)
				{
					cout<<"\n\n"<<value<<" is not present in the Array..";
				}
				else
				{
					cout<<"\n\n"<<value<<" is present in the array at position :";
					for(int i=0;i<size;i++)
					{
						if(value==loc[i])
						{
							temp=i;
							cout<<" "<<temp+1; 
						}
					} 
				}
				break;
			case 0:
				int temp=0,first=0,last=size-1;
				int middle=(first+last)/2;
				for(int i=0;i<size;i++)
				{
					searcharray[i]=array[i];
				}
				for(int i=0;i<size;i++)
				{
					for(int j=i+1;j<size;j++)
					{
						if(searcharray[i]>searcharray[j])
						{
							temp=searcharray[i];
							searcharray[i]=searcharray[j];
							searcharray[j]=temp;
						}
					}
				}
				cout<<"\nSorted Array is :\n";
				for(int i=0;i<size;i++)
				{
					cout<<searcharray[i]<<"\t";
				}
				while(first<=last)
				{
					if(searcharray[middle]<value)
					{
						first=middle+1;
					}      
					else if(searcharray[middle]==value)
					{
						cout<<"\n\n"<<value<<" is present at position :"<<middle+1;
						break;
					}
					else
					{
						last=middle-1;
					}
					middle=(first+last)/2;
				}
				if(first>last)
				{
					cout<<"\n"<<value<<" is not present in the Array..";
				}
				cout<<"\n\nPress any key to Continue......";
				getch();
				top:
						system("cls");
						cout<<"\n\nDo you Want to Save this Sorted Array as Original Array (y/n) :" ;
						searchchoice=toupper(getch());
						if(searchchoice=='Y')
						{
							for(int i=0;i<size;i++)
							{
								array[i]=searcharray[i];
							}
							cout<<"\n\nArray is Saved as Original Array....";
						}
						else if(searchchoice=='N')
						{
							cout<<"\n\nArray is not Saved as Original Array.....";
						}
						else
						{
							cout<<"\n\nSorry You entered the wrong letter...\nPlease type y for Yes and n for No.....\n\nPress any key to Try Again!!!!!";
							getch();
							goto top;
						}
				break;
		}
	}
	
	// Function of Compare Two Arrays..
	
	void CompareArray()
	{
		int comparearray[100],comparesize,flag=0;
		cout<<"\n\nEnter the Size of Second Array :";
		cin>>comparesize;
		cout<<"\n\nEnter "<<comparesize<<" Elements of Second Array :";
		for(int i=0;i<comparesize;i++)
		{
			cin>>comparearray[i];
		}
		cout<<"\n\nGiven First Array is :\n";
		for(int i=0;i<size;i++)
		{
			cout<<array[i]<<"\t";
		}
		cout<<"\n\nGiven Second Array is :\n";
		for(int i=0;i<comparesize;i++)
		{
			cout<<comparearray[i]<<"\t";
		}
		if(size!=comparesize)
		{
			cout<<"\n\n\tSize of Two Arrays is not Same...\n\tSo Arrays is not Equal";
		}
		else
		{
			for(int i=0;i<size;i++)
			{
				if(array[i]==comparearray[i])
				{
					flag++;
				}
			}
			if(flag==size || flag==comparesize)
			{
				cout<<"\n\n\tSize of Two Arrays and All Elements of Two Arrays is Same\n\tSo Arrays is Equal";
				
			}
			else
			{
				cout<<"\n\n\tOrder of Two Arrays is Same.But Elements of Two Arrays is not Same.\n\tSo Arrays is not Equal";
			}
		}
	}
	
	// Function of Merge Two Arrays..
	
	void MergeArray()
	{
		int array2[100],array2size,mergesize,mergearray[100],k=0,mergechoice;
		cout<<"\n\nEnter the size of Second Array :";
		cin>>array2size;
		cout<<"\n\nEnter the "<<array2size<<" Elements of Second Array :";
		for(int i=0;i<array2size;i++)
		{
			cin>>array2[i];
		}
		cout<<"\n\nGiven First Array is :\n";
		for(int i=0;i<size;i++)
		{
			cout<<array[i]<<"\t";
		}
		cout<<"\n\nGiven Second Array is :\n";
		for(int i=0;i<array2size;i++)
		{
			cout<<array2[i]<<"\t";
		}
		mergesize=size+array2size;
		for(int i=0;i<size;i++)
		{
			mergearray[i]=array[i];
			k++;
		}
		for(int i=0;i<array2size;i++)
		{
			mergearray[k]=array2[i];
			k++;
		}
		cout<<"\n\nArray After Merging Two Arrays is :\n";
		cout<<"\nSize of Array is :"<<mergesize<<"\n"<<endl;
		for(int i=0;i<mergesize;i++)
		{
			cout<<mergearray[i]<<"\t";
		}
		cout<<"\n\nPress any Key to Continue..";
		getch();
		top:
			system("cls");
			cout<<"\n\nDo you Want to Save this Array as Original Array (y/n) :" ;
			mergechoice=toupper(getch());
			if(mergechoice=='Y')
			{
				size=mergesize;
				for(int i=0;i<size;i++)
				{
					array[i]=mergearray[i];
				}
				cout<<"\n\nArray is Saved as Original Array....";
			}
			else if(mergechoice=='N')
			{
				cout<<"\n\nArray is not Saved as Original Array.....";
			}
			else
			{
				cout<<"\n\nSorry You entered the wrong letter...\nPlease type y for Yes and n for No.....\n\nPress any key to Try Again!!!!!";
				getch();
				goto top;
			}
	}
	
	// Function of find Greatest and Smallest Element in Array..
	
	void MaxAndMinElement()
	{
		int maximum,minimum;
		maximum=array[0];
		minimum=array[0];
		for(int i=1;i<size;i++)
		{
			if(maximum<array[i])
			{
				maximum=array[i];
			}
		}
		for(int i=1;i<size;i++)
		{
			if(minimum>array[i])
			{
				minimum=array[i];
			}
		}
		cout<<"\n\nGreatest Element in the Array is :"<<maximum;
		cout<<"\n\nSmallest Element in the Array is :"<<minimum;
	}
	
	// Function of Reverse the Array..
	
	void ReverseArray()
	{
		int temp,reversearray[100],reversechoice;
		for(int i=0;i<size;i++)
		{
			reversearray[i]=array[i];
		}
		for(int i=0;i<size/2;i++)
		{
			temp=reversearray[i];
			reversearray[i]=reversearray[size-i-1];
			reversearray[size-i-1]=temp;
		}
		cout<<"\n\nReverse of Given Array is :\n";
		for(int i=0;i<size;i++)
		{
			cout<<reversearray[i]<<"\t";
		}
		cout<<"\n\nPress any key to Continue....";
		getch();
		top:
			system("cls");
			cout<<"\n\nDo you Want to Save this Array as Original Array (y/n) :" ;
			reversechoice=toupper(getch());
			if(reversechoice=='Y')
			{
				for(int i=0;i<size;i++)
				{
					array[i]=reversearray[i];
				}
				cout<<"\n\nArray is Saved as Original Array....";
			}
			else if(reversechoice=='N')
			{
				cout<<"\n\nArray is not Saved as Original Array.....";
			}
			else
			{
				cout<<"\n\nSorry You entered the wrong letter...\nPlease type y for Yes and n for No.....\n\nPress any key to Try Again!!!!!";
				getch();
				goto top;
			}
	}
	
	// Function of Sorting of the Array..
	
	void Sorting(int count)
	{
		int sortingarray[100],temp=0,sortingchoice;
		for(int i=0;i<size;i++)
		{
			sortingarray[i]=array[i];
		}
		switch(count)
		{
			case 1:
				for(int i=0;i<size-1;i++)
				{
					for(int j=0;j<size-i-1;j++)
					{
						if(sortingarray[j]>sortingarray[j+1])
						{
							temp=sortingarray[j];
							sortingarray[j]=sortingarray[j+1];
							sortingarray[j+1]=temp;
						}		
					}
				}
				cout<<"\n\nSorted Array in Ascending Order...\n";
				for(int i=0;i<size;i++)
				{
					cout<<sortingarray[i]<<"\t";
				}
				cout<<"\n\nPress any key to Continue......";
				getch();
				top:
					system("cls");
					cout<<"\n\nDo you Want to Save this Array as Original Array (y/n) :" ;
					sortingchoice=toupper(getch());
					if(sortingchoice=='Y')
					{	
						for(int i=0;i<size;i++)
						{	
							array[i]=sortingarray[i];
						}
						cout<<"\n\nArray is Saved as Original Array....";
					}
					else if(sortingchoice=='N')
					{
						cout<<"\n\nArray is not Saved as Original Array.....";
					}
					else
					{
						cout<<"\n\nSorry You entered the wrong letter...\nPlease type y for Yes and n for No.....\n\nPress any key to Try Again!!!!!";
						getch();
						goto top;
					}	
				break;
			case 0:
				for(int i=0;i<size-1;i++)
				{
					for(int j=0;j<size-i-1;j++)
					{
						if(sortingarray[j]<sortingarray[j+1])
						{
							temp=sortingarray[j];
							sortingarray[j]=sortingarray[j+1];
							sortingarray[j+1]=temp;
						}		
					}
				}
				cout<<"\n\nSorted Array in Descending Order...\n";
				for(int i=0;i<size;i++)
				{
					cout<<sortingarray[i]<<"\t";
				}
				cout<<"\n\nPress any key to Continue......";
				getch();
				top1:
					system("cls");
					cout<<"\n\nDo you Want to Save this Array as Original Array (y/n) :" ;
					sortingchoice=toupper(getch());
					if(sortingchoice=='Y')
					{	
						for(int i=0;i<size;i++)
						{	
							array[i]=sortingarray[i];
						}
						cout<<"\n\nArray is Saved as Original Array....";
					}
					else if(sortingchoice=='N')
					{
						cout<<"\n\nArray is not Saved as Original Array.....";
					}
					else
					{
						cout<<"\n\nSorry You entered the wrong letter...\nPlease type y for Yes and n for No.....\n\nPress any key to Try Again!!!!!";
						getch();
						goto top1;
					}
				break;
		}
	}
};
int main()
{
	int array[500];
	int n,i,j,choice,n1=0;
	cout<<"Enter the Size of Array:";
	cin>>n;
	ArrayFunctions objArray(n);
	objArray.InputArray();
	do
	{
		system("cls");
		cout<<"\t\t\tHere are the All Operations of Array which you would like to be done on Array....";
		cout<<"\n\t\t\t\t\t.______________________________________________.";
		cout<<"\n\t\t\t\t\t|S.NO|          All Array Operations........   |";
		cout<<"\n\t\t\t\t\t|____|_________________________________________|";
		cout<<"\n\t\t\t\t\t|1.  |\t\t  Insert a Element.            |";
		cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
		cout<<"\n\t\t\t\t\t|2.  |\t\t  Delete a Element.            |";
		cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
		cout<<"\n\t\t\t\t\t|3.  |\t\t  Update a Element.            |";
		cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
		cout<<"\n\t\t\t\t\t|4.  |\t\t  Display the Array.           |";
		cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
		cout<<"\n\t\t\t\t\t|5.  |\t\t     Searching.                |";
		cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
		cout<<"\n\t\t\t\t\t|6.  |\t\t      Sorting.                 |";
		cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
		cout<<"\n\t\t\t\t\t|7.  |\t\t  Compare the Array.           |";
		cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
		cout<<"\n\t\t\t\t\t|8.  |\t\t  Merge the Array.             |";
		cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
		cout<<"\n\t\t\t\t\t|9.  |  Greatest and Smallest Element in Array.|";
		cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
		cout<<"\n\t\t\t\t\t|10. |\t\t  Reverse the Array.           |";
		cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
		cout<<"\n\t\t\t\t\t|11. |\t\t    Size of Array.             |";
		cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
		cout<<"\n\t\t\t\t\t|12. |\t\t      Exit.                    |";
		cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
		cout<<"\n\t\t\t\t\t|____|_________________________________________|";
		cout<<"\nEnter your Choice from Above Table[1-12] :";
		cin>>choice;
		switch(choice)
		{
			case 1:
				int insertvalue,insertloc;
				system("cls");
				cout<<"Enter the Element you want to be insert in the array :";
				cin>>insertvalue;
				cout<<"\nEnter the Location you want to be insert a Element in the array :";
				cin>>insertloc;
				objArray.InsertElement(insertvalue,insertloc);
				cout<<"\n\nPress any key to Continue.......";
				getch();
				break;
			case 2:
				int deletevalue,deleteloc,deletechoice,deletecount;
				top:
					deletecount=0;
					system("cls");
					cout<<"\n\n\t\t-->There are two Methods to Delete a Element in Array....\n\t\t-->By Which Method you want to Delete a Element in Array....";
					cout<<"\n\t\t\t\t\t.______________________________________________.";
					cout<<"\n\t\t\t\t\t|S.NO|               Methods........           |";
					cout<<"\n\t\t\t\t\t|____|_________________________________________|";
					cout<<"\n\t\t\t\t\t|1.  |\t\tBy Location of Element.        |";
					cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
					cout<<"\n\t\t\t\t\t|2.  |\t\t  By Value of Element.         |";
					cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
					cout<<"\n\t\t\t\t\t|____|_________________________________________|";
					cout<<"\nEnter your Choice from Above Table[1-2] :";
					cin>>deletechoice;
					switch(deletechoice)
					{
						case 1:
							system("cls");
							deletecount=1;
							cout<<"Enter the Location you want to Delete a Element in Array :";
							cin>>deleteloc;
							objArray.DeleteElement(deleteloc,deletecount);
							deletecount=0;
							break;
						case 2:
							system("cls");
							cout<<"Enter the Value of you want to Delete a Element in Array :";
							cin>>deletevalue;
							objArray.DeleteElement(deletevalue,deletecount);
							break;
						default:
							cout<<"\n\n\tWrong Choice.... \n\tPress any key to Try Again!!!!";
							getch();
							goto top;
					}
				cout<<"\n\nPress any Key to Continue......";
				getch();
				break;
			case 3:
				int updatecount;
				int updatevalue,updateloc,updatechoice;
				top1:
					updatecount=0;
					system("cls");
					cout<<"\n\n\t\t-->There are two Methods to Update a Element in Array....\n\t\t-->By Which Method you want to Update a Element in Array....";
					cout<<"\n\t\t\t\t\t.______________________________________________.";
					cout<<"\n\t\t\t\t\t|S.NO|               Methods........           |";
					cout<<"\n\t\t\t\t\t|____|_________________________________________|";
					cout<<"\n\t\t\t\t\t|1.  |\t\tBy Location of Element.        |";
					cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
					cout<<"\n\t\t\t\t\t|2.  |\t\t  By Value of Element.         |";
					cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
					cout<<"\n\t\t\t\t\t|____|_________________________________________|";
					cout<<"\nEnter your Choice from Above Table[1-2] :";
					cin>>updatechoice;
					switch(updatechoice)
					{
						case 1:
							system("cls");
							updatecount=1;
							cout<<"Enter the Location you want to Update a Element in Array :";
							cin>>updateloc;
							cout<<"Enter the new value of you want to Update a Element in Array :";
							cin>>updatevalue;
							objArray.UpdateElement(updateloc,updatevalue,updatecount);
							updatecount=0;
							break;
						case 2:
							system("cls");
							cout<<"Enter the Existing Value of you want to Update a Element in Array :";
							cin>>updateloc;
							cout<<"Enter the new Value you want to Update a Element in Array :";
							cin>>updatevalue;
							objArray.UpdateElement(updateloc,updatevalue,updatecount);
							break;
						default:
							cout<<"\n\n\tWrong Choice.... \n\tPress any key to Try Again!!!!";
							getch();
							goto top1;
					}
				cout<<"\n\nPress any key to Continue......";
				getch();	
				break;
			case 4:
				system("cls");
				objArray.OutputArray();
				cout<<"\n\nPress any Key to Continue.....";
				getch();
				break;
			case 5:
				int searchvalue,searchchoice,searchcount;
				top2:
					searchcount=0;
					system("cls");
					cout<<"\n\n\t\t-->There are two Methods to Search a Element in Array....\n\t\t-->By Which Method you want to Search a Element in Array....";
					cout<<"\n\t\t\t\t\t.______________________________________________.";
					cout<<"\n\t\t\t\t\t|S.NO|               Methods........           |";
					cout<<"\n\t\t\t\t\t|____|_________________________________________|";
					cout<<"\n\t\t\t\t\t|1.  |\t\t  By Linear Search.            |";
					cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
					cout<<"\n\t\t\t\t\t|2.  |\t\t  By Binary Search.            |";
					cout<<"\n\t\t\t\t\t|----|-----------------------------------------|";
					cout<<"\n\t\t\t\t\t|____|_________________________________________|";
					cout<<"\nEnter your Choice from Above Table[1-2] :";
					cin>>searchchoice;
					switch(searchchoice)
					{
						case 1:
							system("cls");
							searchcount=1;
							cout<<"Enter the value  you want to Search a Element in Array :";
							cin>>searchvalue;
							objArray.Searching(searchvalue,searchcount);
							searchcount=0;
							break;
						case 2:
							system("cls");
							cout<<"\n\n\t\t-->Binary Search Operations did not work on Unsorted Array....\n\t\t-->So This Operation first Sort your Array in Ascending Order....\n\t\t-->And then,search the element from sorted Array...\n\t\t-->Binary Search Operations can find element only one time Array....\n\t\t-->If element is occurs many times in Array,....\n\t\t-->Binary Search Operations find only first location of element in Array....\n\t\t-->If you want to know all locations of element,....\n\t\t-->Then,you should be use Linear Search Operations on Array....\n\t\t-->Press Enter to Continue";
							getch();
							system("cls");
							cout<<"Enter the Value you want to Search a Element in Array :";
							cin>>searchvalue;
							objArray.Searching(searchvalue,searchcount);
							break;
						default:
							cout<<"\n\n\tWrong Choice.... \n\tPress any key to Try Again!!!!";
							getch();
							goto top2;
					}
				cout<<"\n\nPress any key to Continue......";
				getch();
				break;
			case 6:
				int sortingchoice,sortingcount;
				top3:
					sortingcount=0;
					system("cls");
					cout<<"\n\n\t\t-->There are two Methods to Sort a Element in Array....\n\t\t-->By Which Method you want to Sort a Element in Array....";
					cout<<"\n\t\t\t\t\t._________________________________________________.";
					cout<<"\n\t\t\t\t\t|S.NO|               Methods........              |";
					cout<<"\n\t\t\t\t\t|____|____________________________________________|";
					cout<<"\n\t\t\t\t\t|1.  |\t\t  By Ascending Order.             |";
					cout<<"\n\t\t\t\t\t|----|--------------------------------------------|";
					cout<<"\n\t\t\t\t\t|2.  |\t\t  By Descending Order.            |";
					cout<<"\n\t\t\t\t\t|----|--------------------------------------------|";
					cout<<"\n\t\t\t\t\t|____|____________________________________________|";
					cout<<"\nEnter your Choice from Above Table[1-2] :";
					cin>>sortingchoice;
					switch(sortingchoice)
					{
						case 1:
							system("cls");
							sortingcount=1;
							objArray.OutputArray();
							objArray.Sorting(sortingcount);
							sortingcount=0;
							break;
						case 2:
							system("cls");
							objArray.OutputArray();
							objArray.Sorting(sortingcount);
							break;
						default:
							cout<<"\n\n\tWrong Choice.... \n\tPress any key to Try Again!!!!";
							getch();
							goto top3;
					}
				cout<<"\n\nPress any key to Continue......";
				getch();
				break;
			case 7:
				system("cls");
				objArray.CompareArray();
				cout<<"\n\nPress any key to Continue....";
				getch();
				break;
			case 8:
				system("cls");
				objArray.MergeArray();
				cout<<"\n\nPress any key to Continue....";
				getch();
				break;
			case 9:
				system("cls");
				objArray.OutputArray();
				objArray.MaxAndMinElement();
				cout<<"\n\nPress any key to Continue....";
				getch();
				break;
			case 10:
				system("cls");
				objArray.OutputArray();
				objArray.ReverseArray();
				cout<<"\n\nPress any key to Continue....";
				getch();
				break;
			case 11:
				system("cls");
				objArray.GetArraysize();
				cout<<"\n\nPress any key to Continue.....";
				getch();
				break;
			case 12:
				cout<<"\nPress any Key to End the Program....";
				getch();
				break;
			default:
				cout<<"\n\nError!!! You Entered the Wrong Choice...";
				cout<<"\nTry Again!!!!! Press Enter to Continue.... ";
				getch();
				break;
		}
	}while(choice!=12);
	return 0;
}

//End of Program.....;
