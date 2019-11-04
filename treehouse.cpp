#include "treehouse.h"



//Constructor
TreeHouse::TreeHouse()
{
    // Instantiate treeList.
    treeList = new QList<QTreeWidget* >();
}

/**
 * @brief traverseXml
 * @param root
 *
 * Might not be necessary to use this yet.
 * TODO: Finish this off when tree representations have been confirmed
 */
void TreeHouse::traverseXml(const QDomNode& root)
{
    QDomNode domNode = root.firstChild();
    QDomElement domElement;

    while(!(domNode.isNull()))
    {
        if(domNode.isElement())
        {
            domElement = domNode.toElement();
            if(!(domElement.isNull()))
            {
                // Add it to the list?
            }
        }
        traverseXml(domNode);
        domNode = domNode.nextSibling();
    }
}

// Returns a list of nodes?
//void TreeHouse::getAllNodesByTreeId(const int id)
//{
//    // Get the tree corresponding to the id parameter
//    // Get its node
//    // Pass the node to the traverse method
//}

QTreeWidget* TreeHouse::getTreeById(const int id)
{
    // Get the tree corresponding to the id parameter
    return treeList->takeAt(id);
}

void TreeHouse::addTree(QTreeWidget* newTree)
{
    treeList->append(newTree);
}

// Deallocates memory, cleans stuff
void TreeHouse::clean()
{
   free(treeList);
}
