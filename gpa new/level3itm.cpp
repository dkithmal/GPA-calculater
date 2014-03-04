#include "level3itm.h"
#include <QMessageBox>

double level3itm::TScreditITM = 0;
double level3itm::finalgpayear3ITM = 0;

level3itm::level3itm(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

level3itm::~level3itm()
{

}

void level3itm::semester5gpa()
{
	QString subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8,subject9,subject10,subject11,subject12,subject13,subject14,subject15,subject16;
	double gpamark=0,mark=0,finalgpa=0,totalcredit=41;
	QString subject;

	subject1=ui.comboBox_31->currentText();
	subject2=ui.comboBox_32->currentText();
	subject3=ui.comboBox_33->currentText();
	subject4=ui.comboBox_34->currentText();
	subject5=ui.comboBox_35->currentText();
	subject6=ui.comboBox_36->currentText();
	subject7=ui.comboBox_41->currentText();
	subject8=ui.comboBox_42->currentText();
	subject9=ui.comboBox_43->currentText();
	subject10=ui.comboBox_44->currentText();
	subject11=ui.comboBox_45->currentText();
	subject12=ui.comboBox_46->currentText();
	subject13=ui.comboBox_47->currentText();
	subject14=ui.comboBox_48->currentText();
	subject15=ui.comboBox_49->currentText();
	subject16=ui.comboBox_50->currentText();

	for (int x=1;x<=16;x++)
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
		else if(subject=="Not release")
			mark=-1;




		if(x==1)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==2)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==3)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==4)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==5)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==6)
		{
			if(mark==-1)
				totalcredit=totalcredit-3;
			else
				gpamark=gpamark+(3*mark);
		}
		if(x==7)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==8)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==9)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==10)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==11)
		{
			if(mark==-1)
				totalcredit=totalcredit-3;
			else
				gpamark=gpamark+(3*mark);
		}
		if(x==12)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==13)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==14)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==15)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==16)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}





	}
	finalgpa=gpamark/totalcredit;
	selectcredit=totalcredit;
	QString s = QString::number(finalgpa);
	ui.label_22->setText(s);

}
void level3itm::currentgpa()
{
	double gpa,y2,s5;
	QString year2gpa,semester5;
	year2gpa=ui.lineEdit->text();
	semester5=ui.label_22->text();	
	y2=year2gpa.toDouble();
	s5=semester5.toDouble();


	if (y2==0)
	{
		QMessageBox::information(this,"Error","Enter the second year current gpa");

	}
	if (y2!=0 && semester5!=0)
	{
		gpa=((y2*72)+(s5*selectcredit))/(72+selectcredit);

		TScreditITM=72+selectcredit;
		finalgpayear3ITM=gpa;
		QString s = QString::number(gpa);
		ui.label_6->setText(s);
	} 
	else if(semester5==0)
	{
		QMessageBox::information(this,"Error","Plese calculate semester5 gpa");


	}
}