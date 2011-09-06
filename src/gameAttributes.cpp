#include "gameAttributes.h"
#include <QDebug>
#include <QDialog>
#include <QDebug>

GameAttributes::GameAttributes(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
	
	connect( buttonBox, SIGNAL( accepted() ), this, SLOT( okSelected() ) );
	connect( buttonBox, SIGNAL( rejected() ), this, SLOT( cancelSelected() ) );
}

void GameAttributes::okSelected()
{
	qDebug() << "OK Selected!";
}

void GameAttributes::cancelSelected()
{
	qDebug() << "Cancel Selected!";
	close();
}
