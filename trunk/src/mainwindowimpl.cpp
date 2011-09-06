#include <QDesktopWidget>
#include <QDebug>
#include <iostream>
#include "mainwindowimpl.h"
#include "player.h"
#include "gameAttributes.h"

using namespace std;

MainWindowImpl::MainWindowImpl( QWidget * parent, Qt::WFlags f) 
	: QMainWindow(parent, f)
{
	setupUi(this);
	setStatusBarMessage("Initializing!", 0);
	
	/** Set the position to the center of the screen **/
	
	QDesktopWidget *desktop = QApplication::desktop();

	QSize windowSize = size(); // size of our application window
	int x = ((desktop->width() - windowSize.width()) / 2);
	int y = ((desktop->height() - windowSize.height()) / 2) - 50;
 
	// move window to desired coordinates
	move ( x, y );
	
	connect( actionQuit, SIGNAL( triggered() ), this, SLOT( close() ) );
	connect( newGameButton, SIGNAL( clicked() ), this, SLOT( startNewGame() ) );
	connect( quitButton, SIGNAL( clicked() ), this, SLOT( close() ) );
	connect( modifyButton, SIGNAL( clicked() ), this, SLOT( modify() ) );
	connect( actionGame_Attributes, SIGNAL( triggered() ), this, SLOT( getAttrs() ) );
}

void MainWindowImpl::close()
{
	qDebug() << "Quitting!";
	QApplication::quit();
}

void MainWindowImpl::setStatusBarMessage(const char* str, int ms)
{
	statusBar()	 -> showMessage(tr(str), ms);
}

void MainWindowImpl::clearStatusBarMessage()
{
	statusBar() -> clearMessage();
}

void MainWindowImpl::startNewGame()
{
	qDebug() << "Starting new game!";
}

void MainWindowImpl::getAttrs()
{
	qDebug() << "Getting Attributes!";
	GameAttributes ga;
	ga.show();
	ga.exec();
}

void MainWindowImpl::modify()
{
	Player p1("Pittenger", "Aaron");
	qDebug() << p1.getLastName().c_str() << ", " << p1.getFirstName().c_str();
}