#include "year2.h"
#include <QMessageBox>

year2::year2(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.label_5->setEnabled(false);
	ui.label_6->setEnabled(false);
}

year2::~year2()
{

}
void year2::semester3gpa()
{
	QString subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8,subject9;
	double gpamark=0,mark=0,finalgpa=0,totalcredit=24.5;
	QString subject;

	subject1=ui.comboBox_31->currentText();
	subject2=ui.comboBox_32->currentText();
	subject3=ui.comboBox_33->currentText();
	subject4=ui.comboBox_34->currentText();
	subject5=ui.comboBox_35->currentText();
	subject6=ui.comboBox_36->currentText();
	subject7=ui.comboBox_37->currentText();
	subject8=ui.comboBox_38->currentText();
	subject9=ui.comboBox_39->currentText();

	for (int x=1;x<=9;x++)
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
				totalcredit=totalcredit-3;
			else
				gpamark=gpamark+(3*mark);
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
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}
		if(x==6)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
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
				totalcredit=totalcredit-2;
			else
				gpamark=gpamark+(2*mark);
		}
		if(x==9)
		{
			if(mark==-1)
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
		}




	}
	finalgpa=gpamark/totalcredit;
	QString s = QString::number(finalgpa);
	//ui.lineEdit_9->setText(s);
	ui.label_20->setText(s);



}
void year2::semester4gpa()
{
	QString subject1,subject2,subject3,subject4,subject5,subject6;
	double gpamark=0,mark=0,finalgpa=0,totalcredit=15;
	QString subject;
	subject1=ui.comboBox_25->currentText();
	subject2=ui.comboBox_26->currentText();
	subject3=ui.comboBox_27->currentText();
	subject4=ui.comboBox_28->currentText();
	subject5=ui.comboBox_29->currentText();
	subject6=ui.comboBox_30->currentText();

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
	//ui.lineEdit_11->setText(s);
	ui.label_21->setText(s);

}

void year2::currentgpa()
{
	double gpa,y1,s3,s4;
	QString year1gpa,semester3,semester4;
	year1gpa=ui.lineEdit->text();
	semester3=ui.label_20->text();	
	semester4=ui.label_21->text();
	y1=year1gpa.toDouble();
	s3=semester3.toDouble();
	s4=semester4.toDouble();

	if (y1==0)
	{
		QMessageBox::information(this,"Error","Enter first year gpa");

	}

	if (semester3!=0&&semester4!=0&&y1!=0)
	{
		gpa=((y1*33)+(s3*24.5)+(s4*15))/72.5;
		ui.label_6->setEnabled(true);
		ui.label_5->setEnabled(false);
		ui.label_6->show();
		ui.label_5->hide();

		QString s = QString::number(gpa);
		ui.label_8->setText(s);
		ui.label_7->setText("");

	}
	else if (semester3!=0&&semester4==0&&y1!=0)
	{
		gpa=((y1*33)+(s3*24.5))/57.5;
		ui.label_5->setEnabled(true);
		ui.label_6->setEnabled(false);
		ui.label_5->show();
		ui.label_6->hide();

		QString s = QString::number(gpa);
		ui.label_7->setText(s);
		ui.label_8->setText("");
	}
	else if (semester3==0&&semester4!=0)
	{
		QMessageBox::information(this,"Error","Plsese calculate semester3 gpa first");


	}
	else if (semester3==0&&semester4==0)
	{
		QMessageBox::information(this,"Error","Plsese calculate semester3 gpa or \n both semester3 and semsester4 gpa");



		
	}







}


