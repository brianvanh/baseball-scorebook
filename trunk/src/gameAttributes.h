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
	
	private:
		bool getVariablesFromFile();
		void setVariable(std::string key, std::string value);
		void writeAttributes(std::ofstream *out);
		bool setVariablesFromUser();
		int innings, startingBalls, startingStrikes, players;
		bool extras, bunt, hbp, stealing, balks;
};

#endif // __GAMEATTRIBUTES_H__
