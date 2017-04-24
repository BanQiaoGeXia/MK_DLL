#ifndef _HUFF_MAN_H_
#define _HUFF_MAN_H_

/*
 * 红黑树势满足如下性质的二叉查找树
 * （1）每个结点只能是红色或者黑色结点种的一种
 * （2）根结点是黑色的
 * （3）叶子结点是黑色的（具体实现可以定义个空接点结点或者NULL默认表示为叶子结点）
 * （4）如果一个结点是红色的， 则他的孩子结点为黑色
 * （5）对每个结点而言， 从这个结点到叶子结点的仁义路径上具有相同数目的黑色结点
 */

/*
 * 红黑树的特点（也是红黑树是一棵好的二叉树的原因）：
 * 一棵具有N个内结点（即真正的数据结点）的红黑树的黑高度bh至多为2lg(n+1)
 * 证明：先求证：一棵以x的根的红黑树种至少包含2(hb(x))(指数)-1个内结点
 * （1）如果x的高度为0， 则x至少包含2的0次方-1=0个内结点， 成立
 * （2）若x有子树，则其子树的黑高度为 bh(x) （孩子节点为黑色时），或者bh(x) -1（孩子结点为红色或者黑色时） 
 * （3）因为x的孩子的黑高度小于x的黑高度，利用归纳假设，可以得出每个孩子至少包含2的 bh(x) -1 次方 - 1 
 * （4）于是以x为根的子树至少包含 2 (bh(x) -1 次方) - 1 + 2 (bh(x) -1 次方) - 1 + 1 = 2 (bh(x)次方) - 1 个内结点 
 *
 *  又根据性质（4），树的黑高度至少为 h / 2 , 所以 n >= 2 (h / 2 次方) - 1 => h <= 2 lg (n - 1) 
 */

//定义颜色类型
typedef enum color_t {
	RED = 0,
	BLACK = 1
}color_t;

//定义数据类型
typedef int data_t;

//定义红黑树的结点结构
typedef struct RBTreeNode {
	data_t data;
	color_t color;
	RBTreeNode *left;
	RBTreeNode *right;
	RBTreeNode *parent;
}RBTreeNode, *RBTree;

//查找操作， 不存在返回NULL
RBTreeNode *rbSearch(RBTree *rbTree, data_t key);

//返回最小结点
RBTreeNode *rbMinImum(RBTree *rbTree);

//返回最大结点
RBTreeNode *rbMaxImum(RBTree *rbTree);

//返回x的后继结点
RBTreeNode *rbSuccessor(RBTreeNode *x);

//返回x的前驱结点
RBTreeNode *rbPredecessor(RBTreeNode *x);

//插入结点
bool rbInsertNode(RBTree *rbTree, data_t data);

//删除第一个值为data的结点
bool rbDeleteNode(RBTree *rbTree, data_t data);

//中序遍历
void rbInorderTraversal(RBTree *rbTree, void(*visitor)(RBTreeNode *node));

#endif