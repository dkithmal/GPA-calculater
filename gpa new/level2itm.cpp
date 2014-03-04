#include "level2itm.h"
#include <QMessageBox>

level2itm::level2itm(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.label_5->setEnabled(false);
	ui.label_6->setEnabled(false);
}

level2itm::~level2itm()
{

}
void level2itm::semester3gpa()
{
	QString subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8,subject9,subject10;
	double gpamark=0,mark=0,finalgpa=0,totalcredit=23.5;
	QString subject;

	subject1=ui.comboBox_40->currentText();
	subject2=ui.comboBox_41->currentText();
	subject3=ui.comboBox_42->currentText();
	subject4=ui.comboBox_43->currentText();
	subject5=ui.comboBox_44->currentText();
	subject6=ui.comboBox_45->currentText();
	subject7=ui.comboBox_46->currentText();
	subject8=ui.comboBox_47->currentText();
	subject9=ui.comboBox_48->currentText();
	subject10=ui.comboBox_55->currentText();

	for (int x=1;x<=10;x++)
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
				totalcredit=totalcredit-2.5;
			else
				gpamark=gpamark+(2.5*mark);
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
				totalcredit=totalcredit-1;
			else
				gpamark=gpamark+(1*mark);
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
		if(x==10)
		{
			if(mark==-1)
				totalcredit=totalcredit-2;
			else
				gpamark=gpamark+(2*mark);
		}




	}
	finalgpa=gpamark/totalcredit;
	QString s = QString::number(finalgpa);
	//ui.lineEdit_3->setText(s);
	//QString aaa="<b>";
	//aaa.append(s);
	//aaa.append("<b/>");

	ui.label_23->setText(s);

}
void level2itm::semester4gpa()
{
	QString subject1,subject2,subject3,subject4,subject5,subject6,subject7;
	double gpamark=0,mark=0,finalgpa=0,totalcredit=17.5;
	QString subject;

	subject1=ui.comboBox_49->currentText();
	subject2=ui.comboBox_50->currentText();
	subject3=ui.comboBox_51->currentText();
	subject4=ui.comboBox_52->currentText();
	subject5=ui.comboBox_53->currentText();
	subject6=ui.comboBox_54->currentText();
	subject7=ui.comboBox_56->currentText();


	for (int x=1;x<=10;x++)
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





	}
	finalgpa=gpamark/totalcredit;
	QString s = QString::number(finalgpa);
	//ui.lineEdit_3->setText(s);
	//QString aaa="<b>";
	//aaa.append(s);
	//aaa.append("<b/>");

	ui.label_22->setText(s);

}
void level2itm::currentgpa()
{
	double gpa,y1,s3,s4;
	QString year1gpa,semester3,semester4;
	year1gpa=ui.lineEdit->text();
	semester3=ui.label_23->text();	
	semester4=ui.label_22->text();
	y1=year1gpa.toDouble();
	s3=semester3.toDouble();
	s4=semester4.toDouble();

	if (y1==0)
	{
		QMessageBox::information(this,"Error","Enter the first year gpa");

	}

	if (semester3!=0&&semester4!=0&&y1!=0)
	{
		gpa=((y1*31)+(s3*23.5)+(s4*17.5))/72;
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
		gpa=((y1*31)+(s3*23.5))/54.5;
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
