#ifndef CHENHUFFMAN_H
#define CHENHUFFMAN_H

#include <QMainWindow>

struct HuffNode
{
    unsigned char ch;  //字节符
    long count = 0;  //字节出现频度
    int parent = -1; //父节点
    int lch = -1;  //左孩子
    int rch = -1;  //右孩子
    char bits[256]; // 哈夫曼编码
};

namespace Ui {
class ChenHuffman;
}

class ChenHuffman : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChenHuffman(QWidget *parent = 0);
    ~ChenHuffman();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    float Compress(HuffNode HuffTreeNode[], char* filename, long filelength, int count);//压缩文件

    void UnCompress(char* filename);

private:
    Ui::ChenHuffman *ui;
};

#endif // CHENHUFFMAN_H
