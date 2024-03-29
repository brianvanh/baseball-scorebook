#ifndef MAINWINDOWIMPL_H
#define MAINWINDOWIMPL_H

#include <QMainWindow>
#include "ui_mainwindow.h"

class MainWindowImpl : public QMainWindow, public Ui::MainWindow
{
Q_OBJECT
public:
	MainWindowImpl( QWidget * parent = 0, Qt::WFlags f = 0 );
private slots:
	void close();
	void startNewGame();
	void modify();
	void getAttrs();
	
private:
	void setStatusBarMessage(const char* str, int ms);
	void clearStatusBarMessage();	
};
#endif