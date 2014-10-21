#define MAX_QUEUE_LENGTH 6
#define NOISE_DELAY 10000;
#define DELAY 500000;

typedef struct {
  void (*justTrainTaskThings)(void*);
  void* trainTaskPtr;
} TCB;

typedef enum { FALSE = 0, TRUE = 1} bool;

void TrainCom(void* data);
void SwitchControl(void* data);
void NorthTrain(void* data);
void EastTrain(void* data);
void WestTrain(void* data);
void Schedule(void* data);

static bool north;
static bool east;
static bool west;

static bool toggleNorth;
static bool toggleEast;
static bool toggleWest;

static bool gridlock;
static bool trainPresent;
static unsigned int trainSize;
static unsigned int globalCount;
static unsigned int traversalTime;
static unsigned int startTime;

static int seed;

typedef struct {
  bool* north;
  bool* east;
  bool* west;
  bool* gridlock;
  bool* trainPresent;  
  unsigned int* trainSize;
  unsigned int* globalCount;
} trainComData;

typedef struct {
  bool* toggleNorth;  
  bool* north;
  unsigned int* globalCount;
  unsigned int* traversalTime;
} northTrainData;

typedef struct {
  bool* toggleWest;  
  bool* west;
  unsigned int* globalCount;
  unsigned int* traversalTime;
} westTrainData;

typedef struct {
  bool* toggleEast;
  bool* east;
  unsigned int* globalCount;
  unsigned int* traversalTime;
} eastTrainData;


typedef struct {
  bool* north;
  bool* east;
  bool* west;
  bool* gridlock;
  bool* trainPresent;
  unsigned int* trainSize;
  unsigned int* globalCount;
  unsigned int* traversalTime;
  unsigned int* startTime;
} switchControlData;

typedef struct {  
  unsigned int* globalCount;
} scheduleData;
