#include <iostream>
using namespace std;

int main(){
	double LuasRumah = 42;
	double LantaiPkt = 193*1215;
	double Luas1Box = LantaiPkt*8/1000000;
	double jumlahBoxP,BiayaP,BiayaPG,TotalB, (
	
	cout << "Luas Rumah			: "<<LuasRumah<<" m2"<<endl;
	cout <<"Luas 1 Box			: "<<Luas2Box<<" m2"<<endl;
	
	JumlahBoxP = LuasRumah/Luas1Box;
	cout<<"Jumlah Box Parket 	: "<<JumlahBoxP<<endl;
	
	BiayaP = JumlahBoxP*500;
	cout <<"Biaya parket (RP)	: "<<BiayaP<<endl;
	
	BiayaPG = LuasRumah*20;
	cout <<"Biaya pasang (RP)	: "<<BiayaPG<<endl;
	
	TotalB = BiayaP+BiayaPG;
	cout <<"Total Biaya (Rp) 	: "TotalB<<endl;
}
