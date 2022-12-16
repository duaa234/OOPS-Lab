//1.power function
#include<iostream>
#include<math.h>
using namespace std;
double power (double,int);
int main()
{
	double n, x;
	int p;
	cout<<"Enter the base number:";
	cin>> n;
	cout<<"Enter the power : ";
	cin>> p;
	x = power( n,p);
	cout<<"The answer is :"<< x;
	
}
double power (double y, int z)
{
	double w;
	w= pow(y,z);
	return w;
}
//2.time function
#include <iostream>
using namespace std;

float hms_to_secs(int , int, int);

int main(){
    char ch, temp;
    int hrs, mins, secs;
    do{
        cout << "Enter time (HH:MM:SS): ";
        cin >> hrs >> temp >> mins >> temp >> secs;
        float totalSec = hms_to_secs(hrs, mins, secs);
        cout << "Total seconds: " << totalSec << endl;

        cout << "Want to try again(y/n): ";
        cin >> ch;
    }while(ch == 'y');
    cout << "\nExit" <<endl;
    return 0;
}

float hms_to_secs(int hrs, int mins, int secs){
    float totalSecs = 3600 * hrs + 60 * mins + secs;
    return totalSecs;
}

//3.Adding time using structures

#include <iostream>
using namespace std;

struct timee {
	int hours, minutes, seconds;
};

long time_to_secs(timee);
timee secs_to_time(long);

int main(){
    timee time1, time2;
    char temp;
    long secTime;
    
    cout << "Enter hours: ";
    cin >> time1.hours;
    
    cout << "Enter minutes: ";
    cin >> time1.minutes; 
    
    cout << "Enter seconds: ";
    cin >> time1.seconds;

    cout << "Equivalent in seconds: " << time_to_secs(time1) << endl;

    cout << endl << "Enter time in seconds: ";
    cin >> secTime;

    time2 = secs_to_time(secTime);

    cout << "Equivalent in HH:MM:SS format: " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;

    return 0;
}

long time_to_secs(timee time1) {
	return time1.hours*3600 + time1.minutes*60 + time1.seconds;
}

timee secs_to_time(long tt) {
	int hh, mm, ss;
	timee time2;
	mm = tt/60;
	ss = tt%60;
	hh = mm/60;
	mm = mm%60;

	time2.hours = hh;
	time2.minutes = mm;
	time2.seconds = ss;

	return time2;
}
//4. distance
#include<iostream>
using namespace std;
float Distance (float,float);
int main()
{
	float x,y,z;
	cout<<"Enter the 1st distance :";
	cin >> x;
	cout<< "Enter the 2nd distance :";
	cin >> y;
	z = Distance (x,y);
	cout<< "The greater of the two entered distances is : "<< z;
}
float Distance (float a, float b)
{
	float c;
	if(a>b)
	c= a;
	else
	c=b;
	return c;
}
//5.distance feet, inches
#include <iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};

Distance larger(Distance, Distance);
void display(Distance);

int main(){
    Distance d1, d2, d3;
    cout << "\nEnter feet: ";
    cin >> d1.feet;
    cout << "Enter inches: ";
    cin >> d1.inches;
    cout << "\nEnter feet: ";
    cin >> d2.feet;
    cout << "Enter inches: ";
    cin >> d2.inches;

    d3 = larger(d1, d2);

    cout << endl << "Largest is ";
    display(d3);
    cout << endl;
    return 0;
}

Distance larger(Distance d1, Distance d2){
    if(d1.feet > d2.feet)
        return d1;
    if(d1.feet < d2.feet)
        return d2;
    if(d1.inches > d2.inches) 
        return d1;
    else
        return d2;
}
void display( Distance d ){
    cout << d.feet << "\'-" << d.inches << "\"";
}


