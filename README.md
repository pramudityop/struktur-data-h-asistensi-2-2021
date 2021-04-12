# struktur-data-h-asistensi-2-2021
## Preorder, Inorder, Postorder
### Penjelasan Code
Pertama, membuat struct untuk tree yang akan dibuat, lalu membuat function berupa `printPostorder`, `printInorder`, dan `printPostorder`
isi dari ketiga function sama, hanya berbeda pada waktu jalannya proses
- pada `printPostorder`, program akan mencari kearah kiri sampai habis, lalu akan mengoutput data di kiri, lalu proses akan mundur 1 dan membaca data di kanan. ketika kiri dan kanan sudah ter output, maka proses kembali ke parent lalu meng output parent dari data kiri dan kanan, setelah itu akan berpindah ke data yang ada di kanan dan mencari kiri lagi sampai habis. Dengan input `1 2 3 4 5 6`, program akan output berupa `4 5 2 6 3 1`
- pada `printInorder`, program akan mencari ke arah kiri sampai habis, lalu akan mengoutput data di kiri, program akan mengoutput semua kiri sampai kiri habis, baru mulai kembali kebawah dan mengoutput kanan, dengan kata lain, program akan mencari kiri kiri  output kiri , lalu output kiri kanan. Dengan input `1 2 3 4 5 6` program akan output `4 2 5 1 6 3`
- pada `printPreorder`, program akan output dimulai dengan root, lalu mencari ke kiri pertama, lalu kiri kedua sampai kiri ke-n baru mencari ke kanan, lalu mundur 1 kali untuk mencari kanan lagi. dengan input `1 2 3 4 5 6`, program akan output berupa `1 2 4 5 3 6`.
