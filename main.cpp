#include <iostream>
#include <string>
#include <chrono>

int main() {

    std::string a(100000, 'a');

    // コピー計測
    auto start_copy = std::chrono::high_resolution_clock::now();
    std::string b = a;  // コピー
    auto end_copy = std::chrono::high_resolution_clock::now();
    auto copy_time = std::chrono::duration_cast<std::chrono::microseconds>(end_copy - start_copy).count();

    // ムーブ計測
    auto start_move = std::chrono::high_resolution_clock::now();
    std::string c = std::move(a);  // ムーブ
    auto end_move = std::chrono::high_resolution_clock::now();
    auto move_time = std::chrono::duration_cast<std::chrono::microseconds>(end_move - start_move).count();

    // 結果表示
    std::cout << "Copy time: " << copy_time << " μs" << std::endl;
    std::cout << "Move time: " << move_time << " μs" << std::endl;

    return 0;
}
