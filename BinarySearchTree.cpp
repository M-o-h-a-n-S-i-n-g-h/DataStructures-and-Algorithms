#include<iostream>

using namespace std;

struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;
};



int main()
{	
	BstNode* root;
	BstNode *p,*q;
	int n, i, item;
	cout << "Enter the number of nodes" << endl;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		BstNode *p = new BstNode();
		BstNode* root = NULL;
		cin >> item;
		p->data = item;
		p->left = NULL;
		p->right = NULL;
		if (i == 0)
		{
			p = root;
		}
		else {
			while (1)
				q = root;
			{
				if (p->data > q->data)
				{
					if (q->right == NULL) {
						q->right = p;
						break;
					}
					else
					{
						q = q->right;
					}
				}
				else
				{
					if (q -> left == NULL)
					{
						q->left = p;
						break;
					}
					else
					{
						q = q->left;
					}
				}
			}
		}
	}
	return 0 ;
}