#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QMenuBar>
#include <QToolBar>
#include <QAction>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    QMenu *fileMenu;
    QMenu *editMenu;

    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *exitAction;

    QTextEdit *editor;

    void createAction();
    void createMenuBar();

private slots:
    void newFile();
    void openFile();
    void saveFile();
    void exitProgram();
};

#endif // MAINWINDOW_H
