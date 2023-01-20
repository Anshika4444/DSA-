  #include<bits/stdc++.h>
  using namespace std;

  //Huffman tree node
  struct MinHeapNode{
      char data;
      int freq;

      MinHeapNode *left,*right;

      MinHeapNode(char data,int freq){
          left=right=NULL;
          this->data=data;
          this->freq=freq;
     }
};

//For comparison of two nodes.
struct compare{

    bool operator()(MinHeapNode *l,MinHeapNode *r)
    {
        return (l->freq>r->freq);
    }
};
void printCodes(struct MinHeapNode* root,string str){
   if(!root){
       return;
   }
   if(root->data!='$'){
       cout<<root->data<<": "<<str<<endl;
   }

   printCodes(root->left,str+"0");
   printCodes(root->right,str+"1");
}

void HuffmanCodes(char data[],int freq[],int size){
struct MinHeapNode *left,*right,*top;
priority_queue<MinHeapNode*,vector<MinHeapNode*>,compare> minheap;
for(int i=0;i<size;i++){
    minheap.push(new MinHeapNode(data[i],freq[i]));
 }
 while(minheap.size()!=1){
     left = minheap.top();
     minheap.pop();
     right = minheap.top();
     minheap.pop();
     top = new MinHeapNode('$',left->freq+right->freq);
     top->left = left;
     top->right = right;
     minheap.push(top);
 }
 printCodes(minheap.top()," ");
}

int main(){
  int n;
  cin>>n;
  char arr[n];
  int freq[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  for(int i=0;i<n;i++)
    cin>>freq[i];
  HuffmanCodes(arr,freq,n);
return 0;
}

