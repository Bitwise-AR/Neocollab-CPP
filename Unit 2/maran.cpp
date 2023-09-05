#include <iostream>
#include <vector>
using namespace std;
class Item
{
public:
    string name;
    int numBids;
    Item(const string &_name) : name(_name), numBids(0) {}

    void placeBid()
    {
        numBids++;
    }
};

int main()
{
    int numItems, numBids;
    cin >> numItems;
    vector<Item> items;
    for (int i = 0; i < numItems; ++i)
    {
        string iname;
        cin >> iname;
        items.emplace_back(iname);
    }
    cin >> numBids;
    bool bids = false;
    for (int i = 0; i < numBids; ++i)
    {
        int itemIndex;
        cin >> itemIndex;
        if (itemIndex >= 0 && itemIndex < numItems)
        {
            items[itemIndex].placeBid();
            bids = true;
        }
        
    }

    int maxBids = -1;
    for (const Item &item : items)
    {
        if (item.numBids > maxBids)
        {
            maxBids = item.numBids;
        }
    }

    if (!bids)
    {
        cout << "No bids placed on any item." << endl;
    }
    else
    {
        for (const Item &item : items)
        {
            if (item.numBids == maxBids)
            {
                cout << item.name << endl;
            }
        }
    }

    return 0;
}
