#ifndef __GAMEATTRIBUTES_H__
#define __GAMEATTRIBUTES_H__

#include <QDialog>
#include "ui_gameoptions.h"

class GameAttributes : public QDialog, private Ui::GameOptions
{
	Q_OBJECT

	public:
		GameAttributes(QWidget *parent = 0);

	private slots:
		void okSelected();
		void cancelSelected();
		//void on_inputSpinBox2_valueChanged(int value);
};

#endif // __GAMEATTRIBUTES_H__
