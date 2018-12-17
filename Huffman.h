#include <stdbool.h>

struct huffData;
typedef struct huffData huffData;

struct huffNode;
typedef struct huffNode huffNode;

struct nodeLists;
typedef struct nodeLists nodeLists;

int *getHeapFreq(const int arrLen, int freqs[]);
char *getHeapData(const int arrLen, char chars[]);
int testGetFreq(int input, int freqs[], int index);
int testForInt(int converted);
void freeHuffman(nodeLists *l1, nodeLists *l2, huffData *array,huffNode *base);
huffData *initialiseInput(int arrLen);
