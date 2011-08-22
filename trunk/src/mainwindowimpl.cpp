#include <QString>
#include <QDesktopWidget>
#include <QDebug>
#include <QThread>
#include "mainwindowimpl.h"

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
	//clearStatusBarMessage(); 
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