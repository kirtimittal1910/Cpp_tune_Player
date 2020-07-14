#include<iostream>
#include<windows.h>
#include<mmsystem.h>
using namespace std;
int main()
{
int i;
while(true){
	cout<<"Enter the Choice:"<<endl<<"1 = Tunning_1"<<endl<<"2 = Tunning_2"<<endl<<"3 = Tunning_3"<<endl<<"Press another key to exit"<<endl;
    cin>>i;
    if(i==1){
    	cout<<"Tunning_1"<<endl;
    	PlaySound(TEXT("Trendy_Audio.wav"),NULL,SND_SYNC);
    	cout<<endl<<"//////////////"<<endl;
	}
	else if(i==2)
	{
		cout<<"Tunning_2"<<endl;
    	PlaySound(TEXT("Dramatic_Cinematic.wav"),NULL,SND_SYNC);
    	cout<<endl<<"//////////////"<<endl;
	}
	else if(i==3)
	{
	    cout<<"Tunning_3"<<endl;
  	    PlaySound(TEXT("Bang_Stinger.wav"),NULL,SND_SYNC);
    	cout<<endl<<"//////////////"<<endl;
	}
	else
	{
		break;
	}
}
return 0;
}



