// // #include <iostream>

// int main() {
//     // Ввод выданных бейджиков
//     int n;
//     std::cin >> n;
//     int* issued = new int[n];
//     for (int i = 0; i < n; i++) {
//         std::cin >> issued[i];
//     }
    
//     // Ввод возвращенных бейджиков
//     int m;
//     std::cin >> m;
//     int* returned = new int[m];
//     for (int i = 0; i < m; i++) {
//         std::cin >> returned[i];
//     }
    
//     // Выводим бейджики, которые есть в выданных, но нет в возвращенных
//     bool first = true;
    
//     for (int i = 0; i < n; i++) {
//         bool isReturned = false;
        
//         // Проверяем, был ли этот бейджик возвращен
//         for (int j = 0; j < m; j++) {
//             if (issued[i] == returned[j]) {
//                 isReturned = true;
//                 break;
//             }
//         }
        
//         // Если не был возвращен - выводим
//         if (!isReturned) {
//             if (!first) {
//                 std::cout << " ";
//             }
//             std::cout << issued[i];
//             first = false;
//         }
//     }
    
//     delete[] issued;
//     delete[] returned;
    
//     return 0;
// 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n ;
//     int fullSum = 0;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         fullSum += x;
//     }
//     if (fullSum%2==0){
//         cout << "YES";
//     }else{
//         cout << "NO";
//     }

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n =0;
//     cin >> n;
//     int* votes = new int[n];
//     for(int i =0; i<n; i++){
//         cin >> votes[i];
//     }
//     int candid = votes[0];
//     int count = 0;
//     for(int i =0; i<n; i++){
//         if(votes[i]=candid){
//             count++;
//         } else{
//             count--;
//         }
//     }
//     int candidvote = 0;
//     for(int i =0; i<n; i++){
//         if(votes[i]==candid){
//             candidvote++;
//         }
//     }
//     if(candidvote>=n/2){
//         cout << candid;
//     }
//     return 0;
//     delete[] votes ;

// }