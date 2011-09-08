#include <QDebug>
#include <QDialog>
#include <QDebug>
#include <iostream>
#include <fstream>
#include <string>

#include "gameAttributes.h"
#include "tools.h"

GameAttributes::GameAttributes(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
	if(getVariablesFromFile())
	{
		qDebug() << "Variables set correctly";
	}
	
	connect( buttonBox, SIGNAL( accepted() ), this, SLOT( okSelected() ) );
	connect( buttonBox, SIGNAL( rejected() ), this, SLOT( cancelSelected() ) );
}

void GameAttributes::okSelected()
{
	qDebug() << "OK Selected!";
	
	setVariablesFromUser();
	
	std::ofstream myfile("settings.txt");	
	
	if (myfile.is_open())
	{
		writeAttributes(&myfile);
		myfile.close();
	}
	else 
		qDebug() << "Unable to open file";
	
	close();
}

void GameAttributes::cancelSelected()
{
	qDebug() << "Cancel Selected!";
	close();
}

bool GameAttributes::getVariablesFromFile()
{
	std::string line;
	std::ifstream myfile("settings.txt");
	std::string key, value;
	size_t pos;
	
	if (myfile.is_open())
	{
		while ( myfile.good() )
		{
			getline (myfile,line);
			pos = line.find("=");
			key = line.substr (0, pos);
			value = line.substr(pos+1);
			setVariable(key, value); 
			
		}
		myfile.close();
		return true;
	}
	else 
	{
		qDebug() << "Unable to open file";
	}
	return false;
}

bool GameAttributes::setVariablesFromUser()
{
	innings = inningsSpinBox -> value();
	extras = extrasCheckBox -> isChecked();
	bunt = buntingCheckBox -> isChecked();
	hbp = hbpCheckBox -> isChecked();
	stealing = stealingCheckBox -> isChecked();
	balks = balksCheckBox -> isChecked();
	startingBalls = ballsSpinBox -> value();
	startingStrikes = strikesSpinBox -> value();
	players = playersSpinBox -> value();
	return true;
}

void GameAttributes::setVariable(std::string key, std::string value)
{
	if(key == "INNINGS")
	{
		innings = atoi(value.c_str());
		inningsSpinBox -> setValue(innings);
	}
	else if(key == "EXTRAS")
	{
		if(value == "true")
			extras = true;
		else
			extras = false;
		extrasCheckBox -> setChecked(extras);
	}
	else if(key == "BUNTING")
	{
		if(value == "true")
			bunt = true;
		else
			bunt = false;
		buntingCheckBox -> setChecked(bunt);
	}
	else if(key == "HBP")
	{
		if(value == "true")
			hbp = true;
		else
			hbp = false;
		hbpCheckBox -> setChecked(hbp);
	}
	else if(key == "STEALING")
	{
		if(value == "true")
			stealing = true;
		else
			stealing = false;
		stealingCheckBox -> setChecked(stealing);
	}
	else if(key == "BALKS")
	{
		if(value == "true")
			balks = true;
		else
			balks = false;
		balksCheckBox -> setChecked(balks);
	}
	else if(key == "BALLS")
	{
		startingBalls = atoi(value.c_str());
		ballsSpinBox -> setValue(startingBalls);
	}
	else if(key == "STRIKES")
	{
		startingStrikes = atoi(value.c_str());
		strikesSpinBox -> setValue(startingStrikes);
	}
	else if(key == "PLAYERS")
	{
		players = atoi(value.c_str());
		playersSpinBox -> setValue(players);
	}
	
}

void GameAttributes::writeAttributes(std::ofstream *out)
{
	Tools t = Tools();
	*out << "INNINGS=" << innings << std::endl;
	*out << "EXTRAS=" << t.boolToString(extras) << std::endl; 
	*out << "BUNTING=" << t.boolToString(bunt) << std::endl;
	*out << "HBP=" << t.boolToString(hbp) << std::endl;
	*out << "STEALING=" << t.boolToString(stealing) << std::endl;
	*out << "BALKS=" << t.boolToString(balks) << std::endl;
	*out << "BALLS=" << startingBalls << std::endl;
	*out << "STRIKES=" << startingStrikes << std::endl;
	*out << "PLAYERS=" << players << std::endl;
}