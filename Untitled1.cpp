#include <iostream> /* soal3 */
using namespace std;

int main()
{
	
int x , a , i=0 , n , flag = 0 ;	

cout<<" please enter number of ararys number : " ;
cin >> x;
x=x-1;
a=x;

int arr[x];

cout<<" enter aray :";


	cin >> n;
	arr[i]=n;
	i=i+1;
	
do{
	cin >> n;
	arr[i]=n;
	
	if(arr[i-1]>arr[i])
	{
		flag=1;
	}
	i=i+1;
	
}while(i<=a);

if(flag == 1)
{
	cout<<" no not sort !!!";
}
 else{
 	
 	cout<<" yes is sort :)";
     }

}

