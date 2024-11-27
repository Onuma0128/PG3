#include <stdio.h>

#include <list>
using namespace std;

void printStationList(const list<const char*>& stationList, const char* title) {
    printf("--------------------------\n");
	printf("%s\n", title);
    printf("--------------------------\n");
	for (const char* station : stationList) {
		printf("%s\n", station);
	}
}


int main() {

    // 1970年の駅リスト
    list<const char*> station_1970 = {
        "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori",
        "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba",
        "Shin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro",
        "Gotanda", "Osaki", "Shinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
    };

    // 2019年の駅リスト（西日暮里を追加する)
    list<const char*> station_2019 = station_1970;
    auto it = station_2019.begin();
    // 7番目に西日暮里を挿入
    advance(it, 7);
    station_2019.insert(it, "Nishi-Nippori");

    // 2022年の駅リスト（高輪ゲートウェイを追加する)
    list<const char*> station_2022 = station_2019;
    auto it2 = station_2022.begin();
    // 25番目に高輪ゲートウェイを挿入
    advance(it2, 25);
    station_2022.insert(it2, "Takanawa-Gateway");

    // 全駅のリストを出力
    printStationList(station_1970, "Stations_1970:");
    printStationList(station_2019, "Stations_2019:");
    printStationList(station_2022, "Stations_2022:");

    return 0;
}