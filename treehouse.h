#ifndef TREEHOUSE_H
#define TREEHOUSE_H

#include <QtXml/QDomElement>
#include <QtXml/QDomNode>
#include <QList>
#include <QTreeWidget>

class TreeHouse
{
    //Private attributes
private:
        QList<QTreeWidget* > * treeList;

/* Traversal */
    void traverseXml(const QDomNode& root);

public:
    TreeHouse();

    void getAllNodesByTreeId(const int id);

    QTreeWidget* getTreeById(const int id);

    void addTree(QTreeWidget* newTree);

    void removeTreeById(int id);

    void clean();
};



#endif // TREEHOUSE_H
