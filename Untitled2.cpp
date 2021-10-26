#include <iostream>   /* soal 4 */

using namespace std;

int main()
{
	int x=1 , i;
	
	cout<<" please enter N " ;
	cin>>i;
	
	while(i>0 )
	{ 
	
	cout<<"*";
	
	i=i-1;
		
	    if(i!=0)
    	{
	
	     while(x==1)
	     {
	  	 cout<<"#";
	  	 x=0;
	  	 i=i-1;
	     }// end of while 2
		}//end of if
		
   	x=1;        

   
  }//end of while 1
	return(0);
}
