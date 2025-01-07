#include "netmapapp.h"
#include "./ui_netmapapp.h"

#include <iostream>

NetMapApp::NetMapApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NetMapApp)
{
    ui->setupUi(this);
}

NetMapApp::~NetMapApp()
{
    delete ui;
}

void NetMapApp::on_home_btn_clicked()
{
    std::cout << "Home button has been clicked." << std::endl;
}


void NetMapApp::on_start_btn_clicked()
{
    std::cout << "Start button has been clicked." << std::endl;
}


void NetMapApp::on_help_btn_clicked()
{
    std::cout << "Help button has been clicked." << std::endl;
}


void NetMapApp::on_stop_btn_clicked()
{
    std::cout << "Stop button has been clicked." << std::endl;
}
