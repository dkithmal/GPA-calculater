#include "level4itm.h"
#include "level3itm.h"
#include <QMessageBox>

level4itm::level4itm(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

level4itm::~level4itm()
{

}



void level4itm::finalyeargpa()
{
	{
		QString subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8,subject9,subject10,subject11,subject12,subject13,subject14,subject15,
			subject16,subject17,subject18,subject19,subject20,subject21,subject22,subject23,subject24,subject25,subject26,subject27,subject28,subject29,
			subject30,subject31,subject32,subject33,subject34,subject35;

		double gpamark=0,mark=0,finalgpa=0;
		QString subject;

	   totalcredit=92.5;

		subject1=ui.comboBox_285->currentText();
		subject2=ui.comboBox_286->currentText();
		subject3=ui.comboBox_287->currentText();
		subject4=ui.comboBox_288->currentText();
		subject5=ui.comboBox_289->currentText();
		subject6=ui.comboBox_290->currentText();
		subject7=ui.comboBox_291->currentText();
		subject8=ui.comboBox_292->currentText();
		subject9=ui.comboBox_293->currentText();
		subject10=ui.comboBox_294->currentText();
		subject11=ui.comboBox_295->currentText();
		subject12=ui.comboBox_296->currentText();
		subject13=ui.comboBox_297->currentText();
		subject14=ui.comboBox_298->currentText();
		subject15=ui.comboBox_299->currentText();
		subject16=ui.comboBox_300->currentText();
		subject17=ui.comboBox_301->currentText();
		subject18=ui.comboBox_302->currentText();
		subject19=ui.comboBox_303->currentText();
		subject20=ui.comboBox_304->currentText();
		subject21=ui.comboBox_271->currentText();
		subject22=ui.comboBox_272->currentText();
		subject23=ui.comboBox_273->currentText();
		subject24=ui.comboBox_274->currentText();
		subject25=ui.comboBox_275->currentText();
		subject26=ui.comboBox_276->currentText();
		subject27=ui.comboBox_277->currentText();
		subject28=ui.comboBox_278->currentText();
		subject29=ui.comboBox_279->currentText();
		subject30=ui.comboBox_280->currentText();
		subject31=ui.comboBox_281->currentText();
		subject32=ui.comboBox_282->currentText();
		subject33=ui.comboBox_283->currentText();
		subject34=ui.comboBox_284->currentText();
		





		for (int x=1;x<=34;x++)
		{
			if(x==1)
				subject=subject1;
			if(x==2)
				subject=subject2;
			if(x==3)
				subject=subject3;
			if(x==4)
				subject=subject4;
			if(x==5)
				subject=subject5;
			if(x==6)
				subject=subject6;
			if(x==7)
				subject=subject7;
			if(x==8)
				subject=subject8;
			if(x==9)
				subject=subject9;
			if(x==10)
				subject=subject10;
			if(x==11)
				subject=subject11;
			if(x==12)
				subject=subject12;
			if(x==13)
				subject=subject13;
			if(x==14)
				subject=subject14;
			if(x==15)
				subject=subject15;
			if(x==16)
				subject=subject16;
			if(x==17)
				subject=subject17;
			if(x==18)
				subject=subject18;
			if(x==19)
				subject=subject19;
			if(x==20)
				subject=subject20;
			if(x==21)
				subject=subject21;
			if(x==22)
				subject=subject22;
			if(x==23)
				subject=subject23;
			if(x==24)
				subject=subject24;
			if(x==25)
				subject=subject25;
			if(x==26)
				subject=subject26;
			if(x==27)
				subject=subject27;
			if(x==28)
				subject=subject28;
			if(x==29)
				subject=subject29;
			if(x==30)
				subject=subject30;
			if(x==31)
				subject=subject31;
			if(x==32)
				subject=subject32;
			if(x==33)
				subject=subject33;
			if(x==34)
				subject=subject34;
			if(x==35)
				subject=subject35;



			if(subject=="A+")
				mark=4.2;
			else if(subject=="A")
				mark=4.0;
			else if(subject=="A-")
				mark=3.7;
			else if(subject=="B+")
				mark=3.3;
			else if(subject=="B")
				mark=3.0;
			else if(subject=="B-")
				mark=2.7;
			else if(subject=="C+")
				mark=2.3;
			else if(subject=="C")
				mark=2.0;
			else if(subject=="C-")
				mark=1.5;
			else if(subject=="D")
				mark=1.0;
			else if(subject=="I"||subject=="F")
				mark=0;
			else if(subject=="Not release")
				mark=-1;
			else if(subject=="Not select")
				mark=-1;






			if(x==2)
			{
				if(mark==-1)
					totalcredit=totalcredit-10;
				else
					gpamark=gpamark+(10*mark);
			}
			else
			{
				if(mark==-1)
					totalcredit=totalcredit-2.5;
				else
					gpamark=gpamark+(2.5*mark);

			}





		}
		finalgpa=gpamark/totalcredit;
		
		QString s = QString::number(finalgpa);
		ui.label_306->setText(s);





		}


}


void level4itm::currentgpa()
{
	double gpa,s7;
	double aaa=level3itm::TScreditITM;
	double gpayear3=level3itm::finalgpayear3ITM;
	QString semester7;

	semester7=ui.label_306->text();	
	s7=semester7.toDouble();



	if (gpayear3==0)
	{
		QMessageBox::information(this,"Error","Calculate after 3rd year current gpa");

	}
	else if(s7==0)
	{
		QMessageBox::information(this,"Error","Calculate 7th and 8th semester gpa");

	}
	else 
	{
		gpa=((gpayear3*aaa)+(s7*totalcredit))/(aaa+totalcredit);


		QString s = QString::number(gpa);
		ui.label_289->setText(s);

	}
}
