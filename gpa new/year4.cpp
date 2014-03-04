#include "year4.h"
#include "year3.h"
#include <QMessageBox>

year4::year4(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//ui.scrollArea->setWidget(varti)
}

year4::~year4()
{

}

void year4::finalyeargpa()
{
	{
		QString subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8,subject9,subject10,subject11,subject12,subject13,subject14,subject15,
			subject16,subject17,subject18,subject19,subject20,subject21,subject22,subject23,subject24,subject25,subject26,subject27,subject28,subject29,
			subject30,subject31,subject32,subject33,subject34,subject35,subject36,subject37,subject38,subject39,subject40,subject41,subject42,subject43;

		double gpamark=0,mark=0,finalgpa=0;
		QString subject;

		totalcredit=115;

		subject1=ui.comboBox_31->currentText();
		subject2=ui.comboBox_32->currentText();
		subject3=ui.comboBox_41->currentText();
		subject4=ui.comboBox_42->currentText();
		subject5=ui.comboBox_43->currentText();
		subject6=ui.comboBox_44->currentText();
		subject7=ui.comboBox_45->currentText();
		subject8=ui.comboBox_46->currentText();
		subject9=ui.comboBox_47->currentText();
		subject10=ui.comboBox_48->currentText();
		subject11=ui.comboBox_49->currentText();
		subject12=ui.comboBox_50->currentText();
		subject13=ui.comboBox_51->currentText();
		subject14=ui.comboBox_52->currentText();
		subject15=ui.comboBox_53->currentText();
		subject16=ui.comboBox_54->currentText();
		subject17=ui.comboBox_55->currentText();
		subject18=ui.comboBox_56->currentText();
		subject19=ui.comboBox_57->currentText();
		subject20=ui.comboBox_58->currentText();
		subject21=ui.comboBox_59->currentText();
		subject22=ui.comboBox_60->currentText();
		subject23=ui.comboBox_61->currentText();
		subject24=ui.comboBox_62->currentText();
		subject25=ui.comboBox_63->currentText();
		subject26=ui.comboBox_64->currentText();
		subject27=ui.comboBox_65->currentText();
		subject28=ui.comboBox_66->currentText();
		subject29=ui.comboBox_67->currentText();
		subject30=ui.comboBox_68->currentText();
		subject31=ui.comboBox_69->currentText();
		subject32=ui.comboBox_70->currentText();
		subject33=ui.comboBox_71->currentText();
		subject34=ui.comboBox_72->currentText();
		subject35=ui.comboBox_73->currentText();
		subject36=ui.comboBox_74->currentText();
		subject37=ui.comboBox_75->currentText();
		subject38=ui.comboBox_76->currentText();
		subject39=ui.comboBox_77->currentText();
		subject40=ui.comboBox_78->currentText();
		subject41=ui.comboBox_79->currentText();
		subject42=ui.comboBox_80->currentText();
		subject43=ui.comboBox_81->currentText();




		for (int x=1;x<=43;x++)
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
			if(x==36)
				subject=subject36;
			if(x==37)
				subject=subject37;
			if(x==38)
				subject=subject38;
			if(x==39)
				subject=subject39;
			if(x==40)
				subject=subject40;
			if(x==41)
				subject=subject41;
			if(x==42)
				subject=subject42;
			if(x==43)
				subject=subject43;



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






			if(x==1)
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
		ui.label_22->setText(s);
		




	}
}

void year4::currentgpa()
{
	
	double gpa,s7;
	double aaa=year3::TScredit;
	double gpayear3=year3::finalgpayear3;
	QString semester7;

	semester7=ui.label_22->text();	
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
		ui.label_10->setText(s);

	}
	

	
	


}

