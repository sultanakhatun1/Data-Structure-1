Shift Left K Cell ->
#include <stdio.h>
void shiftLeft(int source[], int size, int k) {
for (int i = 0; i < size - k; i++) {
source[i] = source[i + k];
}
for (int i = size - k; i < size; i++) {
source[i] = 0;
}
}
int main() {
int source[] = {10, 20, 30, 40, 50, 60};
int k = 3;
int size = sizeof(source) / sizeof(source[0]);
printf("Natural Array: [ ");

for (int i = 0; i < size; i++) {
printf("%d \n", source[i]);
}
printf("]\n");
shiftLeft(source, size, k);
printf("After shifting left by %d positions: [ ", k);
for (int i = 0; i < size; i++) {
printf("%d ", source[i]);
}

printf("]\n");
return 0;
}

Shift Right K Cell ->
#include <stdio.h>
void shiftRight(int source[], int size, int k) {
for (int i = size - 1; i >= k; i--) {
source[i] = source[i - k];
}
for (int i = 0; i < k; i++) {
source[i] = 0;
}
}
int main() {
int source[] = {10, 20, 30, 40, 50, 60};
int k = 3;
int size = sizeof(source) / sizeof(source[0]);
printf("Original array: [ ");
for (int i = 0; i < size; i++) {
printf("%d ", source[i]);
}
printf("]\n");

shiftRight (source, size, k);
printf("After shifting Right by %d positions: [ ", k);
for (int i = 0; i < size; i++) {
printf("%d ", source[i]);
}
printf("]\n");
return 0;
}

Rotate Left K Sell->
#include <stdio.h>
void rotateLeft(int source[], int size, int k) {
int temp[k];
for (int i = 0; i < k; i++) {
temp[i] = source[i];
}
for (int i = 0; i < size - k; i++) {
source[i] = source[i + k];
}
for (int i = size - k, j = 0; i < size; i++, j++) {
source[i] = temp[j];
}
}
int main() {

int source[] = {10, 20, 30, 40, 50, 60};
int k = 3;
int size = sizeof(source) / sizeof(source[0]);
printf("Original array: [ ");
for (int i = 0; i < size; i++) {
printf("%d ", source[i]);
};
printf("]\n");
rotateLeft(source, size, k);
printf("After rotating left by %d positions: [ ", k);
for (int i = 0; i < size; i++) {
printf("%d ", source[i]);
}
printf("]\n");
return 0;
}

Rotate Right K Sell->
#include <stdio.h>
void rotateRight(int source[], int size, int k) {
int temp[k];
for (int i = size - k, j = 0; i < size; i++, j++) {
temp[j] = source[i];
}
