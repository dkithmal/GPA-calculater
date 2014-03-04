#include "level1itm.h"
#include <QMessageBox>

level1itm::level1itm(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

level1itm::~level1itm()
{

}

void level1itm::semester1gpa()
{
	QString subject1,subject2,subject3,subject4,subject5;
	double gpamark=0,mark=0,finalgpa=0,totalcredit=13.5;
	QString subject;

	subject1=ui.comboBox_37->currentText();
	subject2=ui.comboBox_38->currentText();
	subject3=ui.comboBox_39->currentText();
	subject4=ui.comboBox_40->currentText();
	subject5=ui.comboBox_41->currentText();


	for (int x=1;x<=5;x++)
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
				totalcredit=totalcredit-4;
			else
				gpamark=gpamark+(4*mark);
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

	ui.label_68->setText(s);

}


void level1itm::semester2gpa()
{
	QString subject1,subject2,subject3,subject4,subject5,subject6,subject7;
	double gpamark=0,mark=0,finalgpa=0,totalcredit=17.5;
	QString subject;

	subject1=ui.comboBox_43->currentText();
	subject2=ui.comboBox_44->currentText();
	subject3=ui.comboBox_45->currentText();
	subject4=ui.comboBox_46->currentText();
	subject5=ui.comboBox_47->currentText();
	subject6=ui.comboBox_48->currentText();
	subject7=ui.comboBox_49->currentText();


	for (int x=1;x<=7;x++)
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
		else if(subject=="Not relese")
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
				totalcredit=totalcredit-4;
			else
				gpamark=gpamark+(4*mark);
		}
		if(x==4)
		{
			if(mark==-1)
				totalcredit=totalcredit-1;
			else
				gpamark=gpamark+(1*mark);
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

	ui.label_66->setText(s);


}
void level1itm::year1gpa()
{
	double gpa,s1,s2;
	QString semester1,semester2;
	semester1=ui.label_68->text();
	semester2=ui.label_66->text();	
	s1=semester1.toDouble();
	s2=semester2.toDouble();

	if(s1 != 0 && s2 != 0)
	{
		gpa=((s1*13.5)+(s2*17.5))/31;
		QString s = QString::number(gpa);
		ui.label_64->setText(s);

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