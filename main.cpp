#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // ID格納vector
    vector<string> studentID;

    // ファイルを読み込みIDを格納
    ifstream filePath("PG3.txt");
    string id;
    while (getline(filePath, id, ',')) {
        studentID.push_back(id);
    }
    // 閉じる
    filePath.close();

    // 昇順にソート
    sort(studentID.begin(), studentID.end());

    // ソートされたIDを描画
    cout << "ソートされたメールアドレス一覧:" << endl;
    for (const auto& id : studentID) {
        cout << id << endl;
    }

    return 0;
}