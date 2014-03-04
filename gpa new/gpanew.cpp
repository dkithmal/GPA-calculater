#include "gpanew.h"
#include <QString>

gpanew::gpanew(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	ui.pushButton->setEnabled(false);
	ui.pushButton_2->setEnabled(false);
	ui.pushButton_3->setEnabled(false);
	ui.pushButton_4->setEnabled(false);
	
}

gpanew::~gpanew()
{

}
void gpanew::course()
{
	ui.pushButton->setEnabled(true);
	ui.pushButton_2->setEnabled(true);
	ui.pushButton_3->setEnabled(true);
	ui.pushButton_4->setEnabled(true);

	if(ui.radioButton->isChecked())
		courseselect=1;
	else
		courseselect=2;


}
void gpanew::firstyear()
{
	if (courseselect==1)
	{
		year_1 =new year1;
		year_1->show();
	}
	else
	{
		level_1=new level1itm;
		level_1->show();
	}



}
void gpanew::secondyear()
{
	if (courseselect==1)
	{
		year_2 = new year2;
		year_2->show();
	}
	else
	{
		level_2=new level2itm;
		level_2->show();

	}

}
void gpanew::thirdyear()
{
	if (courseselect==1)
	{
		year_3 =new year3;
		year_3->show();
	} 
	else
	{
		level_3 =new level3itm;
		level_3->show();
	}


}

void gpanew::forthyear()
{
	//year_3->STcredit
	if (courseselect==1)
	{
		year_4 =new year4;
		year_4->show();
	} 
	else
	{
		level_4 =new level4itm;
		level_4->show();
	}

}

