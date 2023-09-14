#include<iostream>

using namespace std;

main()
{
	int gd=DETECT,gm;
	int x1,y1,x2,y2,steps,xinc,yinc,dx,dy,i;
	cout<<"Enter value for x1 and y1 : "<<endl;
	cin>>x1>>y1;
	cout<<"Enter value for x2 and y2 : "<<endl;
	cin>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy))
		steps=abs(dx);
	else
		steps=abs(dy);
	
	xinc=dx/steps;
	yinc=dy/steps;
	
	for(i=1;i<=steps;i++)
	{
		putpixel(x1,y1,RED);
		x1=x1+xinc;
		y1=y1+yinc;
	}
	delay(50);
	getch();
	closegraph();
}
