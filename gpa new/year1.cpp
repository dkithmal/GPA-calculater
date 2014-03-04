#include "year1.h"
#include <QMessageBox>

year1::year1(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

year1::~year1()
{

}
void year1::semester1gpa()
{
	QString subject1,subject2,subject3,subject4,subject5,subject6;
	double gpamark=0,mark=0,finalgpa=0,totalcredit=18;
	QString subject;

	subject1=ui.comboBox->currentText();
	subject2=ui.comboBox_2->currentText();
	subject3=ui.comboBox_3->currentText();
	subject4=ui.comboBox_4->currentText();
	subject5=ui.comboBox_5->currentText();
	subject6=ui.comboBox_6->currentText();

	for (int x=1;x<=6;x++)
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




		if(x==1)
		{
			if(mark==-1)
				totalcredit=totalcredit-4;
			else
				gpamark=gpamark+(4*mark);
		}
		if(x==2)
		{
			if(mark==-1)
				totalcredit=totalcredit-4;
			else
				gpamark=gpamark+(4*mark);
		}
		if(x==3)
		{
			if(mark==-1)
				totalcredit=totalcredit-3;
			else
				gpamark=gpamark+(3*mark);
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
				totalcredit=totalcredit-2;
			else
				gpamark=gpamark+(2*mark);
		}
		if(x==6)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}




	}
	finalgpa=gpamark/totalcredit;
	QString s = QString::number(finalgpa);
	//ui.lineEdit_3->setText(s);
	//QString aaa="<b>";
	//aaa.append(s);
	//aaa.append("<b/>");

	ui.label_18->setText(s);



}
void year1::semester2gpa()
{
	QString subject1,subject2,subject3,subject4,subject5,subject6;
	double gpamark=0,mark=0,finalgpa=0,totalcredit=15;
	QString subject;
	subject1=ui.comboBox_7->currentText();
	subject2=ui.comboBox_8->currentText();
	subject3=ui.comboBox_9->currentText();
	subject4=ui.comboBox_10->currentText();
	subject5=ui.comboBox_11->currentText();
	subject6=ui.comboBox_12->currentText();

	for (int x=1;x<=6;x++)
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




		if(mark==-1)
			totalcredit=totalcredit-2.5;
		else
			gpamark=gpamark+(2.5*mark);


	}
	finalgpa=gpamark/totalcredit;
	QString s = QString::number(finalgpa);
	//ui.lineEdit_4->setText(s);
	ui.label_19->setText(s);




}
void year1::year1gpa()
{


	double gpa,s1,s2;
	QString semester1,semester2;
	semester1=ui.label_18->text();
	semester2=ui.label_19->text();	
	s1=semester1.toDouble();
	s2=semester2.toDouble();

	if(s1 != 0 && s2 != 0)
	{
		gpa=((s1*18)+(s2*15))/33;
		QString s = QString::number(gpa);
		//ui.lineEdit_5->setText(s);
		ui.label_20->setText(s);

	}
	else if(s1 == 0)
	{

		QMessageBox::information(this,"Error","Plsese calculate semester1 gpa");
	}
	else if (s2 == 0)
	{
		QMessageBox::information(this,"Error","Plsese calculate semester2 gpa");

	}



	
}
