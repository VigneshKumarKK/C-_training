#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void matherror(int track)
{
	switch (track)
	{
	case 1:
		cout << "Sorry!! your data for the size should be greater than 0" << endl;
		break;
	case 2:
		cout << "Sorry!! your data for the size is invalid according to the laws" << endl;
		break;
	case 3:
		cout << "Sorry!! Triangle type error" << endl;
		break;

	default:
		cout << "Sorry!!matherror" << endl;
		break;
	}
	
}

void circle(double *r)
{
	if (*r > 0)
	{
		cout << "Area of the Circle with radius " << *r << " = " << 3.14 * (*r) * (*r) << endl;
		cout << "Perimeter of the Circle with radius " << *r << " = " << 3.14 * 2 * (*r) << endl;
	}
	else
		matherror(1);
	
}

void cylinder(double *r, double *h)
{
	if (*r > 0 && *h > 0)
	{
		cout << "Area of the Cylinder with radius " << *r << " and height " << *h << " = " << 2 * 3.14 * (*r) * (*h) << endl;
		cout << "Volume of the Cylinder with radius " << *r << " and height " << *h << " = " << 3.14 * (*r) * (*r) * (*h) << endl;
	}
	else
		matherror(1);
}

void square(double *s)
{
	if (*s > 0)
	{
		cout << "Area of the Square with Sides " << *s << " = " << (*s) * (*s) << endl;
		cout << "Perimeter of the Square with Sides " << *s << " = " << (*s) * 4 << endl;
	}
	else
		matherror(1);
}

void rectangle(double *l, double *b)
{
	if (*l<*b)
	{
		matherror(2);
	}
	else if (*l > 0 && *b > 0)
	{
		cout << "Area of the Rectangle with length " << *l << " and breadth " << *b << " = " << (*l) * (*b) << endl;
		cout << "Perimeter of the Rectangle with length " << *l << " and breadth " << *b << " = " << 2 * ((*l) + (*b)) << endl;
	}
	else
		matherror(1);
	
}

int istriangletype(char type,double a,double b,double c)
{
	if (type == 'S')
	{
		if (a != b && b != c && a != c)
			return 1;
		else
			return 0;
	}
	else if (type == 'E')
	{
		if (a == b && b == c)
			return 1;
		else
			return 0;
	}
	else if (type == 'I')
	{
		if (a == b || b == c || a==c)
			return 1;
		else
			return 0;
	}
	else if (type == 'R')
	{
		if ((a*a) + (b*b) == (c*c) || (c*c) + (b*b) == (a*a) || (c*c) + (a*a) == (b*b))
			return 1;
		else
			return 0;
	}
	else
	{
		matherror(2);
		return 0;
	}
}

void triangle(double *a, double *b, double *c)
{
	if (istriangletype('R',*a,*b,*c))
	{
		double d, h;
		if ((((*a)*(*a)) + ((*b)*(*b))) == ((*c)*(*c)))
		{
			d = *a;
			h = *b;
		}
		else if ((((*c)*(*c)) + ((*b)*(*b))) == ((*a)*(*a)))
		{
			d = *b;
			h = *c;

		}
		else if ((((*a)*(*a)) + ((*c)*(*c))) == ((*b)*(*b)))
		{
			d = *a;
			h = *c;
		}
		else
		{
			matherror(2);
			return;
		}
		cout << "Area of the Right angle triangle with side " << *a << " , " << *b << " , " << *c << " = " << 0.5 * d * h << endl;
		cout << "Perimeter of the Right angle triangle with side " << *a << " , " << *b << " , " << *c << " = " << (*a) + (*b) + (*c) << endl;
	}
	else if (istriangletype('E', *a, *b, *c))
	{
		cout << "Area of the Equilateral triangle with side " << *a <<  " = " << 0.433 * (*a) * (*a) << endl;
		cout << "Perimeter of the Equilateral triangle with side " << *a << " = " << 3 * (*a) << endl;
	}
	else if (istriangletype('I', *a, *b, *c))
	{
		double d, h;
		if (a == b)
		{
			d = *c;
			h = sqrt(((*a)*(*a)) - ((*c / 2)*(*c / 2)));
		}
		else if (c == b)
		{
			d = *a;
			h = sqrt(((*b)*(*b)) - ((*a / 2)*(*a / 2)));
		}
		else if (c == a)
		{
			d = *b;
			h = sqrt(((*a)*(*a)) - ((*b / 2)*(*b / 2)));
		}
		else
		{
			matherror(2);
			return ;
		}
		cout << "Area of the Isosceles triangle with side " << *a << " , " <<*b << " , " <<*c << " = " << 0.5 * (d) * (h) << endl;
		cout << "Perimeter of the Isosceles triangle with side " << *a << " , " << *b << " , " << *c << " = " <<  (*a)+(*b)+(*c) << endl;
	}
	else if (istriangletype('S', *a, *b, *c))
	{
		double s = ((*a) + (*b) + (*c)) / 2;
		double area = sqrt(s*(s - (*a))*(s - (*b))*(s - (*c)));
		cout << "Area of the Scalene triangle with side " << *a << " , " << *b << " , " << *c << " = " << area << endl;
		cout << "Perimeter of the Scalene triangle with side " << *a << " , " << *b << " , " << *c << " = " << (*a) + (*b) + (*c) << endl;
	}
	else
		matherror(3);
}


int main()
{
	double sizea, sizeb, sizec;
	int choice;
	while (1)
	{
		cout << "Enter your Choice from the below " <<endl;
		cout << "Press 1 for  SQUARE" << endl;
		cout << "Press 2 for  RETANGLE " << endl;
		cout << "Press 3 for  TRIANGLE " << endl;
		cout << "Press 4 for  CIRCLE" << endl;
		cout << "Press 5 for  CYLINDER" << endl;
		cout << "Press 0 for	EXIT " << endl;
		cin >> choice;
		system("CLS");
		if (choice == 0)
		{
			system("CLS");
			cout << "--------THE END-------" << endl;
			cout << "Thanks for Using for Application" << endl;
			break;
		}
		else if (choice == 1)
		{
			system("CLS");
			cout << "Enter any one sides of the square ";
			cin >> sizea;
			system("CLS");
			square(&sizea);
		}
		else if (choice == 2)
		{
			system("CLS");
			cout << "Enter length of the Rectangle ";
			cin >> sizea;
			cout << "Enter Breadth of the Rectangle ";
			cin >> sizeb;
			system("CLS");
			rectangle(&sizea, &sizeb);
		}
		else if (choice == 3)
		{
			system("CLS");
			cout << "Enter any side 1 of the triangle ";
			cin >> sizea;
			cout << "Enter any side 2 of the triangle ";
			cin >> sizeb;
			cout << "Enter any side 3 of the triangle ";
			cin >> sizec;
			system("CLS");
			triangle(&sizea,&sizeb,&sizec);
		}
		else if (choice == 4)
		{
			system("CLS");
			cout << "Enter the radius of circle ";
			cin >> sizea;
			system("CLS");
			circle(&sizea);
		}
		else if (choice == 5)
		{
			system("CLS");
			cout << "Enter the radius of Cylinder ";
			cin >> sizea;
			cout << "Enter the height of Cylinder ";
			cin >> sizeb;
			system("CLS");
			cylinder(&sizea,&sizeb);
		}
		cout << endl;
		system("PAUSE");
		system("CLS");
	}
	return 0;
}