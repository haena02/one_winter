// 연결리스트에 원소를 넣었다가 뺏다하는 함수

#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int num) {

    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if(nxt[addr]!=-1) // 맨 끝에 삽입하는게 아니라면
        pre[nxt[addr]] = unused; // 앞원소의 다음주소를 따라가 그 원소의 전원소를 삽입할 원소의 주소로 채운다.
    nxt[addr] = unused; // 앞원소의 다음원소에 삽입할 원소의 주소를 넣는다.
    unused++;
}

void erase(int addr) {
   
    nxt[pre[addr]] = nxt[addr]; // 삭제할원소의 다음주소 전 원소 다음주소에 넣기 
    if (nxt[addr] != -1) // 만약 위에 원소가 -1이면 (뒤에 원소가 있으면)
        pre[nxt[addr]] = pre[addr]; // 원소의 앞주소를 뒤의 원소의 앞주소로 이동
   
}

void traverse() {
    int cur = nxt[0];
    while (cur != -1) {
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}

void insert_test() {
    cout << "****** insert_test *****\n";
    insert(0, 10); // 10(address=1)
    traverse();
    insert(0, 30); // 30(address=2) 10
    traverse();
    insert(2, 40); // 30 40(address=3) 10
    traverse();
    insert(1, 20); // 30 40 10 20(address=4)
    traverse();
    insert(4, 70); // 30 40 10 20 70(address=5)
    traverse();
}

void erase_test() {
    cout << "****** erase_test *****\n";
    erase(1); // 30 40 20 70
    traverse();
    erase(2); // 40 20 70
    traverse();
    erase(4); // 40 70
    traverse();
    erase(5); // 40
    traverse();
}

int main(void) {
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    insert_test();
    erase_test();
}
