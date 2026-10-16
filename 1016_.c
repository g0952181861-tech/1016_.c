#include <stdio.h>
#include <stdlib.h>

// 定義節點 (Node) 結構
typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    // 1. 利用 malloc() 建立第一個節點，並儲存資料 20
    Node* first = (Node*)malloc(sizeof(Node));
    if (first == NULL) {
        printf("記憶體配置失敗！\n");
        return 1;
    }
    first->data = 20;
    first->next = NULL;

    // 2. 利用 malloc() 建立第二個節點，並儲存資料 30
    Node* second = (Node*)malloc(sizeof(Node));
    if (second == NULL) {
        printf("記憶體配置失敗！\n");
        free(first);
        return 1;
    }
    second->data = 30;
    second->next = NULL;

    // 3. 利用 Pointer 將二個節點串接成一個 Linked List
    first->next = second;

    // 4. 輸出二個節點中的資料（符合輸出範例格式）
    printf("First Node : %d\n", first->data);
    printf("Second Node: %d\n", first->next->data); // 也可以直接用 second->data

    // 5. 釋放動態配置的記憶體
    free(first);
    free(second);

    return 0;
}