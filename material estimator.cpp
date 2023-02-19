#include<iostream>
using namespace std;
buildingMaterialsEstimator()
{
	//cement=1100,sand=110,steel=220,paint=200,brick=14,tile=40;
	double area,cement,sand,steel,paint,brick,tile,total;
	double es_cement,es_sand,es_steel,es_paint,es_brick,es_tile,es_total;
	cout<<"Enter covered area in square feet: ";
	cin>>area;
	
	
	//estimating things 
	es_cement=area*(400.0/1000);
	es_sand=area*(81.6/1000);
	es_steel=area*(4000.0/1000);
	es_paint=area*(180.0/1000);
	es_brick=area*(8000.0/1000);
	es_tile=area*(325.0/1000);
	
	cout<<"Estimated cement in bags = "<<es_cement<<" bags/ "<<area<<" Sq ft"<<endl;
	cout<<"Estimated sand in tons ="<<es_sand<<" tons/ "<<area<<" Sq ft"<<endl;
	cout<<"Estimated steel in kg ="<<es_steel<<" kg/ "<<area<<" Sq ft"<<endl;
	cout<<"Estimated paint in litres ="<<es_paint<<" litres/ "<<area<<" Sq ft"<<endl;
	cout<<"Estimated bricks in peaces ="<<es_brick<<" peaces/ "<<area<<" Sq ft"<<endl;
	cout<<"Estimated tiles in peaces ="<<es_tile<<" peaces/ "<<area<<" Sq ft"<<endl;
	
	//Taking prices of things
	cout<<"\n#########################";
	cout<<"\nEnter price of cement/bag: ";
	cin>>cement;
	
	cout<<"Enter price of sand/ton: ";
	cin>>sand;
	
	cout<<"Enter price of steel/kg: ";
	cin>>steel;
	
	cout<<"Enter price of paint/litre: ";
	cin>>paint;
	
	cout<<"Enter price of brick/peace: ";
	cin>>brick;
	
	cout<<"Enter price of tile/peace: ";
	cin>>tile;	
	
	total=(cement*es_cement)+(sand*es_sand)+(steel*es_steel)+(paint*es_paint)+(brick*es_brick)+(es_tile*tile);
	cout<<"Total Estimated amount= "<<total;
}

int main()
{
	buildingMaterialsEstimator();
}
