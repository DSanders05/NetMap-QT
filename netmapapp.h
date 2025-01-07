#ifndef NETMAPAPP_H
#define NETMAPAPP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class NetMapApp;
}
QT_END_NAMESPACE

class NetMapApp : public QMainWindow
{
    Q_OBJECT

public:
    NetMapApp(QWidget *parent = nullptr);
    ~NetMapApp();

private slots:
    void on_home_btn_clicked();

    void on_start_btn_clicked();

    void on_help_btn_clicked();

    void on_stop_btn_clicked();

private:
    Ui::NetMapApp *ui;
};
#endif // NETMAPAPP_H
