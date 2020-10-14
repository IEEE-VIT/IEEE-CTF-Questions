#include <iostream>
using namespace std;
int main()	
{   
    int i;
    int z;
    int secret[50];
    int a;
    int key;
    int flg=4;
    cout<< "Enter PIN: \n";
    z=5;
    cin>>key;
    // storing information
    for(i = 0; i < flg; i++)
    {	        
            a=key;
	    key=key+13;
	    secret[i]=a+key;
            z--;
            if(z==1)
            {            
		key=z;
                a=0;
            }
    }
    cout<< "Displaying Information: \n";
    // Displaying information
    if(key==a)
    {   
	cout<<"Your key is: "<<key;
        if(a==0)	
        secret[i]=20;
        cout<<"Sorry! Your Flag='IDMRC WOXHT MS'. ENCRYPTED?";
	cout<<"\nHAVE YOU PLAYED IEEE'S ENIGMA CRYPTIC HUNT?\nLET'S PLAY! ROTOR 1,2,3?\nWhat you see is what you are. \nI got A in all BUT It reflects B?";
    }
    else	
    {
        cout<<"\nCongrats! Your Password Is WROGN.";
        cout<<"\nASCIISUM=SECRET";
    }
    return 0;
}
